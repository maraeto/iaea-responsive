<?php
/**
 * @file
 * iaea_content_type_focus_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_content_type_focus_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'focus_page_related_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Focus Page Related Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'focus-page-related-content';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'type' => 'type',
    'field_dgstatement_date' => 'field_dgstatement_date',
    'field_mediaadvisory_date' => 'field_mediaadvisory_date',
    'field_pressrelease_date' => 'field_pressrelease_date',
    'field_newsstory_date' => 'field_newsstory_date',
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
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
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_dgstatement_date']['field_api_classes'] = TRUE;
  /* Field: Content: Media Advisory Date */
  $handler->display->display_options['fields']['field_mediaadvisory_date']['id'] = 'field_mediaadvisory_date';
  $handler->display->display_options['fields']['field_mediaadvisory_date']['table'] = 'field_data_field_mediaadvisory_date';
  $handler->display->display_options['fields']['field_mediaadvisory_date']['field'] = 'field_mediaadvisory_date';
  $handler->display->display_options['fields']['field_mediaadvisory_date']['label'] = '';
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
  /* Field: Content: Press Release Date */
  $handler->display->display_options['fields']['field_pressrelease_date']['id'] = 'field_pressrelease_date';
  $handler->display->display_options['fields']['field_pressrelease_date']['table'] = 'field_data_field_pressrelease_date';
  $handler->display->display_options['fields']['field_pressrelease_date']['field'] = 'field_pressrelease_date';
  $handler->display->display_options['fields']['field_pressrelease_date']['label'] = '';
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
    'field_formatter_class' => '',
  );
  /* Field: Content: Story Date */
  $handler->display->display_options['fields']['field_newsstory_date']['id'] = 'field_newsstory_date';
  $handler->display->display_options['fields']['field_newsstory_date']['table'] = 'field_data_field_newsstory_date';
  $handler->display->display_options['fields']['field_newsstory_date']['field'] = 'field_newsstory_date';
  $handler->display->display_options['fields']['field_newsstory_date']['label'] = '';
  $handler->display->display_options['fields']['field_newsstory_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_date']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[type]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['text'] = ', [type]';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
  /* Contextual filter: Content: Focus Page Reference (field_focus_page_reference) */
  $handler->display->display_options['arguments']['field_focus_page_reference_target_id']['id'] = 'field_focus_page_reference_target_id';
  $handler->display->display_options['arguments']['field_focus_page_reference_target_id']['table'] = 'field_data_field_focus_page_reference';
  $handler->display->display_options['arguments']['field_focus_page_reference_target_id']['field'] = 'field_focus_page_reference_target_id';
  $handler->display->display_options['arguments']['field_focus_page_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_focus_page_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_focus_page_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_focus_page_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_focus_page_reference_target_id']['summary_options']['items_per_page'] = '25';
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
    'media_advisory' => 'media_advisory',
    'news_story' => 'news_story',
    'press_release' => 'press_release',
  );

  /* Display: Related News */
  $handler = $view->new_display('panel_pane', 'Related News', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'focus-page-related-news';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_dgstatement_date' => 'field_dgstatement_date',
    'field_mediaadvisory_date' => 'field_mediaadvisory_date',
    'field_pressrelease_date' => 'field_pressrelease_date',
    'field_newsstory_date' => 'field_newsstory_date',
    'title' => 'title',
    'type' => 'type',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;

  /* Display: Related Videos */
  $handler = $view->new_display('panel_pane', 'Related Videos', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'focus-page-related-videos';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'type' => 'type',
    'field_dgstatement_date' => 'field_dgstatement_date',
    'field_mediaadvisory_date' => 'field_mediaadvisory_date',
    'field_pressrelease_date' => 'field_pressrelease_date',
    'field_newsstory_date' => 'field_newsstory_date',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: IAEA Video Date */
  $handler->display->display_options['fields']['field_iaeavideo_date']['id'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['table'] = 'field_data_field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['field'] = 'field_iaeavideo_date';
  $handler->display->display_options['fields']['field_iaeavideo_date']['label'] = '';
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_iaeavideo_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_iaeavideo_date']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[type]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = ', [type]';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: IAEA Video Date (field_iaeavideo_date) */
  $handler->display->display_options['sorts']['field_iaeavideo_date_value']['id'] = 'field_iaeavideo_date_value';
  $handler->display->display_options['sorts']['field_iaeavideo_date_value']['table'] = 'field_data_field_iaeavideo_date';
  $handler->display->display_options['sorts']['field_iaeavideo_date_value']['field'] = 'field_iaeavideo_date_value';
  $handler->display->display_options['sorts']['field_iaeavideo_date_value']['order'] = 'DESC';
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
    'iaea_video' => 'iaea_video',
  );

  /* Display: Related Photo Essays */
  $handler = $view->new_display('panel_pane', 'Related Photo Essays', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Photo Essays';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'focus-page-related-essays';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'type' => 'type',
    'field_dgstatement_date' => 'field_dgstatement_date',
    'field_mediaadvisory_date' => 'field_mediaadvisory_date',
    'field_pressrelease_date' => 'field_pressrelease_date',
    'field_newsstory_date' => 'field_newsstory_date',
  );
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
    'field_formatter_class' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = '[type]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = ', [type]';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Photo Essay Publishing Date (field_photoessay_date) */
  $handler->display->display_options['sorts']['field_photoessay_date_value']['id'] = 'field_photoessay_date_value';
  $handler->display->display_options['sorts']['field_photoessay_date_value']['table'] = 'field_data_field_photoessay_date';
  $handler->display->display_options['sorts']['field_photoessay_date_value']['field'] = 'field_photoessay_date_value';
  $handler->display->display_options['sorts']['field_photoessay_date_value']['order'] = 'DESC';
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
  $export['focus_page_related_content'] = $view;

  $view = new view();
  $view->name = 'focus_pages_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Focus Pages Listing';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Focus Thumbnail */
  $handler->display->display_options['fields']['field_focus_thumbnail']['id'] = 'field_focus_thumbnail';
  $handler->display->display_options['fields']['field_focus_thumbnail']['table'] = 'field_data_field_focus_thumbnail';
  $handler->display->display_options['fields']['field_focus_thumbnail']['field'] = 'field_focus_thumbnail';
  $handler->display->display_options['fields']['field_focus_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_focus_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_focus_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_focus_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_focus_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_focus_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail_4_3_116x87_px',
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Focus Summary */
  $handler->display->display_options['fields']['field_focus_summary']['id'] = 'field_focus_summary';
  $handler->display->display_options['fields']['field_focus_summary']['table'] = 'field_data_field_focus_summary';
  $handler->display->display_options['fields']['field_focus_summary']['field'] = 'field_focus_summary';
  $handler->display->display_options['fields']['field_focus_summary']['label'] = '';
  $handler->display->display_options['fields']['field_focus_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_focus_summary']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media">
	<span class="pull-left">[field_focus_thumbnail] </span>
	<div class="media-body">
		<h4 class="media-heading">[title]</h4>
    	[field_focus_summary] 
	</div>
</div>
<hr class="spacer25" />';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Go To Coverage &rarr;';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
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
    'focus_page' => 'focus_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Focus Page Listing */
  $handler = $view->new_display('panel_pane', 'Focus Page Listing', 'panel_pane_1');
  $export['focus_pages_listing'] = $view;

  return $export;
}
