<?php
/**
 * @file
 * iaea_content_type_video.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_content_type_video_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'iaea_videos_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'IAEA Videos Grid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'IAEA Videos';
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
  /* Field: Content: IAEA Video Date */
  $handler->display->display_options['fields']['field_iaeavideo_date']['id'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['table'] = 'field_data_field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['field'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: IAEA Video Poster */
  $handler->display->display_options['fields']['field_iaeavideo_poster']['id'] = 'field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['table'] = 'field_data_field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['field'] = 'field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_poster']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_poster']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: IAEA Video Body */
  $handler->display->display_options['fields']['field_iaeavideo_body']['id'] = 'field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['table'] = 'field_data_field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['field'] = 'field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Video &rarr;';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
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
    'iaea_video' => 'iaea_video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Videos Grid Front Page Tabs */
  $handler = $view->new_display('panel_pane', 'Videos Grid Front Page Tabs', 'panel_pane_1');
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/newscenter/multimedia/videos" class="pull-right btn btn-primary">More Videos &rarr;</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: IAEA Video Date */
  $handler->display->display_options['fields']['field_iaeavideo_date']['id'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['table'] = 'field_data_field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['field'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: IAEA Video Poster */
  $handler->display->display_options['fields']['field_iaeavideo_poster']['id'] = 'field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['table'] = 'field_data_field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['field'] = 'field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_poster']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_poster']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
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
  /* Field: Content: IAEA Video Body */
  $handler->display->display_options['fields']['field_iaeavideo_body']['id'] = 'field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['table'] = 'field_data_field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['field'] = 'field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iaeavideo_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_body']['element_default_classes'] = FALSE;
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

  /* Display: Videos List - ALL items */
  $handler = $view->new_display('panel_pane', 'Videos List - ALL items', 'all_videos_grid');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: IAEA Video Date */
  $handler->display->display_options['fields']['field_iaeavideo_date']['id'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['table'] = 'field_data_field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['field'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: IAEA Video Poster */
  $handler->display->display_options['fields']['field_iaeavideo_poster']['id'] = 'field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['table'] = 'field_data_field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['field'] = 'field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_poster']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_poster']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: IAEA Video Body */
  $handler->display->display_options['fields']['field_iaeavideo_body']['id'] = 'field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['table'] = 'field_data_field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['field'] = 'field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_iaeavideo_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Video &rarr;';
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
    'iaea_video' => 'iaea_video',
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
    'field_iaeavideo_body_value' => 'field_iaeavideo_body_value',
    'status' => 0,
    'type' => 0,
    'field_iaeavideo_date_value' => 0,
  );
  /* Filter criterion: Content: IAEA Video Date (field_iaeavideo_date) */
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['id'] = 'field_iaeavideo_date_value';
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['table'] = 'field_data_field_iaeavideo_date';
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['field'] = 'field_iaeavideo_date_value';
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['expose']['operator_id'] = 'field_iaeavideo_date_value_op';
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['expose']['operator'] = 'field_iaeavideo_date_value_op';
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['expose']['identifier'] = 'field_iaeavideo_date_value';
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_iaeavideo_date_value']['year_range'] = '-20:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: IAEA Video Body (field_iaeavideo_body) */
  $handler->display->display_options['filters']['field_iaeavideo_body_value']['id'] = 'field_iaeavideo_body_value';
  $handler->display->display_options['filters']['field_iaeavideo_body_value']['table'] = 'field_data_field_iaeavideo_body';
  $handler->display->display_options['filters']['field_iaeavideo_body_value']['field'] = 'field_iaeavideo_body_value';
  $handler->display->display_options['filters']['field_iaeavideo_body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_iaeavideo_body_value']['group'] = 2;

  /* Display: Last Video */
  $handler = $view->new_display('panel_pane', 'Last Video', 'last_one_video');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: IAEA Video Date */
  $handler->display->display_options['fields']['field_iaeavideo_date']['id'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['table'] = 'field_data_field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['field'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: IAEA Video Poster */
  $handler->display->display_options['fields']['field_iaeavideo_poster']['id'] = 'field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['table'] = 'field_data_field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['field'] = 'field_iaeavideo_poster';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_poster']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_poster']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_iaeavideo_poster']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: IAEA Video Body */
  $handler->display->display_options['fields']['field_iaeavideo_body']['id'] = 'field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['table'] = 'field_data_field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['field'] = 'field_iaeavideo_body';
  $handler->display->display_options['fields']['field_iaeavideo_body']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_body']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-primary btn-lg';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Video &rarr;';
  $export['iaea_videos_grid'] = $view;

  return $export;
}
