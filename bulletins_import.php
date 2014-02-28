<?php

/*
// +--------------------------------------------------------+
// | Implemented 2014/01 by Martin Thaller                  |
// +--------------------------------------------------------+

// +--------------------------------------------------------+
// | run: drush php-script bulletins_import.php             |
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


function import_bulletins() {

    $langs = array("sp"=>"292","ch"=>"290","en"=>"288","fr"=>"291","ru"=>"293","ar"=>"289");

    // Drupal UserID
    $uid = 24; // mjt

    $query = "SELECT * FROM mtcm.mt_bulletins ORDER BY Number, Revision, Pages";
    $result1 = db_query($query);

    // step trough the result
    foreach ($result1 as $row1) {

        $node = new stdClass(); // We create a new node object
        $node->language = LANGUAGE_NONE; // Or any language code if Locale module is enabled. More on this below *
        $node->type = "bulletin_article";
        //$node->field_bulletin_number[$node->language][0]['value'] = $row1->Number."(".$row1->Revision.")";

        drush_print("trying to import... ".$row1->Number."-".$row1->Revision);

        if ($term = taxonomy_get_term_by_name_and_vocabulary($row1->Number."-".$row1->Revision, 12)) {
            $terms_array = array_keys($term);
            $node->field_bulletin_number[$node->language][]['tid'] = $terms_array['0'];
        }
        else
        {
            $node->field_bulletin_number[$node->language][]['tid'] = custom_create_taxonomy_term($row1->Number."-".$row1->Revision, 12);
        }

        $title = strip_tags($row1->Title);
        $node->title = $title;
        node_object_prepare($node); // Set some default values.

        if ($term = taxonomy_get_term_by_name_and_vocabulary($row1->Author, 11)) {
            $terms_array = array_keys($term);
            $node->field_bulletin_author[$node->language][]['tid'] = $terms_array['0'];
        }
        else
        {
            $node->field_bulletin_author[$node->language][]['tid'] = custom_create_taxonomy_term($row1->Author, 11);
        }

        $node->field_bulletin_description[$node->language][0]['value'] = str_replace("'", "\'", strip_tags($row1->Description));
        $node->field_bulletin_subject[$node->language][0]['value'] = str_replace("'", "\'", strip_tags($row1->Subject));

        // dokument direkt an node anhängen...

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

                $file_item = entity_create('field_collection_item', array('uid'=>$uid, 'field_name' => 'field_bulletin_file'));
                $file_item->setHostEntity('node', $node);

                $file_item->field_bulletin_document[$node->language][0] = (array)$file;
                $file_item->field_bulletin_document_language[$node->language][0]['tid']= $langs[$row1->Language];

                $file_item->save();
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

import_bulletins();

?>