<?php
/**
 * @file
 * iaea_content_type_meeting.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_content_type_meeting_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Meeting Date */
  $handler->display->display_options['fields']['field_meeting_date']['id'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['field'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_meeting_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_meeting_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Meeting Link */
  $handler->display->display_options['fields']['field_meeting_link']['id'] = 'field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['table'] = 'field_data_field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['field'] = 'field_meeting_link';
  $handler->display->display_options['fields']['field_meeting_link']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_meeting_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_meeting_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_meeting_link']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Sort criterion: Content: Meeting Date -  start date (field_meeting_date) */
  $handler->display->display_options['sorts']['field_meeting_date_value']['id'] = 'field_meeting_date_value';
  $handler->display->display_options['sorts']['field_meeting_date_value']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['sorts']['field_meeting_date_value']['field'] = 'field_meeting_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Meetings Carousel */
  $handler = $view->new_display('panel_pane', 'Meetings Carousel', 'meeting_carousel');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['meetings'] = $view;

  return $export;
}
