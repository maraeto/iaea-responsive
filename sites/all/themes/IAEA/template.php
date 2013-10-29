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
				jQuery('#tabs-frontpage a').click(function (e) {
  						e.preventDefault()
  						jQuery(this).tab('show')
					});
				});";
			drupal_add_js($js_tabs, array('type' => 'inline', 'scope' => 'footer'));
		}
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