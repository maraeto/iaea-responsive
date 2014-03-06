<?php
/**
 * @file
 * iaea_content_type_bulletin_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iaea_content_type_bulletin_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function iaea_content_type_bulletin_article_node_info() {
  $items = array(
    'bulletin_article' => array(
      'name' => t('Bulletin Article'),
      'base' => 'node_content',
      'description' => t('IAEA Bulletin Article'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
