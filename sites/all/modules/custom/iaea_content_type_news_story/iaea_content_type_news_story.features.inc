<?php
/**
 * @file
 * iaea_content_type_news_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iaea_content_type_news_story_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function iaea_content_type_news_story_node_info() {
  $items = array(
    'news_story' => array(
      'name' => t('News Story'),
      'base' => 'node_content',
      'description' => t('IAEA News Stories'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
