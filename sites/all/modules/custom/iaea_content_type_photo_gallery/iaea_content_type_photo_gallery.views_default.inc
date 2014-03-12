<?php
/**
 * @file
 * iaea_content_type_photo_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iaea_content_type_photo_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_galleries_grid';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Galleries Grid';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photo Gallery Publishing Date */
  $handler->display->display_options['fields']['field_photogallery_date']['id'] = 'field_photogallery_date';
  $handler->display->display_options['fields']['field_photogallery_date']['table'] = 'field_data_field_photogallery_date';
  $handler->display->display_options['fields']['field_photogallery_date']['field'] = 'field_photogallery_date';
  $handler->display->display_options['fields']['field_photogallery_date']['label'] = '';
  $handler->display->display_options['fields']['field_photogallery_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photogallery_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photogallery_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photogallery_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photogallery_date']['settings'] = array(
    'format_type' => 'iaea_date_style',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_photogallery_date']['field_api_classes'] = TRUE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photogallery_photos']['id'] = 'field_photogallery_photos';
  $handler->display->display_options['fields']['field_photogallery_photos']['table'] = 'field_data_field_photogallery_photos';
  $handler->display->display_options['fields']['field_photogallery_photos']['field'] = 'field_photogallery_photos';
  $handler->display->display_options['fields']['field_photogallery_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photogallery_photos']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photogallery_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photogallery_photos']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photogallery_photos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photogallery_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photogallery_photos']['settings'] = array(
    'image_style' => 'photo_essay_grid_thumb',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_photogallery_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photogallery_photos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photogallery_photos']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'photo_gallery' => 'photo_gallery',
  );
  $export['photo_galleries_grid'] = $view;

  $view = new view();
  $view->name = 'photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Credentials';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Read More';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['group']['class'] = '';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photogallery_photos']['id'] = 'field_photogallery_photos';
  $handler->display->display_options['fields']['field_photogallery_photos']['table'] = 'field_data_field_photogallery_photos';
  $handler->display->display_options['fields']['field_photogallery_photos']['field'] = 'field_photogallery_photos';
  $handler->display->display_options['fields']['field_photogallery_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photogallery_photos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photogallery_photos']['alter']['text'] = '[field_photogallery_photos]
[field_photogallery_photos-alt]';
  $handler->display->display_options['fields']['field_photogallery_photos']['element_type'] = '0';
  $handler->display->display_options['fields']['field_photogallery_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photogallery_photos']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_photogallery_photos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_photogallery_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photogallery_photos']['settings'] = array(
    'image_style' => 'banner_3units',
    'image_link' => 'content',
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_photogallery_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photogallery_photos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photogallery_photos']['delta_reversed'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'photo_gallery' => 'photo_gallery',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['min'] = '-1 year';
  $handler->display->display_options['filters']['created']['value']['value'] = '-1 year';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  /* Filter criterion: Content: Photo Gallery Type (field_photogallery_type) */
  $handler->display->display_options['filters']['field_photogallery_type_tid']['id'] = 'field_photogallery_type_tid';
  $handler->display->display_options['filters']['field_photogallery_type_tid']['table'] = 'field_data_field_photogallery_type';
  $handler->display->display_options['filters']['field_photogallery_type_tid']['field'] = 'field_photogallery_type_tid';
  $handler->display->display_options['filters']['field_photogallery_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_photogallery_type_tid']['expose']['operator_id'] = 'field_photogallery_type_tid_op';
  $handler->display->display_options['filters']['field_photogallery_type_tid']['expose']['label'] = 'Photo Gallery Type (field_photogallery_type)';
  $handler->display->display_options['filters']['field_photogallery_type_tid']['expose']['operator'] = 'field_photogallery_type_tid_op';
  $handler->display->display_options['filters']['field_photogallery_type_tid']['expose']['identifier'] = 'field_photogallery_type_tid';
  $handler->display->display_options['filters']['field_photogallery_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_photogallery_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_photogallery_type_tid']['vocabulary'] = 'photo_gallery_type';

  /* Display: Last Image Credentials */
  $handler = $view->new_display('panel_pane', 'Last Image Credentials', 'last_image_credentials');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_photogallery_type_tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Photo Gallery Type (field_photogallery_type)',
    ),
  );
  $export['photo_gallery'] = $view;

  return $export;
}
