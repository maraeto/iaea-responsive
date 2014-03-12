<?php
/**
 * @file
 * iaea_content_type_press_release.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_content_type_press_release_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press_releases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press Releases';
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
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Press Release Date */
  $handler->display->display_options['fields']['field_pressrelease_date']['id'] = 'field_pressrelease_date';
  $handler->display->display_options['fields']['field_pressrelease_date']['table'] = 'field_data_field_pressrelease_date';
  $handler->display->display_options['fields']['field_pressrelease_date']['field'] = 'field_pressrelease_date';
  $handler->display->display_options['fields']['field_pressrelease_date']['label'] = '';
  $handler->display->display_options['fields']['field_pressrelease_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pressrelease_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pressrelease_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pressrelease_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pressrelease_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pressrelease_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_pressrelease_date']['field_api_classes'] = TRUE;
  /* Field: Content: Press Release Number */
  $handler->display->display_options['fields']['field_pressrelease_number']['id'] = 'field_pressrelease_number';
  $handler->display->display_options['fields']['field_pressrelease_number']['table'] = 'field_data_field_pressrelease_number';
  $handler->display->display_options['fields']['field_pressrelease_number']['field'] = 'field_pressrelease_number';
  $handler->display->display_options['fields']['field_pressrelease_number']['label'] = '';
  $handler->display->display_options['fields']['field_pressrelease_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pressrelease_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pressrelease_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pressrelease_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pressrelease_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pressrelease_number']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Press Release Body */
  $handler->display->display_options['fields']['field_pressrelease_body']['id'] = 'field_pressrelease_body';
  $handler->display->display_options['fields']['field_pressrelease_body']['table'] = 'field_data_field_pressrelease_body';
  $handler->display->display_options['fields']['field_pressrelease_body']['field'] = 'field_pressrelease_body';
  $handler->display->display_options['fields']['field_pressrelease_body']['label'] = '';
  $handler->display->display_options['fields']['field_pressrelease_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pressrelease_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pressrelease_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pressrelease_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pressrelease_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pressrelease_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_pressrelease_body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_pressrelease_body']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more &rarr;';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div><strong>[field_pressrelease_date]</strong> - [field_pressrelease_number]
<h4>[title]</h4>
<p>[field_pressrelease_body] [view_node]</p>
</div>
<hr />';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'press_release' => 'press_release',
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
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'field_pressrelease_body_value' => 'field_pressrelease_body_value',
    'title' => 'title',
    'status' => 0,
    'type' => 0,
    'field_pressrelease_date_value' => 0,
    'field_pressrelease_number_value' => 0,
  );
  /* Filter criterion: Content: Press Release Number (field_pressrelease_number) */
  $handler->display->display_options['filters']['field_pressrelease_number_value']['id'] = 'field_pressrelease_number_value';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['table'] = 'field_data_field_pressrelease_number';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['field'] = 'field_pressrelease_number_value';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pressrelease_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['operator_id'] = 'field_pressrelease_number_value_op';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['label'] = 'Press Release Number';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['operator'] = 'field_pressrelease_number_value_op';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['identifier'] = 'field_pressrelease_number_value';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Press Release Date (field_pressrelease_date) */
  $handler->display->display_options['filters']['field_pressrelease_date_value']['id'] = 'field_pressrelease_date_value';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['table'] = 'field_data_field_pressrelease_date';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['field'] = 'field_pressrelease_date_value';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pressrelease_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['operator_id'] = 'field_pressrelease_date_value_op';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['operator'] = 'field_pressrelease_date_value_op';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['identifier'] = 'field_pressrelease_date_value';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_pressrelease_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['year_range'] = '-20:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Press Release Body (field_pressrelease_body) */
  $handler->display->display_options['filters']['field_pressrelease_body_value']['id'] = 'field_pressrelease_body_value';
  $handler->display->display_options['filters']['field_pressrelease_body_value']['table'] = 'field_data_field_pressrelease_body';
  $handler->display->display_options['filters']['field_pressrelease_body_value']['field'] = 'field_pressrelease_body_value';
  $handler->display->display_options['filters']['field_pressrelease_body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_pressrelease_body_value']['group'] = 2;

  /* Display: Press Releases */
  $handler = $view->new_display('panel_pane', 'Press Releases', 'all_press_releases');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'press_release' => 'press_release',
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
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'field_pressrelease_body_value' => 'field_pressrelease_body_value',
    'title' => 'title',
    'status' => 0,
    'type' => 0,
    'field_pressrelease_date_value' => 0,
    'field_pressrelease_number_value' => 0,
  );
  /* Filter criterion: Content: Press Release Number (field_pressrelease_number) */
  $handler->display->display_options['filters']['field_pressrelease_number_value']['id'] = 'field_pressrelease_number_value';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['table'] = 'field_data_field_pressrelease_number';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['field'] = 'field_pressrelease_number_value';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pressrelease_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['operator_id'] = 'field_pressrelease_number_value_op';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['label'] = 'PR Number';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['operator'] = 'field_pressrelease_number_value_op';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['identifier'] = 'field_pressrelease_number_value';
  $handler->display->display_options['filters']['field_pressrelease_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Press Release Date (field_pressrelease_date) */
  $handler->display->display_options['filters']['field_pressrelease_date_value']['id'] = 'field_pressrelease_date_value';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['table'] = 'field_data_field_pressrelease_date';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['field'] = 'field_pressrelease_date_value';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pressrelease_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['operator_id'] = 'field_pressrelease_date_value_op';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['operator'] = 'field_pressrelease_date_value_op';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['identifier'] = 'field_pressrelease_date_value';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_pressrelease_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_pressrelease_date_value']['year_range'] = '-20:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Press Release Body (field_pressrelease_body) */
  $handler->display->display_options['filters']['field_pressrelease_body_value']['id'] = 'field_pressrelease_body_value';
  $handler->display->display_options['filters']['field_pressrelease_body_value']['table'] = 'field_data_field_pressrelease_body';
  $handler->display->display_options['filters']['field_pressrelease_body_value']['field'] = 'field_pressrelease_body_value';
  $handler->display->display_options['filters']['field_pressrelease_body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_pressrelease_body_value']['group'] = 2;
  $export['press_releases'] = $view;

  return $export;
}
