<?php
/**
 * @file
 * iaea_configuration_blocks.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iaea_configuration_blocks_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_floating_image|field_collection_item|field_basicpage_section|default';
  $field_group->group_name = 'group_floating_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_basicpage_section';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_basicpage_section_image',
      1 => 'field_basicpage_section_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-floating-image field-group-fieldset pull-left',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_floating_image|field_collection_item|field_basicpage_section|default'] = $field_group;

  return $export;
}
