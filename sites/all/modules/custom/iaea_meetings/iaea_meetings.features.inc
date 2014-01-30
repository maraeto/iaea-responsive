<?php
/**
 * @file
 * iaea_meetings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iaea_meetings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iaea_meetings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function iaea_meetings_node_info() {
  $items = array(
    'meeting' => array(
      'name' => t('Meeting'),
      'base' => 'node_content',
      'description' => t('Content type storing meetings imported from RSS feed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
