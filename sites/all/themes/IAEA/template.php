<?php

/**
 * @file template.php
 */

/** 
* Remove "Welcome to ... "  from the front page. This message is rendered when no content is available,
* e.g. when content is rendered via Context or Views module
*/
function IAEA_preprocess_page(&$variables) {
	if (drupal_is_front_page()) { 
			$variables['title']=""; 

			/* add trigger for the tabs on the fornt page */
			$js_tabs = "jQuery(document).ready(function () {
				jQuery('.bootstrap-tabs a').click(function (e) {
  						e.preventDefault()
  						jQuery(this).tab('show')
					});
					jQuery('.bootstrap-tabs a:first').tab('show');
				});";
			drupal_add_js($js_tabs, array('type' => 'inline', 'scope' => 'footer'));
		}
}

/**
 * THEME_preprocess_image_style() is also available.
 */
function IAEA_preprocess_image(&$variables) {
  if(isset($variables['style_name'])) {
    if($variables['style_name'] == 'thumbnail_front_page_listing') {
      $variables['attributes']['class'][] = "thumbnail";
    }
  }
  //var_dump($variables);
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