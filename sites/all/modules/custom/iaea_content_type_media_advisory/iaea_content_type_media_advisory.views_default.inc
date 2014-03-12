<?php
/**
 * @file
 * iaea_content_type_media_advisory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_content_type_media_advisory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'media_advisories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media Advisories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Media Advisory Body */
  $handler->display->display_options['fields']['field_mediaadvisory_body']['id'] = 'field_mediaadvisory_body';
  $handler->display->display_options['fields']['field_mediaadvisory_body']['table'] = 'field_data_field_mediaadvisory_body';
  $handler->display->display_options['fields']['field_mediaadvisory_body']['field'] = 'field_mediaadvisory_body';
  $handler->display->display_options['fields']['field_mediaadvisory_body']['label'] = '';
  $handler->display->display_options['fields']['field_mediaadvisory_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mediaadvisory_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mediaadvisory_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediaadvisory_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mediaadvisory_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mediaadvisory_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_mediaadvisory_body']['settings'] = array(
    'trim_length' => '600',
    'field_formatter_class' => '',
  );
  /* Field: Content: Media Advisory Date */
  $handler->display->display_options['fields']['field_mediaadvisory_date']['id'] = 'field_mediaadvisory_date';
  $handler->display->display_options['fields']['field_mediaadvisory_date']['table'] = 'field_data_field_mediaadvisory_date';
  $handler->display->display_options['fields']['field_mediaadvisory_date']['field'] = 'field_mediaadvisory_date';
  $handler->display->display_options['fields']['field_mediaadvisory_date']['label'] = '';
  $handler->display->display_options['fields']['field_mediaadvisory_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mediaadvisory_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mediaadvisory_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediaadvisory_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mediaadvisory_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mediaadvisory_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Media Advisory Number */
  $handler->display->display_options['fields']['field_mediaadvisory_number']['id'] = 'field_mediaadvisory_number';
  $handler->display->display_options['fields']['field_mediaadvisory_number']['table'] = 'field_data_field_mediaadvisory_number';
  $handler->display->display_options['fields']['field_mediaadvisory_number']['field'] = 'field_mediaadvisory_number';
  $handler->display->display_options['fields']['field_mediaadvisory_number']['label'] = '';
  $handler->display->display_options['fields']['field_mediaadvisory_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mediaadvisory_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mediaadvisory_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediaadvisory_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mediaadvisory_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mediaadvisory_number']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Media Advisory Subtitle */
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['id'] = 'field_mediaadvisory_subtitle';
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['table'] = 'field_data_field_mediaadvisory_subtitle';
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['field'] = 'field_mediaadvisory_subtitle';
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mediaadvisory_subtitle']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more &rarr;';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div><strong>[field_mediaadvisory_date]</strong> - [field_mediaadvisory_number]
<h4>[title]</h4>
<h4>[field_mediaadvisory_subtitle]</h4>
<p>[field_mediaadvisory_body] [view_node]</p>
</div>
<hr />';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'media_advisory' => 'media_advisory',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['group'] = 1;
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 'populate';
  $handler->display->display_options['filters']['populate']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'title' => 'title',
    'field_mediaadvisory_body_value' => 'field_mediaadvisory_body_value',
    'status' => 0,
    'type' => 0,
    'field_mediaadvisory_date_value' => 0,
  );
  /* Filter criterion: Content: Media Advisory Number (field_mediaadvisory_number) */
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['id'] = 'field_mediaadvisory_number_value';
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['table'] = 'field_data_field_mediaadvisory_number';
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['field'] = 'field_mediaadvisory_number_value';
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['expose']['operator_id'] = 'field_mediaadvisory_number_value_op';
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['expose']['label'] = 'Number';
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['expose']['operator'] = 'field_mediaadvisory_number_value_op';
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['expose']['identifier'] = 'field_mediaadvisory_number_value';
  $handler->display->display_options['filters']['field_mediaadvisory_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Media Advisory Date (field_mediaadvisory_date) */
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['id'] = 'field_mediaadvisory_date_value';
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['table'] = 'field_data_field_mediaadvisory_date';
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['field'] = 'field_mediaadvisory_date_value';
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['expose']['operator_id'] = 'field_mediaadvisory_date_value_op';
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['expose']['operator'] = 'field_mediaadvisory_date_value_op';
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['expose']['identifier'] = 'field_mediaadvisory_date_value';
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_mediaadvisory_date_value']['year_range'] = '-20:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Media Advisory Body (field_mediaadvisory_body) */
  $handler->display->display_options['filters']['field_mediaadvisory_body_value']['id'] = 'field_mediaadvisory_body_value';
  $handler->display->display_options['filters']['field_mediaadvisory_body_value']['table'] = 'field_data_field_mediaadvisory_body';
  $handler->display->display_options['filters']['field_mediaadvisory_body_value']['field'] = 'field_mediaadvisory_body_value';
  $handler->display->display_options['filters']['field_mediaadvisory_body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_mediaadvisory_body_value']['group'] = 2;

  /* Display: Media Advisories */
  $handler = $view->new_display('panel_pane', 'Media Advisories', 'all_media_advisories');
  $export['media_advisories'] = $view;

  return $export;
}
