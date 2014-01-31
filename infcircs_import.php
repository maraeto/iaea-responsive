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

function import_infcircs() {

    // Drupal UserID
    $uid = 24; // mjt
    $debug = false;

    $NID_NUMBER = array();

    $nid_number_query = "SELECT entity_id, field_infcirc_number_value FROM field_data_field_infcirc_number";
    $nnresult = db_query($nid_number_query);
    foreach ($nnresult as $row) $NID_NUMBER[$row->field_infcirc_number_value] = $row->entity_id;

    if($debug)
    {
        include_once("infcirc_debug.php");
    }
    else
    {
        include_once("infcircs-meta-data.php");
    }

    for ($i=0; $i < sizeOf($data); $i++)
    {
        $number = "";
        $lng = "en";

        $node = new stdClass(); // We create a new node object

        drush_print($i.") trying to import... ".$data[$i]["Title"]);

        if ($data[$i]["VdkVgwKey"]!="") {

            $filename = substr($data[$i]["VdkVgwKey"], strrpos($data[$i]["VdkVgwKey"], "/")+1);
            $filename = substr($filename, 0, strrpos($filename, "."));

            if (strpos($filename, "_"))
            {
                $lng = substr($filename, strrpos($filename, "_")+1);
                $filename = substr($filename, 0, strrpos($filename, "_"));
            }

            $number = str_replace("infcirc","",$filename);
            while(substr($number,0,1)=="0") $number = substr($number,1);
        }

        if ($number!="" && isset($NID_NUMBER[$number]))
        {
            $node = node_load(intval($NID_NUMBER[$number]));
            if ($node->nid > 0)
            {
                drush_print("Loaded existing node: ".$node->nid);
            }
            else
            {
                drush_print("Failed to load existing node: ".$node->nid);
            }
        }
        else
        {
            drush_print("Creating new node");
        }

        $node->language = LANGUAGE_NONE; // Or any language code if Locale module is enabled. More on this below *
        $node->type = "information_circular";

        if ($number=="" || !isset($NID_NUMBER[$number]))
        {
            if ($data[$i]["Title"]!="") {

                $title = strip_tags($data[$i]["Title"]);

                if (strlen($title) > 512)
                {
                    drush_print("Cropping ".$number);
                    $title = substr($title, 0, 512);
                }

                $node->title = $title;
            }

//            $url = str_replace(" ","_",$node->title); // ##### should take care of special characters here...
//            $node->path = array('alias' => $url) ; // Setting a node path

            node_object_prepare($node); // Set some default values.


            if ($data[$i]["Author"]!="") {

                $node->field_infcirc_author[$node->language][0]['value'] = strip_tags($data[$i]["Author"]);
            }

            if ($number!="") {

                $node->field_infcirc_number[$node->language][0]['value'] = $number;
            }

            if ($data[$i]["Description"]!="") {

                $node->field_infcirc_description[$node->language][0]['value'] = str_replace("'", "\'", strip_tags($data[$i]["Description"]));
            }

            if ($data[$i]["Subject"]!="") {

                $node->field_infcirc_subject[$node->language][0]['value'] = str_replace("'", "\'", strip_tags($data[$i]["Subject"]));
            }

            if ($data[$i]["Category"]!="") {

                $categories = array();

                if (strpos($data[$i]["Category"],","))
                {
                    $categories = explode(",", $data[$i]["Category"]);
                    for ($cn=0; $cn < sizeOf($categories); $cn++) $categories[$cn] = trim($categories[$cn]);
                }
                else
                {
                    $categories = array(trim($data[$i]["Category"]));
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

            if ($data[$i]["Country"]!="") {

                $countries = array();

                $data[$i]["Country"] = str_replace(";",",",$data[$i]["Country"]);

                if (strpos($data[$i]["Country"],","))
                {
                    $countries = explode(",", $data[$i]["Country"]);
                    for ($cn=0; $cn < sizeOf($countries); $cn++) $countries[$cn] = trim($countries[$cn]);
                }
                else
                {
                    $countries = array(trim($data[$i]["Country"]));
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

            if ($data[$i]["Source"]!="") {

                $tmp = explode(" ", str_replace(".","",$data[$i]["Source"]));
                $tmp1 = array();
                $cnt = 0;
                $fnd = false;
                while($cnt < sizeOf($tmp) && !$fnd)
                {
                    $tmp1[]=$tmp[$cnt];
                    if (is_numeric($tmp[$cnt]) && strlen($tmp[$cnt])==4) $fnd = true;
                    $cnt++;
                }

                $data[$i]["Source"] = join(" ",$tmp1);

                $node->field_infcirc_date[$node->language][0]['value'] = date('Y-m-d', strtotime($data[$i]["Source"]));

                drush_print("dated: ".date('Y-m-d', strtotime($data[$i]["Source"])));
            }

            if ($data[$i]["related"]!="") {

                $node->field_infcirc_related[$node->language][0]['value'] = $data[$i]["related"];
            }
        }

        if ($data[$i]["VdkVgwKey"]!="") {

            if (!$debug) {

                $remote_url = trim($data[$i]["VdkVgwKey"]);
                $file_path = sys_get_temp_dir().substr($remote_url,max(strrpos($remote_url, "/"),strrpos($remote_url, "\\")));

                $fcont="";
                $handle = fopen($remote_url, "r");
                if ($handle)
                {
                   while (!feof($handle)) $fcont.= fgets($handle, 4096);
                   fclose($handle);

                    $fd = fopen ($file_path, "wb");
                    fwrite($fd, $fcont);
                    fclose($fd);
                    chmod($file_path, 0777);
                }

                sleep(0.5);

                if (file_exists($file_path)) {

                    $fileprop = "field_infcirc_file_".$lng;

                    $file = (object) array(
                    'uid' => $uid ,
                    'uri' => $file_path,
                    'filemime' => file_get_mimetype($file_path),
                    'status' => 1,
                    'display' => 1);

                    $file = file_copy($file, "public://");
                    $node->{$fileprop}[$node->language][0] = (array)$file;

                    chmod(drupal_realpath($file->uri), 0777);
                }
            }
        }

        if (!$debug)
        {
            $node->uid = $uid; // Or any id you wish
            if ($number=="" || !isset($NID_NUMBER[$number])) $node = node_submit($node); // Prepare node for a submit


            try {
                node_save($node); // After this call we'll get a nid
            }
            catch( PDOException $Exception ) {
                echo $Exception->getMessage( );

                sleep(3);
            }

            drush_print(" ... successfully saved NID ".$node->nid);

            if ($number!="") $NID_NUMBER[$number] = $node->nid;
        }
        else
        {
            print_r($node);
        }
    }
}

import_infcircs();

?>