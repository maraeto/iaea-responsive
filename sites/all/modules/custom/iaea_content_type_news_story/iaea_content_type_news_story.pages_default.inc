<?php
/**
 * @file
 * iaea_content_type_news_story.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function iaea_content_type_news_story_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'News Story',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news_story' => 'news_story',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'top' => array(
        'column_size_xs' => '12',
        'column_size_sm' => '12',
        'column_size_md' => '12',
        'column_size_lg' => '12',
        'offset_size_xs' => '0',
        'offset_size_sm' => '0',
        'offset_size_md' => '0',
        'offset_size_lg' => '0',
        'push_size_xs' => '0',
        'push_size_sm' => '0',
        'push_size_md' => '0',
        'push_size_lg' => '0',
        'pull_size_xs' => '0',
        'pull_size_sm' => '0',
        'pull_size_md' => '0',
        'pull_size_lg' => '0',
      ),
      'left' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '2',
        'column_size_lg' => '2',
        'offset_size_xs' => '0',
        'offset_size_sm' => '0',
        'offset_size_md' => '0',
        'offset_size_lg' => '0',
        'push_size_xs' => '0',
        'push_size_sm' => '0',
        'push_size_md' => '0',
        'push_size_lg' => '0',
        'pull_size_xs' => '0',
        'pull_size_sm' => '0',
        'pull_size_md' => '0',
        'pull_size_lg' => '0',
      ),
      'right' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '10',
        'column_size_lg' => '10',
        'offset_size_xs' => '0',
        'offset_size_sm' => '0',
        'offset_size_md' => '0',
        'offset_size_lg' => '0',
        'push_size_xs' => '0',
        'push_size_sm' => '0',
        'push_size_md' => '0',
        'push_size_lg' => '0',
        'pull_size_xs' => '0',
        'pull_size_sm' => '0',
        'pull_size_md' => '0',
        'pull_size_lg' => '0',
      ),
      'bottom' => array(),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'semantic_panels',
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '24194c03-33cf-42c1-b8cb-2a3537e4c942';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a962f76-f49e-4079-ad79-481b701628a6';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_newsstory_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_news_story',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a962f76-f49e-4079-ad79-481b701628a6';
    $display->content['new-3a962f76-f49e-4079-ad79-481b701628a6'] = $pane;
    $display->panels['left'][0] = 'new-3a962f76-f49e-4079-ad79-481b701628a6';
    $pane = new stdClass();
    $pane->pid = 'new-a17acc08-430c-4428-9faf-bc1627be4c68';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_newsstory_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a17acc08-430c-4428-9faf-bc1627be4c68';
    $display->content['new-a17acc08-430c-4428-9faf-bc1627be4c68'] = $pane;
    $display->panels['left'][1] = 'new-a17acc08-430c-4428-9faf-bc1627be4c68';
    $pane = new stdClass();
    $pane->pid = 'new-533b56e2-2a51-4080-97c1-921abd1f6aa2';
    $pane->panel = 'right';
    $pane->type = 'field_group';
    $pane->subtype = 'field_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'build_mode' => 'default',
      'field_group' => 'group_story_aside',
      'bundle' => 'news_story',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '533b56e2-2a51-4080-97c1-921abd1f6aa2';
    $display->content['new-533b56e2-2a51-4080-97c1-921abd1f6aa2'] = $pane;
    $display->panels['right'][0] = 'new-533b56e2-2a51-4080-97c1-921abd1f6aa2';
    $pane = new stdClass();
    $pane->pid = 'new-cc1faa49-3fd4-48d1-a108-d207b8b263da';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_newsstory_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc1faa49-3fd4-48d1-a108-d207b8b263da';
    $display->content['new-cc1faa49-3fd4-48d1-a108-d207b8b263da'] = $pane;
    $display->panels['right'][1] = 'new-cc1faa49-3fd4-48d1-a108-d207b8b263da';
    $pane = new stdClass();
    $pane->pid = 'new-59aad254-af4b-4507-9a19-778577141076';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_newsstory_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'semantic_panels',
      'settings' => array(
        'element_title' => array(
          'type' => 'h3',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '59aad254-af4b-4507-9a19-778577141076';
    $display->content['new-59aad254-af4b-4507-9a19-778577141076'] = $pane;
    $display->panels['right'][2] = 'new-59aad254-af4b-4507-9a19-778577141076';
    $pane = new stdClass();
    $pane->pid = 'new-26886ad5-37f1-4571-8369-813580ca1bf6';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_newsstory_subtitle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26886ad5-37f1-4571-8369-813580ca1bf6';
    $display->content['new-26886ad5-37f1-4571-8369-813580ca1bf6'] = $pane;
    $display->panels['top'][0] = 'new-26886ad5-37f1-4571-8369-813580ca1bf6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3a962f76-f49e-4079-ad79-481b701628a6';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function iaea_content_type_news_story_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'top_stories_and_news';
  $page->task = 'page';
  $page->admin_title = 'Top Stories and News';
  $page->admin_description = '';
  $page->path = 'newscenter/news';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_top_stories_and_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'top_stories_and_news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Top Stories and News Listing',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '8',
        'column_size_lg' => '8',
        'offset_size_xs' => '0',
        'offset_size_sm' => '0',
        'offset_size_md' => '2',
        'offset_size_lg' => '2',
        'push_size_xs' => '0',
        'push_size_sm' => '0',
        'push_size_md' => '0',
        'push_size_lg' => '0',
        'pull_size_xs' => '0',
        'pull_size_sm' => '0',
        'pull_size_md' => '0',
        'pull_size_lg' => '0',
      ),
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '0',
        'column_size_lg' => '0',
        'offset_size_xs' => '0',
        'offset_size_sm' => '0',
        'offset_size_md' => '0',
        'offset_size_lg' => '0',
        'push_size_xs' => '0',
        'push_size_sm' => '0',
        'push_size_md' => '0',
        'push_size_lg' => '0',
        'pull_size_xs' => '0',
        'pull_size_sm' => '0',
        'pull_size_md' => '0',
        'pull_size_lg' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '0',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'hero-banner' => NULL,
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ee387e26-4bca-44dd-9d06-febbe17eb5f7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94fe54e1-05bd-40a9-a49e-41124543a20f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'tagclouds-1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94fe54e1-05bd-40a9-a49e-41124543a20f';
    $display->content['new-94fe54e1-05bd-40a9-a49e-41124543a20f'] = $pane;
    $display->panels['left'][0] = 'new-94fe54e1-05bd-40a9-a49e-41124543a20f';
    $pane = new stdClass();
    $pane->pid = 'new-49d53339-6be5-4f1b-aafe-0733b48376ab';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'well',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '49d53339-6be5-4f1b-aafe-0733b48376ab';
    $display->content['new-49d53339-6be5-4f1b-aafe-0733b48376ab'] = $pane;
    $display->panels['left'][1] = 'new-49d53339-6be5-4f1b-aafe-0733b48376ab';
    $pane = new stdClass();
    $pane->pid = 'new-4bd55c59-5f73-41e9-ab96-87118223d3b2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_story_listing-all_news_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4bd55c59-5f73-41e9-ab96-87118223d3b2';
    $display->content['new-4bd55c59-5f73-41e9-ab96-87118223d3b2'] = $pane;
    $display->panels['middle'][0] = 'new-4bd55c59-5f73-41e9-ab96-87118223d3b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['top_stories_and_news'] = $page;

  return $pages;

}
