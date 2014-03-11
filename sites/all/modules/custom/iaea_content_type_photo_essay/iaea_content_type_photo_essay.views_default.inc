<?php
/**
 * @file
 * iaea_content_type_photo_essay.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_content_type_photo_essay_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_essays_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Essays Grid';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/newscenter/multimedia/photoessays" class="pull-right btn btn-primary">More Photo Essays &rarr;</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Photo Essay Publishing Date */
  $handler->display->display_options['fields']['field_photoessay_date']['id'] = 'field_photoessay_date';
  $handler->display->display_options['fields']['field_photoessay_date']['table'] = 'field_data_field_photoessay_date';
  $handler->display->display_options['fields']['field_photoessay_date']['field'] = 'field_photoessay_date';
  $handler->display->display_options['fields']['field_photoessay_date']['label'] = '';
  $handler->display->display_options['fields']['field_photoessay_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_photoessay_date']['field_api_classes'] = TRUE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photoessay_photos']['id'] = 'field_photoessay_photos';
  $handler->display->display_options['fields']['field_photoessay_photos']['table'] = 'field_data_field_photoessay_photos';
  $handler->display->display_options['fields']['field_photoessay_photos']['field'] = 'field_photoessay_photos';
  $handler->display->display_options['fields']['field_photoessay_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photoessay_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_photos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photoessay_photos']['settings'] = array(
    'image_style' => 'photo_essay_grid_thumb',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_photoessay_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photoessay_photos']['delta_offset'] = '0';
  /* Field: Content: Photo Essay Teaser */
  $handler->display->display_options['fields']['field_photoessay_teaser']['id'] = 'field_photoessay_teaser';
  $handler->display->display_options['fields']['field_photoessay_teaser']['table'] = 'field_data_field_photoessay_teaser';
  $handler->display->display_options['fields']['field_photoessay_teaser']['field'] = 'field_photoessay_teaser';
  $handler->display->display_options['fields']['field_photoessay_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_photoessay_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_teaser']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['field_photoessay_teaser']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Photo Essay &rarr;';
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
    'photo_essay' => 'photo_essay',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Photo Essay Publishing Date (field_photoessay_date) */
  $handler->display->display_options['filters']['field_photoessay_date_value']['id'] = 'field_photoessay_date_value';
  $handler->display->display_options['filters']['field_photoessay_date_value']['table'] = 'field_data_field_photoessay_date';
  $handler->display->display_options['filters']['field_photoessay_date_value']['field'] = 'field_photoessay_date_value';
  $handler->display->display_options['filters']['field_photoessay_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_photoessay_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['operator_id'] = 'field_photoessay_date_value_op';
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['label'] = 'Photo Essay Publishing Date (field_photoessay_date)';
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['operator'] = 'field_photoessay_date_value_op';
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['identifier'] = 'field_photoessay_date_value';
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_photoessay_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_photoessay_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_photoessay_date_value']['year_range'] = '-20:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Photo Essay Teaser (field_photoessay_teaser) */
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['id'] = 'field_photoessay_teaser_value';
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['table'] = 'field_data_field_photoessay_teaser';
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['field'] = 'field_photoessay_teaser_value';
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['group'] = 2;
  /* Filter criterion: Global: Populate filters */
  $handler->display->display_options['filters']['populate']['id'] = 'populate';
  $handler->display->display_options['filters']['populate']['table'] = 'views_filters_populate';
  $handler->display->display_options['filters']['populate']['field'] = 'populate';
  $handler->display->display_options['filters']['populate']['exposed'] = TRUE;
  $handler->display->display_options['filters']['populate']['expose']['operator_id'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['label'] = 'Populate filters';
  $handler->display->display_options['filters']['populate']['expose']['operator'] = 'populate_op';
  $handler->display->display_options['filters']['populate']['expose']['identifier'] = 'populate';

  /* Display: Photo Essay Grid Front Page Tabs */
  $handler = $view->new_display('panel_pane', 'Photo Essay Grid Front Page Tabs', 'front_page_grid');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Photo Essays';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Photo Essays →';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo Essay Publishing Date */
  $handler->display->display_options['fields']['field_photoessay_date']['id'] = 'field_photoessay_date';
  $handler->display->display_options['fields']['field_photoessay_date']['table'] = 'field_data_field_photoessay_date';
  $handler->display->display_options['fields']['field_photoessay_date']['field'] = 'field_photoessay_date';
  $handler->display->display_options['fields']['field_photoessay_date']['label'] = '';
  $handler->display->display_options['fields']['field_photoessay_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_photoessay_date']['field_api_classes'] = TRUE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photoessay_photos']['id'] = 'field_photoessay_photos';
  $handler->display->display_options['fields']['field_photoessay_photos']['table'] = 'field_data_field_photoessay_photos';
  $handler->display->display_options['fields']['field_photoessay_photos']['field'] = 'field_photoessay_photos';
  $handler->display->display_options['fields']['field_photoessay_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photoessay_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_photos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photoessay_photos']['settings'] = array(
    'image_style' => 'photo_essay_grid_thumb',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_photoessay_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photoessay_photos']['delta_offset'] = '0';
  /* Field: Content: Photo Essay Teaser */
  $handler->display->display_options['fields']['field_photoessay_teaser']['id'] = 'field_photoessay_teaser';
  $handler->display->display_options['fields']['field_photoessay_teaser']['table'] = 'field_data_field_photoessay_teaser';
  $handler->display->display_options['fields']['field_photoessay_teaser']['field'] = 'field_photoessay_teaser';
  $handler->display->display_options['fields']['field_photoessay_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_photoessay_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_teaser']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['field_photoessay_teaser']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Photo Essay &rarr;';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'photo_essay' => 'photo_essay',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Photo Essay List - ALL Items */
  $handler = $view->new_display('panel_pane', 'Photo Essay List - ALL Items', 'all_photo_essays_grid');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo Essay Publishing Date */
  $handler->display->display_options['fields']['field_photoessay_date']['id'] = 'field_photoessay_date';
  $handler->display->display_options['fields']['field_photoessay_date']['table'] = 'field_data_field_photoessay_date';
  $handler->display->display_options['fields']['field_photoessay_date']['field'] = 'field_photoessay_date';
  $handler->display->display_options['fields']['field_photoessay_date']['label'] = '';
  $handler->display->display_options['fields']['field_photoessay_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_photoessay_date']['field_api_classes'] = TRUE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photoessay_photos']['id'] = 'field_photoessay_photos';
  $handler->display->display_options['fields']['field_photoessay_photos']['table'] = 'field_data_field_photoessay_photos';
  $handler->display->display_options['fields']['field_photoessay_photos']['field'] = 'field_photoessay_photos';
  $handler->display->display_options['fields']['field_photoessay_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photoessay_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_photos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photoessay_photos']['settings'] = array(
    'image_style' => 'photo_essay_grid_thumb',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_photoessay_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photoessay_photos']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Photo Essay Teaser */
  $handler->display->display_options['fields']['field_photoessay_teaser']['id'] = 'field_photoessay_teaser';
  $handler->display->display_options['fields']['field_photoessay_teaser']['table'] = 'field_data_field_photoessay_teaser';
  $handler->display->display_options['fields']['field_photoessay_teaser']['field'] = 'field_photoessay_teaser';
  $handler->display->display_options['fields']['field_photoessay_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_photoessay_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photoessay_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photoessay_teaser']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['field_photoessay_teaser']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Photo Essay &rarr;';
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
    'photo_essay' => 'photo_essay',
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
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['populate']['filters'] = array(
    'title' => 'title',
    'field_photoessay_teaser_value' => 'field_photoessay_teaser_value',
    'status' => 0,
    'type' => 0,
    'field_photoessay_date_value' => 0,
  );
  /* Filter criterion: Content: Photo Essay Publishing Date (field_photoessay_date) */
  $handler->display->display_options['filters']['field_photoessay_date_value']['id'] = 'field_photoessay_date_value';
  $handler->display->display_options['filters']['field_photoessay_date_value']['table'] = 'field_data_field_photoessay_date';
  $handler->display->display_options['filters']['field_photoessay_date_value']['field'] = 'field_photoessay_date_value';
  $handler->display->display_options['filters']['field_photoessay_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_photoessay_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['operator_id'] = 'field_photoessay_date_value_op';
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['operator'] = 'field_photoessay_date_value_op';
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['identifier'] = 'field_photoessay_date_value';
  $handler->display->display_options['filters']['field_photoessay_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_photoessay_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_photoessay_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_photoessay_date_value']['year_range'] = '-20:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Photo Essay Teaser (field_photoessay_teaser) */
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['id'] = 'field_photoessay_teaser_value';
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['table'] = 'field_data_field_photoessay_teaser';
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['field'] = 'field_photoessay_teaser_value';
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_photoessay_teaser_value']['group'] = 2;
  $handler->display->display_options['link_to_view'] = '1';
  $export['photo_essays_grid'] = $view;

  return $export;
}
