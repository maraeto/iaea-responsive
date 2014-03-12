<?php
/**
 * @file
 * iaea_content_type_focus_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iaea_content_type_focus_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_section|field_collection_item|field_focus_section|form';
  $field_group->group_name = 'group_focus_section';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_focus_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus Section',
    'weight' => '7',
    'children' => array(
      0 => 'field_focus_section_title',
      1 => 'field_focus_section_image',
      2 => 'field_focus_section_imagecaption',
      3 => 'field_focus_section_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Focus Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_focus_section|field_collection_item|field_focus_section|form'] = $field_group;

  return $export;
}
