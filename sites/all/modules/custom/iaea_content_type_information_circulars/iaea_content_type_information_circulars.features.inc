<?php
/**
 * @file
 * iaea_content_type_information_circulars.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iaea_content_type_information_circulars_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function iaea_content_type_information_circulars_node_info() {
  $items = array(
    'information_circular' => array(
      'name' => t('Information Circular'),
      'base' => 'node_content',
      'description' => t('IAEA Information Circular'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
