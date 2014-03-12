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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
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
  $handler = $view->new_display('panel_pane', 'Videos List - ALL items', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';

  /* Display: Last Video */
  $handler = $view->new_display('panel_pane', 'Last Video', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['iaea_videos_grid'] = $view;

  return $export;
}
