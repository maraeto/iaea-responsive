<?php
/**
 * @file
 * iaea_content_type_media_advisory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iaea_content_type_media_advisory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iaea_content_type_media_advisory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function iaea_content_type_media_advisory_node_info() {
  $items = array(
    'media_advisory' => array(
      'name' => t('Media Advisory'),
      'base' => 'node_content',
      'description' => t('IAEA Media Advisory'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
