<?php
/*
// +--------------------------------------------------------+
// | Implemented 2014/02 by Martin Thaller                  |
// +--------------------------------------------------------+

    Credits:
    this script is based on information found at:  http://drupal.stackexchange.com/questions/537/delete-all-nodes-of-a-given-content-type


// +--------------------------------------------------------+
// | run: drush php-script drupal_delete_all.php            |
// +--------------------------------------------------------+
*/
    $result= db_query("SELECT nid FROM {node} AS n WHERE n.type IN (".

            "'bulletin_article',".
            "'dg_statement',".
            "'iaea_video',".
            "'information_circular',".
            "'media_advisory',".
            "'news_story',".
            "'focus_page',".
            "'photo_essay',".
            "'photo_gallery',".
            "'press_release'".

            ")");

    foreach ($result as $record) {
      node_delete($record->nid);
    }

?>