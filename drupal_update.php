<?php

// known issues: does not update an object if just child objects got changed.

/*
// +--------------------------------------------------------+
// | Implemented 2013/10 by Martin Thaller                  |
// +--------------------------------------------------------+

    Credits:
    this script is based on information found at:  http://www.gregboggs.com/drupal-7-import-content/

    Field_Collection handling: http://audiblecode.com/blog/programmatically-create-and-update-field-collection-item-node-entity-api
                           and http://devblog.com.au/programmatically-create-field-collections-in-drupal

    updateFieldCollection: http://stackoverflow.com/questions/17731629/modifying-a-field-collection-programmatically-missing-hostentity-fields

// +--------------------------------------------------------+
// | run: drush php-script drupal_update.php                |
// +--------------------------------------------------------+



    @TODO: NewURL / images

    // STORY_RESOURCES werden dupliziert!

*/


function updateFieldCollection($node, $collection, $fields = Array(), $index = 0) {

    if ($node && $collection && !empty($fields)) {

        // Get the field collection ID
        $eid = $node->{$collection}[LANGUAGE_NONE][$index]['value'];

        // Load the field collection with the ID from above
        $entity = entity_load_single('field_collection_item', $eid);

        // Wrap the loaded field collection which makes setting/getting much easier
        $node_wrapper = entity_metadata_wrapper('field_collection_item', $entity);

        // Loop through our fields and set the values
        foreach ($fields as $field => $data) {
            $node_wrapper->{$field}->set($data);
        }

        // Once we have added all the values we wish to change then we need to
        // save. This will modify the node and does not require node_save() so
        // at this point be sure it is all correct as this will save directly
        // to a published node
        $node_wrapper->save(true);
    }
}

