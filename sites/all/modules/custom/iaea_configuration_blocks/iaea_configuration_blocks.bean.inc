<?php
/**
 * @file
 * iaea_configuration_blocks.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function iaea_configuration_blocks_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'jumbotron';
  $bean_type->label = 'Jumbotron';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['jumbotron'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'media_block';
  $bean_type->label = 'Media Block';
  $bean_type->options = '';
  $bean_type->description = 'Media block containing of header, thumbnail, kicker and &quot;more&quot; button';
  $export['media_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'page_block';
  $bean_type->label = 'Page Block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['page_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'resources_block';
  $bean_type->label = 'Resources Block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['resources_block'] = $bean_type;

  return $export;
}
