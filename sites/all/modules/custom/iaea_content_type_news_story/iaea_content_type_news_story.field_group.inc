<?php
/**
 * @file
 * iaea_content_type_news_story.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iaea_content_type_news_story_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_story_aside|node|news_story|default';
  $field_group->group_name = 'group_story_aside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_newsstory_photo',
      1 => 'field_newsstory_photo_caption',
      2 => 'field_newsstory_resources',
      3 => 'field_newsstory_related_stories',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-story-aside field-group-fieldset pull-left',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_story_aside|node|news_story|default'] = $field_group;

  return $export;
}
