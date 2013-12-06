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
/* function IAEA_preprocess_image(&$variables) {
  if(isset($variables['style_name'])) {
    switch($variables['style_name']) {
      case 'banner_6_units_3_2_555px':
      case 'front_page_banner_12_units_1140x345':
        $variables['attributes']['class'][] = "img-responsive";
    }
  }
} */

/* applies "img-responsive" class to ever image */
function IAEA_preprocess_image(&$variables) {
  $variables['attributes']['class'][] = "img-responsive";
}

/* Add label class to tags based on field name */
function IAEA_preprocess_field(&$variables) {
    switch ($variables['element']['#field_name']) {
    /* case 'field_fp_banner_image':
    case 'field_newsstory_photo':
    case 'field_basicpage_section_image':
    case 'field_focuspage_banner':
    case 'field_jumbotron_image':
    case 'field_mediablock_image':
      foreach ($variables['items'] as $key => $item) {
        $variables['items'][ $key ]['#item']['attributes']['class'][] = 'img-responsive';
      }
    break; */
    case 'field_mediaadvisory_tags':
    case 'field_dgstatement_tags':
    case 'field_newsstory_tags':
    case 'field_pressrelease_tags':
      foreach ($variables['items'] as $key => $item) {
        $variables['items'][$key]['#prefix'] = '<span class="label label-default">';
        $variables['items'][$key]['#suffix'] = '</span>';
      }
      break;
    }
}

/**
 * Overrides theme_menu_tree(). Classes nav-pills & nav-stacked added for styling of active list item
 */
function IAEA_menu_tree(&$variables) {
  return '<ul class="menu nav nav-pills nav-stacked">' . $variables['tree'] . '</ul>';
}