function update_migrated_objects() {

    $PossibleContentTypes = array("news_story",
                                  "media_advisory",
                                  "press_release",
                                  "dg_statement",
                                  "photo_essay",
                                  "photo_gallery");
                                  // shall be exended after building additional content types

    // the following section is used for testing purposes
//    $cids = array();
//    $cids[]= 6269; // news_story
//    $cids[]=  4499; // media_advisory
//    $cids[]=  6917; // press_release
//    $cids[]=  11266; // dg_statement
//    $cids[]=  4706; // photo_essay

    // Drupal UserID
    $uid = 24; // mjt

    // load taxonomy terms...
    $txterms = array();
    $txquery = "SELECT name FROM taxonomy_term_data WHERE vid = 1";
    $txresult = db_query($txquery);
    foreach ($txresult as $row) $txterms[]= $row->name;
    // got all existing tags in $txterms now...


    // get appropriate migrated objects
    $query = "SELECT * FROM mtcm.mt_migrated_content WHERE ContentType IN ('".join("','", $PossibleContentTypes)."') AND ".(is_array($cids) && sizeOf($cids) > 0 ? "CID IN (".join(",",$cids).") AND ":"")."Imported = 1 AND LastImported < LastModified";
    $result = db_query($query);


    // step trough the result
    foreach ($result as $row) {

        drush_print("trying to update ".$row->ContentType." #".$row->CID);

        if ($row->DrupalID == 0)
        {
            drush_print("object got no NodeID!");
        }
        else
        {
            // initialize
            $txprop = "";
            $resprop = "";
            $reslnkprop = "";
            $imgprop = "";
            $imgcapprop = "";
            $addtmetadata = "";


            $node = node_load(intval($row->DrupalID));
            $node->type = $row->ContentType;

            if ($node->nid > 0) drush_print("loaded node: ".$node->nid);

            if ($row->Headline!="") {

                if ($node->title!=strip_tags($row->Headline))
                {
                    $node->title = strip_tags($row->Headline);
                    drush_print("updated title: ".$node->title);
                }
            }
            elseif($row->SubHeadline!="") {

                if ($node->title!=strip_tags($row->SubHeadline))
                {
                    $node->title = strip_tags($row->SubHeadline);
                    drush_print("updated title: ".$node->title);
                    $row->SubHeadline = "";
                }
            }
            elseif ($node->title != "UNNAMED ".strtoupper($node->type)." (".$row->CID.")")
            {
                $node->title = "UNNAMED ".strtoupper($node->type)." (".$row->CID.")";
                drush_print("updated title: ".$node->title);
                $node->status = 0; // unpublished
            }

            $body = $row->Body;

            $url = str_replace(" ","_",$node->title); // ##### should take care of special characters here...
            $node->path = array('alias' => $url) ; // Setting a node path


//            node_object_prepare($node); // Set some default values.

    //      got to build different sections for out content types like
    //      Insert the content into the node

            switch($node->type)
            {
                default:
                case "bootstrap_carousel":
                case "page":
                case "panel":
                case "iaea_video":
                    die("not implemented yet!");
                break;

                case "photo_essay":

                    if ($body!="" && $node->field_photoessay_teaser[$node->language][0]['value'] != $body)
                    {
                        $node->field_photoessay_teaser[$node->language][0]['value'] = $body;
                        $node->field_photoessay_teaser[$node->language][0]['format'] = 'filtered_html';
                        drush_print("updated body");
                    }

                    if ($row->PublishingDate!="" && $node->field_photoessay_date[$node->language][0]['value'] != $row->PublishingDate)
                    {
                        $node->field_photoessay_date[$node->language][0]['value'] = $row->PublishingDate;
                        drush_print("updated photoessay date");
                    }

                    $txprop = "field_photoessay_tags";
                    $imgprop = "field_photoessay_photos";

    // IMAGE HANDLING FOR PHOTO ESSAYS
    // no cover image at the moment, no teaser text at the moment

                    $img_query = "SELECT * FROM mtcm.mt_migrated_image WHERE CID = ".$row->CID." AND ImageStatus < '400' ORDER BY RID";
                    $img_result = db_query($img_query);

                    $cnt = 0;
                    foreach ($img_result as $img_row) {

                        if ($img_row->Imported == 0 || $img_row->LastImported < $img_row->LastModified)
                        {
                            //grab the file for this node based on the "schema" from the old website...
                            $remote_url = ($img_row->CorrOldURL!="" ? $img_row->CorrOldURL : $img_row->OldURL);
                            $file_path = sys_get_temp_dir().substr($remote_url, max(strrpos($remote_url, "/"),strrpos($remote_url, "\\")));

                            $fcont="";
                            $handle = @fopen($remote_url, "r");
                            if ($handle)
                            {
                               while (!feof($handle)) $fcont.= fgets($handle, 4096);
                               fclose($handle);

                                $fd = fopen ($file_path, "wb");
                                fwrite($fd, $fcont);
                                fclose($fd);
                            }

                            if (file_exists($file_path)) {

                                $file = (object) array(
                                'uid' => $uid ,
                                'uri' => $file_path,
                                'filemime' => file_get_mimetype($file_path),
                                'status' => 1,
                                'alt' => substr($img_row->ImageText,0,1023),
                                'width' => $img_row->Width,
                                'height' => $img_row->Height
                                );
                                $file = file_copy($file, "public://", FILE_EXISTS_ERROR);
                                $node->{$imgprop}[$node->language][$cnt] = (array)$file;

                                chmod(drupal_realpath($file->uri), 0777);

                                $newurl = substr(drupal_realpath($file->uri),strlen($_SERVER["PWD"]));

                                $img_upd_query = "UPDATE mtcm.mt_migrated_image SET NewURL='".$newurl."', LastImported='".strftime("%Y-%m-%d %H:%M:%S")."', Imported=1  WHERE CID = '".$img_row->CID."' AND RID = '".$img_row->RID."'";
                                $img_upd_result = db_query($img_upd_query);
                            }
                        }

                        $cnt++;
                        $addtmetadata.= $img_row->ImageText." ";
                    }

                break;

                case "photo_gallery":

//                    if ($body!="" && $node->field_photogallery_teaser[$node->language][0]['value'] != $body)
//                    {
//                        $node->field_photogallery_teaser[$node->language][0]['value'] = $body;
//                        $node->field_photogallery_teaser[$node->language][0]['format'] = 'filtered_html';
//                        drush_print("updated body");
//                    }

                    if ($row->PublishingDate!="" && $node->field_photogallery_date[$node->language][0]['value'] != $row->PublishingDate)
                    {
                        $node->field_photogallery_date[$node->language][0]['value'] = $row->PublishingDate;
                        drush_print("updated photogallery date");
                    }

                    $txprop = "field_photogallery_tags";
                    $imgprop = "field_photogallery_photos";

    // IMAGE HANDLING FOR PHOTO GALLERYS
    // no cover image at the moment, no teaser text at the moment

                    $img_query = "SELECT * FROM mtcm.mt_migrated_image WHERE CID = ".$row->CID." AND ImageStatus < '400' ORDER BY RID";
                    $img_result = db_query($img_query);

                    $cnt = 0;
                    foreach ($img_result as $img_row) {

                        if ($img_row->Imported == 0 || $img_row->LastImported < $img_row->LastModified)
                        {
                            //grab the file for this node based on the "schema" from the old website...
                            $remote_url = ($img_row->CorrOldURL!="" ? $img_row->CorrOldURL : $img_row->OldURL);
                            $file_path = sys_get_temp_dir().substr($remote_url, max(strrpos($remote_url, "/"),strrpos($remote_url, "\\")));

                            $fcont="";
                            $handle = @fopen($remote_url, "r");
                            if ($handle)
                            {
                               while (!feof($handle)) $fcont.= fgets($handle, 4096);
                               fclose($handle);

                                $fd = fopen ($file_path, "wb");
                                fwrite($fd, $fcont);
                                fclose($fd);
                            }

                            if (file_exists($file_path)) {

                                $file = (object) array(
                                'uid' => $uid ,
                                'uri' => $file_path,
                                'filemime' => file_get_mimetype($file_path),
                                'status' => 1,
                                'alt' => substr($img_row->ImageText,0,1023),
                                'width' => $img_row->Width,
                                'height' => $img_row->Height
                                );
                                $file = file_copy($file, "public://", FILE_EXISTS_ERROR);
                                $node->{$imgprop}[$node->language][$cnt] = (array)$file;

                                chmod(drupal_realpath($file->uri), 0777);

                                $newurl = substr(drupal_realpath($file->uri),strlen($_SERVER["PWD"]));

                                $img_upd_query = "UPDATE mtcm.mt_migrated_image SET NewURL='".$newurl."', LastImported='".strftime("%Y-%m-%d %H:%M:%S")."', Imported=1  WHERE CID = '".$img_row->CID."' AND RID = '".$img_row->RID."'";
                                $img_upd_result = db_query($img_upd_query);
                            }
                        }

                        $cnt++;
                        $addtmetadata.= $img_row->ImageText." ";
                    }

                break;

                case "dg_statement":

                    if ($body!="" && $node->field_dgstatement_body[$node->language][0]['value'] != $body)
                    {
                        $node->field_dgstatement_body[$node->language][0]['value'] = $body;
                        $node->field_dgstatement_body[$node->language][0]['format'] = 'full_html';
                        drush_print("updated body");
                    }

                    if ($row->PublishingDate!="" && $node->field_dgstatement_date[$node->language][0]['value'] != $row->PublishingDate)
                    {
                        $node->field_dgstatement_date[$node->language][0]['value'] = $row->PublishingDate;
                        drush_print("updated dgstatement date");
                    }

                    if ($node->field_dgstatement_author[$node->language][0]['value'] != substr($row->Author,0,127))
                    {
                        $node->field_dgstatement_author[$node->language][0]['value'] = substr($row->Author,0,127);
                        drush_print("updated author");
                    }

                    // EVENT, LOCATION
                    if ($node->field_dgstatement_event[$node->language][0]['title'] != $row->Event)
                    {
                        $node->field_dgstatement_event[$node->language][0]['title'] = $row->Event;
                        drush_print("updated event");
                    }

                    if ($node->field_dgstatement_location[$node->language][0]['value'] != $row->EventLocation)
                    {
                        $node->field_dgstatement_location[$node->language][0]['value'] = $row->EventLocation;
                        drush_print("updated location");
                    }

                    $txprop = "field_dgstatement_tags";
                    $resprop = "field_dgstatement_resources";
                    $reslnkprop = "field_dgstatement_resources_link";

                break;

                case "media_advisory":

                    if ($row->SubHeadline!="" && $node->field_mediaadvisory_subtitle[$node->language][0]['value'] != $row->SubHeadline)
                    {
                        $node->field_mediaadvisory_subtitle[$node->language][0]['value'] = $row->SubHeadline;
                        $node->field_mediaadvisory_subtitle[$node->language][0]['format'] = 'filtered_html';
                        drush_print("updated subtitle");
                    }

                    if ($body!="" && $node->field_mediaadvisory_body[$node->language][0]['value'] != $body)
                    {
                        $node->field_mediaadvisory_body[$node->language][0]['value'] = $body;
                        $node->field_mediaadvisory_body[$node->language][0]['format'] = 'full_html';
                        drush_print("updated body");
                    }

                    if ($row->PublishingDate!="" && $node->field_mediaadvisory_date[$node->language][0]['value'] != $row->PublishingDate)
                    {
                        $node->field_mediaadvisory_date[$node->language][0]['value'] = $row->PublishingDate;
                        drush_print("updated mediaadvisory date");
                    }

                    // NUMBER, EVENT, LOCATION
                    if ($node->field_mediaadvisory_number[$node->language][0]['value'] != $row->ReferenceNumber)
                    {
                        $node->field_mediaadvisory_number[$node->language][0]['value'] = $row->ReferenceNumber;
                        drush_print("updated number");
                    }

                    if ($node->field_mediaadvisory_event[$node->language][0]['title'] != $row->Event)
                    {
                        $node->field_mediaadvisory_event[$node->language][0]['title'] = $row->Event;
                        drush_print("updated event");
                    }

                    if ($node->field_mediaadvisory_location[$node->language][0]['value'] != $row->EventLocation)
                    {
                        $node->field_mediaadvisory_location[$node->language][0]['value'] = $row->EventLocation;
                        drush_print("updated location");
                    }

                    $txprop = "field_mediaadvisory_tags";
                    $resprop = "field_mediaadvisory_resources";
                    $reslnkprop = "field_mediaadv_resources_link";

                break;

                case "news_story":

                    if ($row->SubHeadline!="" && $node->field_newsstory_subtitle[$node->language][0]['value'] != $row->SubHeadline)
                    {
                        $node->field_newsstory_subtitle[$node->language][0]['value'] = $row->SubHeadline;
                        $node->field_newsstory_subtitle[$node->language][0]['format'] = 'filtered_html';
                        drush_print("updated subtitle");
                    }

                    if ($body!="" && $node->field_newsstory_body[$node->language][0]['value'] != $body)
                    {
                        $node->field_newsstory_body[$node->language][0]['value'] = $body;
                        $node->field_newsstory_body[$node->language][0]['format'] = 'full_html';
                        drush_print("updated body");
                    }

                    if ($row->PublishingDate!="" && $node->field_newsstory_date[$node->language][0]['value'] != $row->PublishingDate)
                    {
                        $node->field_newsstory_date[$node->language][0]['value'] = $row->PublishingDate;
                        drush_print("updated newsstory date");
                    }

                    if ($node->field_newsstory_author[$node->language][0]['value'] != substr($row->Author,0,127))
                    {
                        $node->field_newsstory_author[$node->language][0]['value'] = substr($row->Author,0,127);
                        drush_print("updated author");
                    }

                    $txprop = "field_newsstory_tags";
                    $imgprop = "field_newsstory_photo";
                    $imgcapprop = "field_newsstory_photo_caption";
                    $resprop = "field_newsstory_resources";
                    $reslnkprop = "field_newsstory_resources_link";


                break;

                case "press_release":

                    if ($row->SubHeadline!="" && $node->field_pressrelease_subtitle[$node->language][0]['value'] != $row->SubHeadline)
                    {
                        $node->field_pressrelease_subtitle[$node->language][0]['value'] = $row->SubHeadline;
                        $node->field_pressrelease_subtitle[$node->language][0]['format'] = 'filtered_html';
                        drush_print("updated subtitle");
                    }

                    if ($body!="" && $node->field_pressrelease_body[$node->language][0]['value'] != $body)
                    {
                        $node->field_pressrelease_body[$node->language][0]['value'] = $body;
                        $node->field_pressrelease_body[$node->language][0]['format'] = 'full_html';
                        drush_print("updated body");
                    }

                    if ($row->PublishingDate!="" && $node->field_pressrelease_date[$node->language][0]['value'] != $row->PublishingDate)
                    {
                        $node->field_pressrelease_date[$node->language][0]['value'] = $row->PublishingDate;
                        drush_print("updated pressrelease date");
                    }

                    // NUMBER, EVENT, LOCATION

                    if ($node->field_pressrelease_number[$node->language][0]['value'] != $row->ReferenceNumber)
                    {
                        $node->field_pressrelease_number[$node->language][0]['value'] = $row->ReferenceNumber;
                        drush_print("updated number");
                    }

                    if ($node->field_pressrelease_event[$node->language][0]['title'] != $row->Event)
                    {
                        $node->field_pressrelease_event[$node->language][0]['title'] = $row->Event;
                        drush_print("updated event");
                    }

                    if ($node->field_pressrelease_location[$node->language][0]['value'] != $row->EventLocation)
                    {
                        $node->field_pressrelease_location[$node->language][0]['value'] = $row->EventLocation;
                        drush_print("updated location");
                    }

                    $txprop = "field_pressrelease_tags";
                    $resprop = "field_pressrelease_resources";
                    $reslnkprop = "field_pressrel_resources_link";

                break;
            }


            // IMAGE HANDLING
            if ($imgprop!="")
            {
                $img_query = "SELECT * FROM mtcm.mt_migrated_image WHERE CID = ".$row->CID." AND (Imported = 0 OR LastImported < LastModified) AND ImageStatus < '400' ORDER BY RID";
                $img_result = db_query($img_query);

                $cnt = 0;
                foreach ($img_result as $img_row) {

                    if (!strpos($img_row->OldURL, "youtube.com"))
                    {
                        //grab the file for this node based on the "schema" from the old website...
                        $remote_url = ($img_row->CorrOldURL!="" ? $img_row->CorrOldURL : $img_row->OldURL);
                        $file_path = sys_get_temp_dir().substr($remote_url, max(strrpos($remote_url, "/"),strrpos($remote_url, "\\")));

                        $fcont="";
                        $handle = @fopen($remote_url, "r");
                        if ($handle)
                        {
                           while (!feof($handle)) $fcont.= fgets($handle, 4096);
                           fclose($handle);

                            $fd = fopen ($file_path, "wb");
                            fwrite($fd, $fcont);
                            fclose($fd);
                        }

                        if (file_exists($file_path)) {

                            $file = (object) array(
                            'uid' => $uid ,
                            'uri' => $file_path,
                            'filemime' => file_get_mimetype($file_path),
                            'status' => 1,
                            'alt' => $img_row->AltText
                            );
                            $file = file_copy($file, "public://", FILE_EXISTS_ERROR);
                            $node->{$imgprop}[$node->language][$cnt] = (array)$file;
                            if ($imgcapprop!="")
                            {
                                $node->{$imgcapprop}[$node->language][$cnt]['value'] = $img_row->ImageText;
                                $node->{$imgcapprop}[$node->language][$cnt]['format'] = 'filtered_html';
                            }

                            chmod(drupal_realpath($file->uri), 0777);

                            $newurl = substr(drupal_realpath($file->uri),strlen($_SERVER["PWD"]));

                            $img_upd_query = "UPDATE mtcm.mt_migrated_image SET NewURL='".$newurl."', LastImported='".strftime("%Y-%m-%d %H:%M:%S")."', Imported=1  WHERE CID = '".$img_row->CID."' AND RID = '".$img_row->RID."'";
                            $img_upd_result = db_query($img_upd_query);

                            $cnt++;
                        }
                    }
                    else
                    {
                        // youtube video found!
                        drush_print("youtube video found!");
                        $cnt++;
                    }

                    $addtmetadata.= $img_row->ImageText." ";
                }
            }
            // END IMAGE HANDLING


            // RESOURCES HANDLING
            $res_query = "SELECT * FROM mtcm.mt_migrated_link WHERE CID = ".$row->CID;
            $res_result = db_query($res_query);

            $cnt = 0;
            foreach ($res_result as $res_row) {


                if ($res_row->Imported == 0 || $res_row->LastImported < $res_row->LastModified)
                {
                    $attributes = array();
                    if ($res_row->LinkOnClick!="")  $attributes['onclick'] = $res_row->LinkOnClick;
                    if ($res_row->LinkTarget!="")   $attributes['target']  = $res_row->LinkTarget;
                    if ($res_row->LinkTitle!="")    $attributes['title']   = $res_row->LinkTitle;
                    if ($res_row->LinkClass!="")    $attributes['class']   = $res_row->LinkClass;

                    $props = array();

                    $props["url"] = ($res_row->CorrOldURL!="" ? $res_row->CorrOldURL : $res_row->OldURL);
                    if ($res_row->LinkCaption!="") $props["title"]      = $res_row->LinkCaption;
                    if (sizeOf($attributes) > 0)   $props["attributes"] = $attributes;

                    updateFieldCollection(
                        $node,
                        $resprop,
                        array ($reslnkprop => $props),
                        $cnt
                    );

                    drush_print("need to update related resource #".($cnt+1));
                }

                $addtmetadata.= $res_row->LinkCaption." ";

                // Save field-collection item.
  //              $field_collection_item->save(true);

                $res_upd_query = "UPDATE mtcm.mt_migrated_link SET LastImported='".strftime("%Y-%m-%d %H:%M:%S")."', Imported=1 WHERE CID = '".$res_row->CID."' AND RID = '".$res_row->RID."'";
                $res_upd_result = db_query($res_upd_query);

                $cnt++;
            }

            // END RESOURCES HANDLING

            // TAXONOMY HANDLING
            if ($txprop!="")
            {
                $txfound = array();

                // weighting of properties tags to be found in
                $compStrings = array(" ".$row->Body." ".$addtmetadata,
                                     " ".$row->SubHeadline." ",
                                     " ".$row->Headline." ",
                                     " ".$row->OldLocation." ");

                // let's count the number of tags
                for ($j=0; $j < sizeOf($compStrings); $j++)
                {
                    $found = 0;

                    // cleanup... make the properties sub-tag save...
                    $compStrings[$j] = str_replace("<"," <",str_replace(">", "> ", $compStrings[$j]));
                    $compStrings[$j] = strtolower(strip_tags($compStrings[$j]));

                    for($i=0; $i < sizeOf($txterms); $i++)
                    {
                        $found = substr_count($compStrings[$j], strtolower(" ".$txterms[$i]." ")); // case insensitive counting

                        if ($found > 0) {

                            $found = $found * ($j+1); // weighting depending on the property the tag was found in...
                            $txfound[$txterms[$i]] = (isset($txfound[$txterms[$i]]) ? $txfound[$txterms[$i]] + $found : $found);
                        }
                    }
                }

                if (sizeOf($txfound) > 0) // at lease we found some tags
                {
                    drush_print("taxonomy_update_section...");

                    /*

                    arsort($txfound); // reverse sort, we got something like  tag7 = 30, tag1 = 28, tag5 = 15, tag3 = 10
                    $cnt = 0;

                    reset($txfound);
                    while($cnt < 10 && list($tag, $found) = each($txfound)) // stop after max 10 most important tags assigned...
                    {
                        if ($term = taxonomy_get_term_by_name($tag)) {
                            $terms_array = array_keys($term);
                            $node->{$txprop}[$node->language][]['tid'] = $terms_array['0'];
                        }
                    }

                    */
                }
            }
            // END TAXONOMY HANDLING


            $node->uid = $uid; // Or any id you wish
//            $node = node_submit($node); // Prepare node for a submit

            node_save($node); // After this call we'll get a nid

            $upd_query = "UPDATE mtcm.mt_migrated_content SET DrupalID = '".$node->nid."'".
                         ", NewLocation = '/node/".$node->nid."'".
                         ", LastImported='".strftime("%Y-%m-%d %H:%M:%S")."'".
                         ", Imported = '1'".
                         " WHERE CID = '".$row->CID."'";
            $upd_result = db_query($upd_query);


            if (isset($imgprop) && $imgprop!="" && is_array($node->{$imgprop}[$node->language]))
            {
                $img_query = "SELECT * FROM mtcm.mt_migrated_image WHERE CID = ".$row->CID." AND ImageStatus < '400' ORDER BY RID";
                $img_result = db_query($img_query);

                $cnt = 0;
                foreach ($img_result as $img_row)
                {
                    $img_upd_query = "UPDATE mtcm.mt_migrated_image SET DrupalID = ".$node->{$imgprop}[$node->language][$cnt]["fid"]." WHERE CID = '".$img_row->CID."' AND RID = '".$img_row->RID."' AND DrupalID = 0";
                    $img_upd_result = db_query($img_upd_query);
                    $cnt++;

                }
            }

            if (isset($resprop) && $resprop!="" && is_array($node->{$resprop}[$node->language]))
            {
                $res_query = "SELECT * FROM mtcm.mt_migrated_link WHERE CID = ".$row->CID." ORDER BY RID";
                $res_result = db_query($res_query);

                $cnt = 0;
                foreach ($res_result as $res_row)
                {
                    $res_upd_query = "UPDATE mtcm.mt_migrated_link SET DrupalID = ".$node->{$resprop}[$node->language][$cnt]["value"]." WHERE CID = '".$res_row->CID."' AND RID = '".$res_row->RID."' AND DrupalID = 0";
                    $res_upd_result = db_query($res_upd_query);
                    $cnt++;
                }
            }

            $ilink_upd_query = "UPDATE mtcm.mt_migrated_ilink SET DrupalID = ".$node->nid." WHERE CID = '".$row->CID."' AND DrupalID = 0";
            $ilink_upd_result = db_query($ilink_upd_query);


            // printing from Drush is easy
            drush_print(" ... successfully updated NID ".$node->nid.".\n");
        }
    }
}

update_migrated_objects();

?>