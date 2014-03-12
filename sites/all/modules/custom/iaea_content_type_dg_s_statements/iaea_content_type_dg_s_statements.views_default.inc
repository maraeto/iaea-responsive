<?php
/**
 * @file
 * iaea_content_type_dg_s_statements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_content_type_dg_s_statements_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'newscenter_dg_s_statements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DG\'s Statements';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'press-release-item';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: DG Statement Date */
  $handler->display->display_options['fields']['field_dgstatement_date']['id'] = 'field_dgstatement_date';
  $handler->display->display_options['fields']['field_dgstatement_date']['table'] = 'field_data_field_dgstatement_date';
  $handler->display->display_options['fields']['field_dgstatement_date']['field'] = 'field_dgstatement_date';
  $handler->display->display_options['fields']['field_dgstatement_date']['label'] = '';
  $handler->display->display_options['fields']['field_dgstatement_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dgstatement_date']['field_api_classes'] = TRUE;
  /* Field: Content: DG Statement Event */
  $handler->display->display_options['fields']['field_dgstatement_event']['id'] = 'field_dgstatement_event';
  $handler->display->display_options['fields']['field_dgstatement_event']['table'] = 'field_data_field_dgstatement_event';
  $handler->display->display_options['fields']['field_dgstatement_event']['field'] = 'field_dgstatement_event';
  $handler->display->display_options['fields']['field_dgstatement_event']['label'] = '';
  $handler->display->display_options['fields']['field_dgstatement_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dgstatement_event']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_event']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_event']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_event']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_dgstatement_event']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_dgstatement_event']['field_api_classes'] = TRUE;
  /* Field: Content: DG Statement Location */
  $handler->display->display_options['fields']['field_dgstatement_location']['id'] = 'field_dgstatement_location';
  $handler->display->display_options['fields']['field_dgstatement_location']['table'] = 'field_data_field_dgstatement_location';
  $handler->display->display_options['fields']['field_dgstatement_location']['field'] = 'field_dgstatement_location';
  $handler->display->display_options['fields']['field_dgstatement_location']['label'] = '';
  $handler->display->display_options['fields']['field_dgstatement_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dgstatement_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_location']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_dgstatement_location']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: DG Statement Author */
  $handler->display->display_options['fields']['field_dgstatement_author']['id'] = 'field_dgstatement_author';
  $handler->display->display_options['fields']['field_dgstatement_author']['table'] = 'field_data_field_dgstatement_author';
  $handler->display->display_options['fields']['field_dgstatement_author']['field'] = 'field_dgstatement_author';
  $handler->display->display_options['fields']['field_dgstatement_author']['label'] = '';
  $handler->display->display_options['fields']['field_dgstatement_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dgstatement_author']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_author']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_author']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_dgstatement_author']['field_api_classes'] = TRUE;
  /* Field: Content: DG Statement Body */
  $handler->display->display_options['fields']['field_dgstatement_body']['id'] = 'field_dgstatement_body';
  $handler->display->display_options['fields']['field_dgstatement_body']['table'] = 'field_data_field_dgstatement_body';
  $handler->display->display_options['fields']['field_dgstatement_body']['field'] = 'field_dgstatement_body';
  $handler->display->display_options['fields']['field_dgstatement_body']['label'] = '';
  $handler->display->display_options['fields']['field_dgstatement_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_dgstatement_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dgstatement_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_dgstatement_body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_dgstatement_body']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more &rarr;';
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
    'dg_statement' => 'dg_statement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
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
    'field_dgstatement_body_value' => 'field_dgstatement_body_value',
    'status' => 0,
    'type' => 0,
    'field_dgstatement_date_value' => 0,
  );
  /* Filter criterion: Content: DG Statement Date (field_dgstatement_date) */
  $handler->display->display_options['filters']['field_dgstatement_date_value']['id'] = 'field_dgstatement_date_value';
  $handler->display->display_options['filters']['field_dgstatement_date_value']['table'] = 'field_data_field_dgstatement_date';
  $handler->display->display_options['filters']['field_dgstatement_date_value']['field'] = 'field_dgstatement_date_value';
  $handler->display->display_options['filters']['field_dgstatement_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dgstatement_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dgstatement_date_value']['expose']['operator_id'] = 'field_dgstatement_date_value_op';
  $handler->display->display_options['filters']['field_dgstatement_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_dgstatement_date_value']['expose']['operator'] = 'field_dgstatement_date_value_op';
  $handler->display->display_options['filters']['field_dgstatement_date_value']['expose']['identifier'] = 'field_dgstatement_date_value';
  $handler->display->display_options['filters']['field_dgstatement_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_dgstatement_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_dgstatement_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_dgstatement_date_value']['year_range'] = '-20:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: DG Statement Body (field_dgstatement_body) */
  $handler->display->display_options['filters']['field_dgstatement_body_value']['id'] = 'field_dgstatement_body_value';
  $handler->display->display_options['filters']['field_dgstatement_body_value']['table'] = 'field_data_field_dgstatement_body';
  $handler->display->display_options['filters']['field_dgstatement_body_value']['field'] = 'field_dgstatement_body_value';
  $handler->display->display_options['filters']['field_dgstatement_body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_dgstatement_body_value']['group'] = 2;

  /* Display: DG Statements */
  $handler = $view->new_display('panel_pane', 'DG Statements', 'all_dgs_statements');
  $export['newscenter_dg_s_statements'] = $view;

  return $export;
}
