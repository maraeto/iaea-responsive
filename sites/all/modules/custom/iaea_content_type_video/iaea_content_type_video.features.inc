<?php
/**
 * @file
 * iaea_content_type_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iaea_content_type_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iaea_content_type_video_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function iaea_content_type_video_node_info() {
  $items = array(
    'iaea_video' => array(
      'name' => t('IAEA Video'),
      'base' => 'node_content',
      'description' => t('IAEA Video'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
