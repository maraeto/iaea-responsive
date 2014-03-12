<?php
/**
 * @file
 * iaea_content_type_dg_s_statements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function iaea_content_type_dg_s_statements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function iaea_content_type_dg_s_statements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function iaea_content_type_dg_s_statements_node_info() {
  $items = array(
    'dg_statement' => array(
      'name' => t('DG\'s Statement'),
      'base' => 'node_content',
      'description' => t('Statements of the IAEA Director General'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
