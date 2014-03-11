<?php
/**
 * @file
 * iaea_configuration_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function iaea_configuration_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-add_this_sharing_buttons'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'disabled' => FALSE,
    'machine_name' => 'add_this_sharing_buttons',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'IAEA' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'IAEA',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
