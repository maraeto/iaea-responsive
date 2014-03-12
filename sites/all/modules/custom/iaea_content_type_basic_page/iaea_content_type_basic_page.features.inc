<?php
/**
 * @file
 * iaea_content_type_basic_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iaea_content_type_basic_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function iaea_content_type_basic_page_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Page for General Purpose Content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
