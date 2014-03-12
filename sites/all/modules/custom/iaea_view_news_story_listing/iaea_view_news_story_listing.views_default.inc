<?php
/**
 * @file
 * iaea_view_news_story_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_view_news_story_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_story_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Story Listing';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  $handler->display->display_options['fields']['field_newsstory_date']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more &rarr;';
  /* Field: Content: Story Photo */
  $handler->display->display_options['fields']['field_newsstory_photo']['id'] = 'field_newsstory_photo';
  $handler->display->display_options['fields']['field_newsstory_photo']['table'] = 'field_data_field_newsstory_photo';
  $handler->display->display_options['fields']['field_newsstory_photo']['field'] = 'field_newsstory_photo';
  $handler->display->display_options['fields']['field_newsstory_photo']['label'] = '';
  $handler->display->display_options['fields']['field_newsstory_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newsstory_photo']['settings'] = array(
    'image_style' => 'thumbnail_4_3_116x87_px',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Story Body */
  $handler->display->display_options['fields']['field_newsstory_body']['id'] = 'field_newsstory_body';
  $handler->display->display_options['fields']['field_newsstory_body']['table'] = 'field_data_field_newsstory_body';
  $handler->display->display_options['fields']['field_newsstory_body']['field'] = 'field_newsstory_body';
  $handler->display->display_options['fields']['field_newsstory_body']['label'] = '';
  $handler->display->display_options['fields']['field_newsstory_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_newsstory_body']['settings'] = array(
    'trim_length' => '600',
    'field_formatter_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
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
    'news_story' => 'news_story',
  );
  /* Filter criterion: Content: Story Body (field_newsstory_body) */
  $handler->display->display_options['filters']['field_newsstory_body_value']['id'] = 'field_newsstory_body_value';
  $handler->display->display_options['filters']['field_newsstory_body_value']['table'] = 'field_data_field_newsstory_body';
  $handler->display->display_options['filters']['field_newsstory_body_value']['field'] = 'field_newsstory_body_value';
  $handler->display->display_options['filters']['field_newsstory_body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_newsstory_body_value']['expose']['operator_id'] = 'field_newsstory_body_value_op';
  $handler->display->display_options['filters']['field_newsstory_body_value']['expose']['label'] = 'Story Body (field_newsstory_body)';
  $handler->display->display_options['filters']['field_newsstory_body_value']['expose']['operator'] = 'field_newsstory_body_value_op';
  $handler->display->display_options['filters']['field_newsstory_body_value']['expose']['identifier'] = 'field_newsstory_body_value';

  /* Display: DG 4 News List */
  $handler = $view->new_display('panel_pane', 'DG 4 News List', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Lists most recent 4 items with thumb';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read more &rarr;';
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
    'news_story' => 'news_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'site_section';

  /* Display: News 4 items */
  $handler = $view->new_display('panel_pane', 'News 4 items', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Lists most recent 4 items with thumb';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More News →';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/newscenter/news" class="pull-right btn btn-primary">More News &rarr;</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_newsstory_date']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more &rarr;';
  /* Field: Content: Story Photo */
  $handler->display->display_options['fields']['field_newsstory_photo']['id'] = 'field_newsstory_photo';
  $handler->display->display_options['fields']['field_newsstory_photo']['table'] = 'field_data_field_newsstory_photo';
  $handler->display->display_options['fields']['field_newsstory_photo']['field'] = 'field_newsstory_photo';
  $handler->display->display_options['fields']['field_newsstory_photo']['label'] = '';
  $handler->display->display_options['fields']['field_newsstory_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newsstory_photo']['settings'] = array(
    'image_style' => 'thumbnail_4_3_116x87_px',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: Content: Story Body */
  $handler->display->display_options['fields']['field_newsstory_body']['id'] = 'field_newsstory_body';
  $handler->display->display_options['fields']['field_newsstory_body']['table'] = 'field_data_field_newsstory_body';
  $handler->display->display_options['fields']['field_newsstory_body']['field'] = 'field_newsstory_body';
  $handler->display->display_options['fields']['field_newsstory_body']['label'] = '';
  $handler->display->display_options['fields']['field_newsstory_body']['element_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_newsstory_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_newsstory_body']['settings'] = array(
    'trim_length' => '600',
    'field_formatter_class' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
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
    'news_story' => 'news_story',
  );

  /* Display: News List - ALL */
  $handler = $view->new_display('panel_pane', 'News List - ALL', 'all_news_list');
  $handler->display->display_options['display_description'] = 'Lists all news items with pager';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['slave'] = TRUE;
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'full_news_listing',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'AND',
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
    'news_story' => 'news_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Filter Stories';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
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
    'title' => 'title',
    'field_newsstory_body_value' => 'field_newsstory_body_value',
    'status' => 0,
    'type' => 0,
    'keys' => 0,
    'field_newsstory_date_value' => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Story Body (field_newsstory_body) */
  $handler->display->display_options['filters']['field_newsstory_body_value']['id'] = 'field_newsstory_body_value';
  $handler->display->display_options['filters']['field_newsstory_body_value']['table'] = 'field_data_field_newsstory_body';
  $handler->display->display_options['filters']['field_newsstory_body_value']['field'] = 'field_newsstory_body_value';
  $handler->display->display_options['filters']['field_newsstory_body_value']['operator'] = 'allwords';
  $handler->display->display_options['filters']['field_newsstory_body_value']['group'] = 2;
  $handler->display->display_options['filters']['field_newsstory_body_value']['expose']['operator_id'] = 'field_newsstory_body_value_op';
  $handler->display->display_options['filters']['field_newsstory_body_value']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['field_newsstory_body_value']['expose']['operator'] = 'field_newsstory_body_value_op';
  $handler->display->display_options['filters']['field_newsstory_body_value']['expose']['identifier'] = 'field_newsstory_body_value';
  $handler->display->display_options['filters']['field_newsstory_body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Story Date (field_newsstory_date) */
  $handler->display->display_options['filters']['field_newsstory_date_value']['id'] = 'field_newsstory_date_value';
  $handler->display->display_options['filters']['field_newsstory_date_value']['table'] = 'field_data_field_newsstory_date';
  $handler->display->display_options['filters']['field_newsstory_date_value']['field'] = 'field_newsstory_date_value';
  $handler->display->display_options['filters']['field_newsstory_date_value']['group'] = 3;
  $handler->display->display_options['filters']['field_newsstory_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_newsstory_date_value']['expose']['operator_id'] = 'field_newsstory_date_value_op';
  $handler->display->display_options['filters']['field_newsstory_date_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_newsstory_date_value']['expose']['operator'] = 'field_newsstory_date_value_op';
  $handler->display->display_options['filters']['field_newsstory_date_value']['expose']['identifier'] = 'field_newsstory_date_value';
  $handler->display->display_options['filters']['field_newsstory_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_newsstory_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_newsstory_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_newsstory_date_value']['year_range'] = '-20:+0';
  $handler->display->display_options['argument_input'] = array(
    'field_site_section_tid' => array(
      'type' => 'wildcard',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Site Section (field_site_section)',
    ),
  );

  /* Display: Last 1 News */
  $handler = $view->new_display('panel_pane', 'Last 1 News', 'last_one_news');
  $handler->display->display_options['display_description'] = 'Lists last News Item in jumbotron';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-primary btn-lg';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more &rarr;';
  /* Field: Content: Story Photo */
  $handler->display->display_options['fields']['field_newsstory_photo']['id'] = 'field_newsstory_photo';
  $handler->display->display_options['fields']['field_newsstory_photo']['table'] = 'field_data_field_newsstory_photo';
  $handler->display->display_options['fields']['field_newsstory_photo']['field'] = 'field_newsstory_photo';
  $handler->display->display_options['fields']['field_newsstory_photo']['label'] = '';
  $handler->display->display_options['fields']['field_newsstory_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newsstory_photo']['settings'] = array(
    'image_style' => 'news_story_photo__330x220px_',
    'image_link' => '',
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
  $handler->display->display_options['fields']['field_newsstory_date']['field_api_classes'] = TRUE;
  /* Field: Content: Story Body */
  $handler->display->display_options['fields']['field_newsstory_body']['id'] = 'field_newsstory_body';
  $handler->display->display_options['fields']['field_newsstory_body']['table'] = 'field_data_field_newsstory_body';
  $handler->display->display_options['fields']['field_newsstory_body']['field'] = 'field_newsstory_body';
  $handler->display->display_options['fields']['field_newsstory_body']['label'] = '';
  $handler->display->display_options['fields']['field_newsstory_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsstory_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_newsstory_body']['settings'] = array(
    'trim_length' => '600',
    'field_formatter_class' => '',
  );
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
    'news_story' => 'news_story',
  );
  $export['news_story_listing'] = $view;

  return $export;
}
