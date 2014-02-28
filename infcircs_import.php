<?php

/*
// +--------------------------------------------------------+
// | Implemented 2014/01 by Martin Thaller                  |
// +--------------------------------------------------------+

// +--------------------------------------------------------+
// | run: drush php-script infcircs_import.php              |
// +--------------------------------------------------------+
*/


/**
* Create a taxonomy term and return the tid.
* found on https://api.drupal.org/comment/18799#comment-18799
*/
function custom_create_taxonomy_term($name, $vid) {
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  $term->format = "filtered_html";
  $term->description = "";
  taxonomy_term_save($term);
  return $term->tid;
}

function taxonomy_get_term_by_name_and_vocabulary($name, $vid) {
  $term = taxonomy_term_load_multiple(array(), array('name' => trim($name), 'vid' => $vid));
  return $term;
}


function corrDate($date)
{
    $dat = date_parse($date);
    if ($dat["year"] > 2030) $dat["year"] = $dat["year"]-100; // correct 19.century
    $date = $dat["year"]."-".str_pad($dat["month"],2,"0",STR_PAD_LEFT)."-".str_pad($dat["day"],2,"0",STR_PAD_LEFT);
    drush_print($date);
    return ($date);
}

function import_infcircs() {

    $langs = array("sp"=>"292","ch"=>"290","en"=>"288","fr"=>"291","ru"=>"293","ar"=>"289");

    // Drupal UserID
    $uid = 24; // mjt

    $query = "SELECT DISTINCT Number FROM mtcm.mt_infcircs ORDER BY Number";
    $numbers = db_query($query);

    // step trough the result
    foreach ($numbers as $number) {

        $query1 = "SELECT * FROM mtcm.mt_infcircs WHERE Number = '".$number->Number."' ORDER BY Revision";
        $result1 = db_query($query1);

        $nodecreated = false;
        $lastrevision = "";
        unset($revisions);
        unset($node);

        foreach ($result1 as $row1) {

            if (!$nodecreated)
            {
                $node = new stdClass(); // We create a new node object
                $node->language = LANGUAGE_NONE; // Or any language code if Locale module is enabled. More on this below *
                $node->type = "information_circular";
                $node->field_infcirc_number[$node->language][0]['value'] = $row1->Number;

                drush_print("trying to import... ".$row1->Number." / ".$row1->Revision);

                $nodecreated = true;
            }

            if ($node->title=="")
            {
                // first version
                $title = strip_tags($row1->Title);
                $node->title = $title;
                node_object_prepare($node); // Set some default values.

                $node->field_infcirc_author[$node->language][0]['value'] = strip_tags($row1->Author);
                $node->field_infcirc_description[$node->language][0]['value'] = str_replace("'", "\'", strip_tags($row1->Description));
                $node->field_infcirc_subject[$node->language][0]['value'] = str_replace("'", "\'", strip_tags($row1->Subject));
                $node->field_infcirc_date[$node->language][0]['value'] = corrDate($row1->InfDate);
                $node->field_infcirc_related[$node->language][0]['value'] = $row1->related;

                if ($row1->Category!="") {

                    $categories = array();

                    if (strpos($row1->Category,","))
                    {
                        $categories = explode(",", $row1->Category);
                        for ($cn=0; $cn < sizeOf($categories); $cn++) $categories[$cn] = trim($categories[$cn]);
                    }
                    else
                    {
                        $categories = array(trim($row1->Category));
                    }

                    if (is_array($categories) && sizeOf($categories) > 0)
                    {
                        for ($cn=0; $cn < sizeOf($categories); $cn++)
                        {
                            if ($term = taxonomy_get_term_by_name_and_vocabulary($categories[$cn], 8)) {
                                $terms_array = array_keys($term);
                                $node->field_infcirc_category[$node->language][]['tid'] = $terms_array['0'];
                            }
                            else
                            {
                                $node->field_infcirc_category[$node->language][]['tid'] = custom_create_taxonomy_term($categories[$cn], 8);
                            }
                        }
                    }
                }

                if ($row1->Country!="") {

                    $countries = array();

                    $row1->Country = str_replace(";",",",$row1->Country);

                    if (strpos($row1->Country,","))
                    {
                        $countries = explode(",", $row1->Country);
                        for ($cn=0; $cn < sizeOf($countries); $cn++) $countries[$cn] = trim($countries[$cn]);
                    }
                    else
                    {
                        $countries = array(trim($row1->Country));
                    }

                    if (is_array($countries) && sizeOf($countries) > 0)
                    {
                        for ($cn=0; $cn < sizeOf($countries); $cn++)
                        {
                            if ($term = taxonomy_get_term_by_name_and_vocabulary($countries[$cn], 7)) {
                                $terms_array = array_keys($term);
                                $node->field_infcirc_country[$node->language][]['tid'] = $terms_array['0'];
                            }
                            else
                            {
                                $node->field_infcirc_country[$node->language][]['tid'] = custom_create_taxonomy_term($countries[$cn], 7);
                            }

                        }
                    }
                }
            }

            if (trim($row1->Revision)=="")
            {
                // dokumente direkt an node anhängen...

                $ppcnt = intval(isset($file_item->field_infcirc_document[$node->language]) && is_array($file_item->field_infcirc_document[$node->language]) ? sizeOf($file_item->field_infcirc_document[$node->language]):0);

                if ($row1->VdkVgwKey!="")
                {
                    $remote_url = trim($row1->VdkVgwKey);
                    $file_path = sys_get_temp_dir().substr($remote_url,max(strrpos($remote_url, "/"),strrpos($remote_url, "\\")));

                    $fcont="";
                    $handle = fopen($remote_url, "r");
                    if ($handle)
                    {
                        while (!feof($handle)) $fcont.= fgets($handle, 4096);
                        fclose($handle);

                        usleep(500000);

                        $fd = fopen ($file_path, "wb");
                        fwrite($fd, $fcont);
                        fclose($fd);
                        chmod($file_path, 0777);
                    }

                    if (file_exists($file_path)) {

                        $file = (object) array(
                        'uid' => $uid ,
                        'uri' => $file_path,
                        'filemime' => file_get_mimetype($file_path),
                        'status' => 1,
                        'display' => 1,
                        'description'=>'');

                        $file = file_copy($file, "public://", FILE_EXISTS_ERROR);

                        chmod(drupal_realpath($file->uri), 0777);

                        $file_item = entity_create('field_collection_item', array('uid'=>$uid, 'field_name' => 'field_infcirc_file'));
                        $file_item->setHostEntity('node', $node);

                        $file_item->field_infcirc_document[$node->language][$ppcnt] = (array)$file;
                        $file_item->field_infcirc_document_language[$node->language][$ppcnt]['tid']= $langs[$row1->Language];

                        $file_item->save();
                    }
                }
            }
            else
            {
                if ($lastrevision!=$row1->Revision || !isset($revisions))
                {
                    drush_print("   trying revision ".$row1->Revision);

                    // new revision
                    $pcnt = (isset($revisions) && isset($revisions->field_infcirc_revisions[$node->language]) && is_array($revisions->field_infcirc_revisions[$node->language]) ? sizeOf($revisions->field_infcirc_revisions[$node->language]):0);

                    $revisions = entity_create('field_collection_item', array('uid'=>$uid, 'field_name' => 'field_infcirc_revisions'));
                    $revisions->setHostEntity('node', $node);

                    $revisions->field_infcirc_revision_number[$node->language][$pcnt]['value'] = $row1->Revision;
                    $revisions->field_infcirc_revision_date[$node->language][$pcnt]['value'] = corrDate($row1->InfDate);
                    $revisions->field_infcirc_revision_desc[$node->language][$pcnt]['value'] = $row1->Description;

                    $revisions->save();

                    $lastrevision = $row1->Revision;
                }

                if ($row1->VdkVgwKey!="")
                {
                    $cnt = (isset($rev_file_item->field_infcirc_document[$node->language]) && is_array($rev_file_item->field_infcirc_document[$node->language]) ? sizeOf($rev_file_item->field_infcirc_document[$node->language]):0);

                    $remote_url = trim($row1->VdkVgwKey);
                    $file_path = sys_get_temp_dir().substr($remote_url,max(strrpos($remote_url, "/"),strrpos($remote_url, "\\")));

                    $fcont="";
                    $handle = fopen($remote_url, "r");
                    if ($handle)
                    {
                        while (!feof($handle)) $fcont.= fgets($handle, 4096);
                        fclose($handle);

                        usleep(200000);

                        $fd = fopen ($file_path, "wb");
                        fwrite($fd, $fcont);
                        fclose($fd);
                        chmod($file_path, 0777);
                    }

                    if (file_exists($file_path)) {

                        $file = (object) array(
                        'uid' => $uid ,
                        'uri' => $file_path,
                        'filemime' => file_get_mimetype($file_path),
                        'status' => 1,
                        'display' => 1);

                        $file = file_copy($file, "public://", FILE_EXISTS_ERROR);

                        chmod(drupal_realpath($file->uri), 0777);

                        $rev_file_item = entity_create('field_collection_item', array('uid'=>$uid, 'field_name' => 'field_infcirc_file'));
                        $rev_file_item->setHostEntity('field_infcirc_revisions', $revisions);

                        $rev_file_item->field_infcirc_document[$node->language][$cnt] = (array)$file;
                        $rev_file_item->field_infcirc_document_language[$node->language][$cnt]['tid']= $langs[$row1->Language];

                        $rev_file_item->save();
                    }
                }
            }
        }

        $node->uid = $uid; // Or any id you wish
        $node = node_submit($node); // Prepare node for a submit

        try {
            node_save($node); // After this call we'll get a nid
        }
        catch( PDOException $Exception ) {
            echo $Exception->getMessage( );

            sleep(10);
        }

        drush_print(" ... successfully saved NID ".$node->nid);
    }
}

import_infcircs();

?>