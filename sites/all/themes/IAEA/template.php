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
 * Add img-responsive class to images based on image style_name
 */
function IAEA_preprocess_image(&$variables) {
  if(isset($variables['style_name'])) {
    switch($variables['style_name']) {
      case 'banner_6_units_3_2_555px':
      case 'front_page_banner_12_units_1140x345':
        $variables['attributes']['class'][] = "img-responsive";
    }
    /* if($variables['style_name'] == 'banner_6_units_3_2_555px' || $variables['style_name'] = 'front_page_banner_12_units_1140x345') {
      $variables['attributes']['class'][] = "img-responsive";
    }*/
  }
  // var_dump($variables);
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

/* Add img-responsive class to images based on field_name */
function IAEA_preprocess_field(&$variables) {
  switch($variables['element']['#field_name']) {
    case 'field_newsstory_photo':
    case 'field_basicpage_section_image':
  // if($variables['element']['#field_name'] == 'field_newsstory_photo'){
      foreach($variables['items'] as $key => $item){
        $variables['items'][ $key ]['#item']['attributes']['class'][] = 'img-responsive';
      }
    }
   // }
}