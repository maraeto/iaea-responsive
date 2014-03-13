<?php
/**
 * @file
 * iaea_view_information_circulars.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_view_information_circulars_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'information_circulars';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Information Circulars';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Infcirc Number */
  $handler->display->display_options['fields']['field_infcirc_number']['id'] = 'field_infcirc_number';
  $handler->display->display_options['fields']['field_infcirc_number']['table'] = 'field_data_field_infcirc_number';
  $handler->display->display_options['fields']['field_infcirc_number']['field'] = 'field_infcirc_number';
  $handler->display->display_options['fields']['field_infcirc_number']['label'] = '';
  $handler->display->display_options['fields']['field_infcirc_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_infcirc_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_infcirc_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_infcirc_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_infcirc_number']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_infcirc_number']['field_api_classes'] = TRUE;
  /* Field: Content: Infcirc Date */
  $handler->display->display_options['fields']['field_infcirc_date']['id'] = 'field_infcirc_date';
  $handler->display->display_options['fields']['field_infcirc_date']['table'] = 'field_data_field_infcirc_date';
  $handler->display->display_options['fields']['field_infcirc_date']['field'] = 'field_infcirc_date';
  $handler->display->display_options['fields']['field_infcirc_date']['label'] = '';
  $handler->display->display_options['fields']['field_infcirc_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_infcirc_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_infcirc_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_infcirc_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_infcirc_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_infcirc_date']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Infcirc Description */
  $handler->display->display_options['fields']['field_infcirc_description']['id'] = 'field_infcirc_description';
  $handler->display->display_options['fields']['field_infcirc_description']['table'] = 'field_data_field_infcirc_description';
  $handler->display->display_options['fields']['field_infcirc_description']['field'] = 'field_infcirc_description';
  $handler->display->display_options['fields']['field_infcirc_description']['label'] = '';
  $handler->display->display_options['fields']['field_infcirc_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_infcirc_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_infcirc_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_infcirc_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_infcirc_description']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_infcirc_description']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Infcirc Date (field_infcirc_date) */
  $handler->display->display_options['sorts']['field_infcirc_date_value']['id'] = 'field_infcirc_date_value';
  $handler->display->display_options['sorts']['field_infcirc_date_value']['table'] = 'field_data_field_infcirc_date';
  $handler->display->display_options['sorts']['field_infcirc_date_value']['field'] = 'field_infcirc_date_value';
  $handler->display->display_options['sorts']['field_infcirc_date_value']['order'] = 'DESC';
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
    'information_circular' => 'information_circular',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Infcirc Category (field_infcirc_category) */
  $handler->display->display_options['filters']['field_infcirc_category_tid']['id'] = 'field_infcirc_category_tid';
  $handler->display->display_options['filters']['field_infcirc_category_tid']['table'] = 'field_data_field_infcirc_category';
  $handler->display->display_options['filters']['field_infcirc_category_tid']['field'] = 'field_infcirc_category_tid';
  $handler->display->display_options['filters']['field_infcirc_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_infcirc_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_infcirc_category_tid']['expose']['operator_id'] = 'field_infcirc_category_tid_op';
  $handler->display->display_options['filters']['field_infcirc_category_tid']['expose']['label'] = 'By Category';
  $handler->display->display_options['filters']['field_infcirc_category_tid']['expose']['operator'] = 'field_infcirc_category_tid_op';
  $handler->display->display_options['filters']['field_infcirc_category_tid']['expose']['identifier'] = 'field_infcirc_category_tid';
  $handler->display->display_options['filters']['field_infcirc_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_infcirc_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_infcirc_category_tid']['vocabulary'] = 'infcirc_category';
  /* Filter criterion: Content: Infcirc Number (field_infcirc_number) */
  $handler->display->display_options['filters']['field_infcirc_number_value']['id'] = 'field_infcirc_number_value';
  $handler->display->display_options['filters']['field_infcirc_number_value']['table'] = 'field_data_field_infcirc_number';
  $handler->display->display_options['filters']['field_infcirc_number_value']['field'] = 'field_infcirc_number_value';
  $handler->display->display_options['filters']['field_infcirc_number_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_infcirc_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_infcirc_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_infcirc_number_value']['expose']['operator_id'] = 'field_infcirc_number_value_op';
  $handler->display->display_options['filters']['field_infcirc_number_value']['expose']['label'] = 'By Number';
  $handler->display->display_options['filters']['field_infcirc_number_value']['expose']['operator'] = 'field_infcirc_number_value_op';
  $handler->display->display_options['filters']['field_infcirc_number_value']['expose']['identifier'] = 'field_infcirc_number_value';
  $handler->display->display_options['filters']['field_infcirc_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Infcirc Date (field_infcirc_date) */
  $handler->display->display_options['filters']['field_infcirc_date_value']['id'] = 'field_infcirc_date_value';
  $handler->display->display_options['filters']['field_infcirc_date_value']['table'] = 'field_data_field_infcirc_date';
  $handler->display->display_options['filters']['field_infcirc_date_value']['field'] = 'field_infcirc_date_value';
  $handler->display->display_options['filters']['field_infcirc_date_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_infcirc_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_infcirc_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_infcirc_date_value']['expose']['operator_id'] = 'field_infcirc_date_value_op';
  $handler->display->display_options['filters']['field_infcirc_date_value']['expose']['label'] = 'By Year of Issue';
  $handler->display->display_options['filters']['field_infcirc_date_value']['expose']['operator'] = 'field_infcirc_date_value_op';
  $handler->display->display_options['filters']['field_infcirc_date_value']['expose']['identifier'] = 'field_infcirc_date_value';
  $handler->display->display_options['filters']['field_infcirc_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_infcirc_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_infcirc_date_value']['form_type'] = 'date_text';
  /* Filter criterion: Content: Infcirc Country (field_infcirc_country) */
  $handler->display->display_options['filters']['field_infcirc_country_tid']['id'] = 'field_infcirc_country_tid';
  $handler->display->display_options['filters']['field_infcirc_country_tid']['table'] = 'field_data_field_infcirc_country';
  $handler->display->display_options['filters']['field_infcirc_country_tid']['field'] = 'field_infcirc_country_tid';
  $handler->display->display_options['filters']['field_infcirc_country_tid']['value'] = '';
  $handler->display->display_options['filters']['field_infcirc_country_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_infcirc_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_infcirc_country_tid']['expose']['operator_id'] = 'field_infcirc_country_tid_op';
  $handler->display->display_options['filters']['field_infcirc_country_tid']['expose']['label'] = 'By Country';
  $handler->display->display_options['filters']['field_infcirc_country_tid']['expose']['operator'] = 'field_infcirc_country_tid_op';
  $handler->display->display_options['filters']['field_infcirc_country_tid']['expose']['identifier'] = 'field_infcirc_country_tid';
  $handler->display->display_options['filters']['field_infcirc_country_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_infcirc_country_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_infcirc_country_tid']['vocabulary'] = 'country';

  /* Display: Information Circulars */
  $handler = $view->new_display('panel_pane', 'Information Circulars', 'all_information_circulars');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['information_circulars'] = $view;

  return $export;
}
