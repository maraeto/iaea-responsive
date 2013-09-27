<?php

/**
 * @file template.php
 */

/** 
* Remove "Welcome to ... "  from the front page. This message is rendered when no content is available,
* e.g. when content is rendered via Context or Views module
*/
function IAEA_preprocess_page(&$variables) {
	if (drupal_is_front_page()) { $variables['title']=""; }
}

/* function IAEA_preprocess_node(&$vars) {
  if ($vars['type'] === 'news_story') {
    $date = current($vars['content']['field_date']['#items']);
    $date_ts = strtotime($date['value']);
    $vars['content']['field_date'][0] = array(
      '#markup' => '<strong>' . date('d', $date_ts) . '</strong> <em>' . date('F Y', $date_ts) . '</em>',
    );    
  }
}*/