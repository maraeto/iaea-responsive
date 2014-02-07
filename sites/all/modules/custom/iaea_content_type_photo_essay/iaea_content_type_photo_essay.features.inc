<?php
/**
 * @file
 * iaea_content_type_photo_essay.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iaea_content_type_photo_essay_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iaea_content_type_photo_essay_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function iaea_content_type_photo_essay_node_info() {
  $items = array(
    'photo_essay' => array(
      'name' => t('Photo Essay'),
      'base' => 'node_content',
      'description' => t('IAEA Photo Essay'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
