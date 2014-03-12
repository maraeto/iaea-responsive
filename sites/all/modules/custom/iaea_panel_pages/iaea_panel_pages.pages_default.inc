<?php
/**
 * @file
 * iaea_panel_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function iaea_panel_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Basic Page',
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
              'basic_page' => 'basic_page',
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
      'default' => NULL,
      'top' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '12',
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
      'left' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '3',
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
      'middle' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '6',
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
        'column_size_xs' => '0',
        'column_size_sm' => '9',
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
      'bottom' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e99fe1fc-908d-48a7-9b37-2d856136823f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-66708a91-b181-4c28-b7d3-d82d0e79d492';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '66708a91-b181-4c28-b7d3-d82d0e79d492';
    $display->content['new-66708a91-b181-4c28-b7d3-d82d0e79d492'] = $pane;
    $display->panels['left'][0] = 'new-66708a91-b181-4c28-b7d3-d82d0e79d492';
    $pane = new stdClass();
    $pane->pid = 'new-a709c95c-3063-43a3-b539-6309a7e0beca';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basicpage_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Related Resources',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h4',
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-md-3 pull-right',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a709c95c-3063-43a3-b539-6309a7e0beca';
    $display->content['new-a709c95c-3063-43a3-b539-6309a7e0beca'] = $pane;
    $display->panels['right'][0] = 'new-a709c95c-3063-43a3-b539-6309a7e0beca';
    $pane = new stdClass();
    $pane->pid = 'new-471daaa9-27fc-49c1-a174-3e51d593de8a';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_basicpage_section';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
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
    $pane->uuid = '471daaa9-27fc-49c1-a174-3e51d593de8a';
    $display->content['new-471daaa9-27fc-49c1-a174-3e51d593de8a'] = $pane;
    $display->panels['right'][1] = 'new-471daaa9-27fc-49c1-a174-3e51d593de8a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'DG\'s Statement',
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
              'dg_statement' => 'dg_statement',
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
  $display->uuid = '3f845cc6-cf6c-4025-8999-d0d1794867ed';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6df155a4-4421-45ad-9cfe-87434603992e';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dgstatement_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_news_story',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6df155a4-4421-45ad-9cfe-87434603992e';
    $display->content['new-6df155a4-4421-45ad-9cfe-87434603992e'] = $pane;
    $display->panels['left'][0] = 'new-6df155a4-4421-45ad-9cfe-87434603992e';
    $pane = new stdClass();
    $pane->pid = 'new-b0ee155d-b291-42c7-aaed-643ab1fe7ada';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dgstatement_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = 'b0ee155d-b291-42c7-aaed-643ab1fe7ada';
    $display->content['new-b0ee155d-b291-42c7-aaed-643ab1fe7ada'] = $pane;
    $display->panels['left'][1] = 'new-b0ee155d-b291-42c7-aaed-643ab1fe7ada';
    $pane = new stdClass();
    $pane->pid = 'new-f61ca95a-ccb3-464d-a436-45f236888870';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dgstatement_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 1,
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h4',
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-md-4 pull-right',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f61ca95a-ccb3-464d-a436-45f236888870';
    $display->content['new-f61ca95a-ccb3-464d-a436-45f236888870'] = $pane;
    $display->panels['right'][0] = 'new-f61ca95a-ccb3-464d-a436-45f236888870';
    $pane = new stdClass();
    $pane->pid = 'new-131557f2-ecbb-481e-83bd-41a8aa78d8d6';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dgstatement_event';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '131557f2-ecbb-481e-83bd-41a8aa78d8d6';
    $display->content['new-131557f2-ecbb-481e-83bd-41a8aa78d8d6'] = $pane;
    $display->panels['right'][1] = 'new-131557f2-ecbb-481e-83bd-41a8aa78d8d6';
    $pane = new stdClass();
    $pane->pid = 'new-7c2ddc89-c0a8-4d64-970d-f2e5c6609611';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dgstatement_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7c2ddc89-c0a8-4d64-970d-f2e5c6609611';
    $display->content['new-7c2ddc89-c0a8-4d64-970d-f2e5c6609611'] = $pane;
    $display->panels['right'][2] = 'new-7c2ddc89-c0a8-4d64-970d-f2e5c6609611';
    $pane = new stdClass();
    $pane->pid = 'new-efe5f0e6-611f-4c0c-a4f7-37f1834803c7';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dgstatement_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'efe5f0e6-611f-4c0c-a4f7-37f1834803c7';
    $display->content['new-efe5f0e6-611f-4c0c-a4f7-37f1834803c7'] = $pane;
    $display->panels['right'][3] = 'new-efe5f0e6-611f-4c0c-a4f7-37f1834803c7';
    $pane = new stdClass();
    $pane->pid = 'new-17e12637-f823-4a96-90f5-121e22119b4d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dgstatement_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tags',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '17e12637-f823-4a96-90f5-121e22119b4d';
    $display->content['new-17e12637-f823-4a96-90f5-121e22119b4d'] = $pane;
    $display->panels['right'][4] = 'new-17e12637-f823-4a96-90f5-121e22119b4d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Focus Page',
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
              'focus_page' => 'focus_page',
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
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '12',
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
      'left' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '3',
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
      'middle' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '6',
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
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '3',
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
      'bottom' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e02306b5-e8ad-4e91-9f81-c24a9f465354';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1ab46e38-e983-4030-9fd9-25b0d03d86c9';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'focus_page_related_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ab46e38-e983-4030-9fd9-25b0d03d86c9';
    $display->content['new-1ab46e38-e983-4030-9fd9-25b0d03d86c9'] = $pane;
    $display->panels['left'][0] = 'new-1ab46e38-e983-4030-9fd9-25b0d03d86c9';
    $pane = new stdClass();
    $pane->pid = 'new-b239bc8f-ba86-448f-ae56-07a22d1b54c7';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_focus_section';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b239bc8f-ba86-448f-ae56-07a22d1b54c7';
    $display->content['new-b239bc8f-ba86-448f-ae56-07a22d1b54c7'] = $pane;
    $display->panels['middle'][0] = 'new-b239bc8f-ba86-448f-ae56-07a22d1b54c7';
    $pane = new stdClass();
    $pane->pid = 'new-232246f4-daaf-4297-b087-6c0304d916b6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'focus_page_related_content-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '232246f4-daaf-4297-b087-6c0304d916b6';
    $display->content['new-232246f4-daaf-4297-b087-6c0304d916b6'] = $pane;
    $display->panels['middle'][1] = 'new-232246f4-daaf-4297-b087-6c0304d916b6';
    $pane = new stdClass();
    $pane->pid = 'new-3318d83e-4e6c-49e3-abd7-a00f2f0c35ae';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'focus_page_related_content-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3318d83e-4e6c-49e3-abd7-a00f2f0c35ae';
    $display->content['new-3318d83e-4e6c-49e3-abd7-a00f2f0c35ae'] = $pane;
    $display->panels['middle'][2] = 'new-3318d83e-4e6c-49e3-abd7-a00f2f0c35ae';
    $pane = new stdClass();
    $pane->pid = 'new-514e8bfb-2fab-4fa5-b97b-5719f948e0b1';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_focus_resources_set';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '514e8bfb-2fab-4fa5-b97b-5719f948e0b1';
    $display->content['new-514e8bfb-2fab-4fa5-b97b-5719f948e0b1'] = $pane;
    $display->panels['right'][0] = 'new-514e8bfb-2fab-4fa5-b97b-5719f948e0b1';
    $pane = new stdClass();
    $pane->pid = 'new-b4f5e88f-e9df-46af-8525-2b00bb2eda4f';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_focuspage_banner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image_link_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
        'image_style' => '',
        'image_link' => 'content',
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4f5e88f-e9df-46af-8525-2b00bb2eda4f';
    $display->content['new-b4f5e88f-e9df-46af-8525-2b00bb2eda4f'] = $pane;
    $display->panels['top'][0] = 'new-b4f5e88f-e9df-46af-8525-2b00bb2eda4f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Media Advisory',
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
              'media_advisory' => 'media_advisory',
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
        'column_size_md' => '0',
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
      'bottom' => array(),
      'middle' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '7',
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
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3aed7cf7-0ac4-4098-8024-03874e66ba60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ee9d4c7d-b7df-429c-b412-5a17d7bd5edb';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mediaadvisory_date';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ee9d4c7d-b7df-429c-b412-5a17d7bd5edb';
    $display->content['new-ee9d4c7d-b7df-429c-b412-5a17d7bd5edb'] = $pane;
    $display->panels['left'][0] = 'new-ee9d4c7d-b7df-429c-b412-5a17d7bd5edb';
    $pane = new stdClass();
    $pane->pid = 'new-1d973000-b56c-4377-b107-7e6499296301';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mediaadvisory_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 1,
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Resources',
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-md-4 pull-right',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d973000-b56c-4377-b107-7e6499296301';
    $display->content['new-1d973000-b56c-4377-b107-7e6499296301'] = $pane;
    $display->panels['right'][0] = 'new-1d973000-b56c-4377-b107-7e6499296301';
    $pane = new stdClass();
    $pane->pid = 'new-a0866df8-68de-46dc-b9a8-c8e0a46719a1';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mediaadvisory_number';
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
    $pane->uuid = 'a0866df8-68de-46dc-b9a8-c8e0a46719a1';
    $display->content['new-a0866df8-68de-46dc-b9a8-c8e0a46719a1'] = $pane;
    $display->panels['right'][1] = 'new-a0866df8-68de-46dc-b9a8-c8e0a46719a1';
    $pane = new stdClass();
    $pane->pid = 'new-b08edacd-a8b0-4415-87a3-d20acb01547f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mediaadvisory_location';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b08edacd-a8b0-4415-87a3-d20acb01547f';
    $display->content['new-b08edacd-a8b0-4415-87a3-d20acb01547f'] = $pane;
    $display->panels['right'][2] = 'new-b08edacd-a8b0-4415-87a3-d20acb01547f';
    $pane = new stdClass();
    $pane->pid = 'new-503d72dd-35cf-4389-a7fd-406e0218a0b0';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mediaadvisory_event';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '503d72dd-35cf-4389-a7fd-406e0218a0b0';
    $display->content['new-503d72dd-35cf-4389-a7fd-406e0218a0b0'] = $pane;
    $display->panels['right'][3] = 'new-503d72dd-35cf-4389-a7fd-406e0218a0b0';
    $pane = new stdClass();
    $pane->pid = 'new-3173ae20-a264-4601-8d12-23b31a212417';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mediaadvisory_body';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3173ae20-a264-4601-8d12-23b31a212417';
    $display->content['new-3173ae20-a264-4601-8d12-23b31a212417'] = $pane;
    $display->panels['right'][4] = 'new-3173ae20-a264-4601-8d12-23b31a212417';
    $pane = new stdClass();
    $pane->pid = 'new-e0ceb02c-9805-4290-92cc-bc83b81cf23d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mediaadvisory_tags';
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
      'override_title' => 1,
      'override_title_text' => 'Tags',
    );
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e0ceb02c-9805-4290-92cc-bc83b81cf23d';
    $display->content['new-e0ceb02c-9805-4290-92cc-bc83b81cf23d'] = $pane;
    $display->panels['right'][5] = 'new-e0ceb02c-9805-4290-92cc-bc83b81cf23d';
    $pane = new stdClass();
    $pane->pid = 'new-a3e2aefd-b111-4c6d-9b91-f2584901e5f1';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mediaadvisory_subtitle';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3e2aefd-b111-4c6d-9b91-f2584901e5f1';
    $display->content['new-a3e2aefd-b111-4c6d-9b91-f2584901e5f1'] = $pane;
    $display->panels['top'][0] = 'new-a3e2aefd-b111-4c6d-9b91-f2584901e5f1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Press Releases',
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
              'press_release' => 'press_release',
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
        'column_size_md' => '0',
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
      'bottom' => array(),
      'middle' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '7',
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
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b78a4c62-3042-4f33-9e08-4e43937ba228';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d445bdfd-5c31-494d-8d29-77d0a175153e';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pressrelease_date';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd445bdfd-5c31-494d-8d29-77d0a175153e';
    $display->content['new-d445bdfd-5c31-494d-8d29-77d0a175153e'] = $pane;
    $display->panels['left'][0] = 'new-d445bdfd-5c31-494d-8d29-77d0a175153e';
    $pane = new stdClass();
    $pane->pid = 'new-78d09c18-80c3-40d4-8fcc-b9f71afb03cf';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pressrelease_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Related Resources',
    );
    $pane->cache = array();
    $pane->style = array(
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-md-4 col-sm-6 col-xs-6 pull-right',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78d09c18-80c3-40d4-8fcc-b9f71afb03cf';
    $display->content['new-78d09c18-80c3-40d4-8fcc-b9f71afb03cf'] = $pane;
    $display->panels['right'][0] = 'new-78d09c18-80c3-40d4-8fcc-b9f71afb03cf';
    $pane = new stdClass();
    $pane->pid = 'new-0fb85766-977c-4f01-87e8-320442fab9e5';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pressrelease_number';
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
    $pane->uuid = '0fb85766-977c-4f01-87e8-320442fab9e5';
    $display->content['new-0fb85766-977c-4f01-87e8-320442fab9e5'] = $pane;
    $display->panels['right'][1] = 'new-0fb85766-977c-4f01-87e8-320442fab9e5';
    $pane = new stdClass();
    $pane->pid = 'new-e583409a-2fe5-4444-b959-8c762316af27';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pressrelease_location';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e583409a-2fe5-4444-b959-8c762316af27';
    $display->content['new-e583409a-2fe5-4444-b959-8c762316af27'] = $pane;
    $display->panels['right'][2] = 'new-e583409a-2fe5-4444-b959-8c762316af27';
    $pane = new stdClass();
    $pane->pid = 'new-c3b5d0e8-1a45-40dc-9791-76f6d93eeb2e';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pressrelease_event';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c3b5d0e8-1a45-40dc-9791-76f6d93eeb2e';
    $display->content['new-c3b5d0e8-1a45-40dc-9791-76f6d93eeb2e'] = $pane;
    $display->panels['right'][3] = 'new-c3b5d0e8-1a45-40dc-9791-76f6d93eeb2e';
    $pane = new stdClass();
    $pane->pid = 'new-15662d50-156b-4b91-a1db-25ac857dbaef';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pressrelease_body';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '15662d50-156b-4b91-a1db-25ac857dbaef';
    $display->content['new-15662d50-156b-4b91-a1db-25ac857dbaef'] = $pane;
    $display->panels['right'][4] = 'new-15662d50-156b-4b91-a1db-25ac857dbaef';
    $pane = new stdClass();
    $pane->pid = 'new-15ceb3f9-5de4-4e1e-8e2a-319d76bea5cb';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pressrelease_tags';
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
      'override_title' => 1,
      'override_title_text' => 'Tags',
    );
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '15ceb3f9-5de4-4e1e-8e2a-319d76bea5cb';
    $display->content['new-15ceb3f9-5de4-4e1e-8e2a-319d76bea5cb'] = $pane;
    $display->panels['right'][5] = 'new-15ceb3f9-5de4-4e1e-8e2a-319d76bea5cb';
    $pane = new stdClass();
    $pane->pid = 'new-b08b9a64-b51f-4e76-96da-2c5476639997';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pressrelease_subtitle';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b08b9a64-b51f-4e76-96da-2c5476639997';
    $display->content['new-b08b9a64-b51f-4e76-96da-2c5476639997'] = $pane;
    $display->panels['top'][0] = 'new-b08b9a64-b51f-4e76-96da-2c5476639997';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'right' => NULL,
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b437c0db-ea92-4576-9139-0775edf67a78';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-40e92ad9-717b-47be-a117-0af30f037d5c';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'bulletin_issues-bulletin_issues_list';
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
    $pane->uuid = '40e92ad9-717b-47be-a117-0af30f037d5c';
    $display->content['new-40e92ad9-717b-47be-a117-0af30f037d5c'] = $pane;
    $display->panels['left'][0] = 'new-40e92ad9-717b-47be-a117-0af30f037d5c';
    $pane = new stdClass();
    $pane->pid = 'new-fafa538f-4696-4d6d-a8fb-254f43bed498';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_term-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'offset' => '0',
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
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fafa538f-4696-4d6d-a8fb-254f43bed498';
    $display->content['new-fafa538f-4696-4d6d-a8fb-254f43bed498'] = $pane;
    $display->panels['middle'][0] = 'new-fafa538f-4696-4d6d-a8fb-254f43bed498';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Bulletin Issues',
    'no_blocks' => 0,
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
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'bulletin_issue' => 'bulletin_issue',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8c0998f6-c8b3-4641-8726-c07c8670a739';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a3697f3e-208a-4ca1-9e49-1d0fe1827f23';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'bulletin_issues-bulletin_issues_list';
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
    $pane->uuid = 'a3697f3e-208a-4ca1-9e49-1d0fe1827f23';
    $display->content['new-a3697f3e-208a-4ca1-9e49-1d0fe1827f23'] = $pane;
    $display->panels['left'][0] = 'new-a3697f3e-208a-4ca1-9e49-1d0fe1827f23';
    $pane = new stdClass();
    $pane->pid = 'new-9ea5bc9d-6cf2-49c9-8834-55c9298ac3a0';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'bulletin-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ea5bc9d-6cf2-49c9-8834-55c9298ac3a0';
    $display->content['new-9ea5bc9d-6cf2-49c9-8834-55c9298ac3a0'] = $pane;
    $display->panels['middle'][0] = 'new-9ea5bc9d-6cf2-49c9-8834-55c9298ac3a0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function iaea_panel_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_the_iaea';
  $page->task = 'page';
  $page->admin_title = 'About the IAEA';
  $page->admin_description = 'About Us Landing Page';
  $page->path = 'about';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_the_iaea_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'about_the_iaea';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-title',
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
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
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
      'middle' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '12',
        'column_size_lg' => '0',
        'offset_size_xs' => '0',
        'offset_size_sm' => '0',
        'offset_size_md' => '1',
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
      'bottom' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'hero-banner' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'hero-banner' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Atoms for Peace';
  $display->uuid = 'f70ddf24-475b-4528-bb5d-88cf88a9acbb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c141a9d2-f553-4f24-a3b1-a8a8a4e5e76d';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'bean-about---documents--reports';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
          'type' => '',
          'class_enable' => 1,
          'class' => 'col-md-4',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c141a9d2-f553-4f24-a3b1-a8a8a4e5e76d';
    $display->content['new-c141a9d2-f553-4f24-a3b1-a8a8a4e5e76d'] = $pane;
    $display->panels['bottom'][0] = 'new-c141a9d2-f553-4f24-a3b1-a8a8a4e5e76d';
    $pane = new stdClass();
    $pane->pid = 'new-3527e9f3-d085-43cf-87f1-095084a5d126';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'aggregator-feed-2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
          'type' => '',
          'class_enable' => 1,
          'class' => 'col-md-4',
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
    $pane->uuid = '3527e9f3-d085-43cf-87f1-095084a5d126';
    $display->content['new-3527e9f3-d085-43cf-87f1-095084a5d126'] = $pane;
    $display->panels['bottom'][1] = 'new-3527e9f3-d085-43cf-87f1-095084a5d126';
    $pane = new stdClass();
    $pane->pid = 'new-b4c422d8-2b61-4c3d-a994-88cbd64ed1ab';
    $pane->panel = 'hero-banner';
    $pane->type = 'block';
    $pane->subtype = 'bean-about-the-iaea';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'container',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4c422d8-2b61-4c3d-a994-88cbd64ed1ab';
    $display->content['new-b4c422d8-2b61-4c3d-a994-88cbd64ed1ab'] = $pane;
    $display->panels['hero-banner'][0] = 'new-b4c422d8-2b61-4c3d-a994-88cbd64ed1ab';
    $pane = new stdClass();
    $pane->pid = 'new-804c8d9a-a49a-4ee5-9fc1-1dd1ec3cae05';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-meetings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-md-2',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '804c8d9a-a49a-4ee5-9fc1-1dd1ec3cae05';
    $display->content['new-804c8d9a-a49a-4ee5-9fc1-1dd1ec3cae05'] = $pane;
    $display->panels['middle'][0] = 'new-804c8d9a-a49a-4ee5-9fc1-1dd1ec3cae05';
    $pane = new stdClass();
    $pane->pid = 'new-55637f3a-3e1f-43b3-9bd5-05404633c0fc';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-the-secretariat';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-md-2',
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
    $pane->uuid = '55637f3a-3e1f-43b3-9bd5-05404633c0fc';
    $display->content['new-55637f3a-3e1f-43b3-9bd5-05404633c0fc'] = $pane;
    $display->panels['middle'][1] = 'new-55637f3a-3e1f-43b3-9bd5-05404633c0fc';
    $pane = new stdClass();
    $pane->pid = 'new-3a4d6561-3b27-4583-9b67-c1cdeb347ed3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-policy-bodies';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-md-2',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3a4d6561-3b27-4583-9b67-c1cdeb347ed3';
    $display->content['new-3a4d6561-3b27-4583-9b67-c1cdeb347ed3'] = $pane;
    $display->panels['middle'][2] = 'new-3a4d6561-3b27-4583-9b67-c1cdeb347ed3';
    $pane = new stdClass();
    $pane->pid = 'new-0010a2be-7eed-4a78-bcf2-4a1f544ae4ab';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-employment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-md-2',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0010a2be-7eed-4a78-bcf2-4a1f544ae4ab';
    $display->content['new-0010a2be-7eed-4a78-bcf2-4a1f544ae4ab'] = $pane;
    $display->panels['middle'][3] = 'new-0010a2be-7eed-4a78-bcf2-4a1f544ae4ab';
    $pane = new stdClass();
    $pane->pid = 'new-a503bb23-99f6-4e81-9cbb-9f4e004a18d1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-the-director-general';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-md-2',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a503bb23-99f6-4e81-9cbb-9f4e004a18d1';
    $display->content['new-a503bb23-99f6-4e81-9cbb-9f4e004a18d1'] = $pane;
    $display->panels['middle'][4] = 'new-a503bb23-99f6-4e81-9cbb-9f4e004a18d1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_the_iaea'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dg_s_corner';
  $page->task = 'page';
  $page->admin_title = 'DG\'s Corner';
  $page->admin_description = '';
  $page->path = 'about/dg';
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
  $handler->name = 'page_dg_s_corner_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dg_s_corner';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'DG\'s Corner',
    'no_blocks' => 0,
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
        'column_size_md' => '6',
        'column_size_lg' => '6',
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
        'column_size_md' => '3',
        'column_size_lg' => '3',
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
        'column_size_md' => '3',
        'column_size_lg' => '3',
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
      'bottom' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '12',
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
      'top' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '12',
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
      'default' => NULL,
      'hero-banner' => NULL,
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '95e65b1d-735a-4038-857d-f17d9e1ba34b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b8e31038-a863-4931-9b73-3f0d16a2774e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-4';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'b8e31038-a863-4931-9b73-3f0d16a2774e';
    $display->content['new-b8e31038-a863-4931-9b73-3f0d16a2774e'] = $pane;
    $display->panels['left'][0] = 'new-b8e31038-a863-4931-9b73-3f0d16a2774e';
    $pane = new stdClass();
    $pane->pid = 'new-083a1597-f23d-40c9-9168-e6891750eddf';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '083a1597-f23d-40c9-9168-e6891750eddf';
    $display->content['new-083a1597-f23d-40c9-9168-e6891750eddf'] = $pane;
    $display->panels['left'][1] = 'new-083a1597-f23d-40c9-9168-e6891750eddf';
    $pane = new stdClass();
    $pane->pid = 'new-80e4831a-4acc-4b14-ac1e-f4e4e5ff1339';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'dg_s_corner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '80e4831a-4acc-4b14-ac1e-f4e4e5ff1339';
    $display->content['new-80e4831a-4acc-4b14-ac1e-f4e4e5ff1339'] = $pane;
    $display->panels['middle'][0] = 'new-80e4831a-4acc-4b14-ac1e-f4e4e5ff1339';
    $pane = new stdClass();
    $pane->pid = 'new-d5c15c0b-8876-4ef5-93ef-67dd14510e68';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'photo_gallery-last_image_credentials';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'exposed' => array(
        'field_photogallery_type_tid' => 'All',
      ),
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
    $pane->uuid = 'd5c15c0b-8876-4ef5-93ef-67dd14510e68';
    $display->content['new-d5c15c0b-8876-4ef5-93ef-67dd14510e68'] = $pane;
    $display->panels['right'][0] = 'new-d5c15c0b-8876-4ef5-93ef-67dd14510e68';
    $pane = new stdClass();
    $pane->pid = 'new-e758ae0e-1799-4ed6-92f2-88ba36f9eefb';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'bean-iaea-director-general-yukiya-ama';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'e758ae0e-1799-4ed6-92f2-88ba36f9eefb';
    $display->content['new-e758ae0e-1799-4ed6-92f2-88ba36f9eefb'] = $pane;
    $display->panels['top'][0] = 'new-e758ae0e-1799-4ed6-92f2-88ba36f9eefb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dg_s_corner'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dg_statements';
  $page->task = 'page';
  $page->admin_title = 'DG\'s Statements';
  $page->admin_description = '';
  $page->path = 'newscenter/statements';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'DG\'s Statements',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dg_statements_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dg_statements';
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
        'column_size_xs' => '8',
        'column_size_sm' => '8',
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
  $display->title = 'Statements of the IAEA Director General';
  $display->uuid = '41177fc3-0e2a-4ab3-a4b0-a68034f6e7d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e9bcc9e5-5c2a-4ff3-b17a-2be41a0349ea';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'newscenter_dg_s_statements-all_dgs_statements';
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
    $pane->uuid = 'e9bcc9e5-5c2a-4ff3-b17a-2be41a0349ea';
    $display->content['new-e9bcc9e5-5c2a-4ff3-b17a-2be41a0349ea'] = $pane;
    $display->panels['middle'][0] = 'new-e9bcc9e5-5c2a-4ff3-b17a-2be41a0349ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dg_statements'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'experiments';
  $page->task = 'page';
  $page->admin_title = 'Experiments';
  $page->admin_description = '';
  $page->path = 'experiments';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_experiments_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'experiments';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
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
      'hero' => array(),
      'default' => array(),
      'top' => array(),
      'left' => array(),
      'middle' => array(),
      'right' => array(),
      'bottom' => array(),
      'first' => array(
        'column_size_xs' => '4',
        'column_size_sm' => '4',
        'column_size_md' => '4',
        'column_size_lg' => '4',
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
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
      'sixth' => NULL,
      'first2' => NULL,
      'second2' => NULL,
      'third2' => NULL,
      'fourth2' => NULL,
      'fifth2' => NULL,
      'sixth2' => NULL,
    ),
    'style' => 'bootstrap_region',
    'hero' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'first' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '034bce9f-f637-4b29-b26e-6b8ffe4a1cc8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dea18fac-2e5b-4a27-a9f8-222236f320b4';
    $pane->panel = 'hero';
    $pane->type = 'block';
    $pane->subtype = 'bean-atoms-for-peace---front-page-ban';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'dea18fac-2e5b-4a27-a9f8-222236f320b4';
    $display->content['new-dea18fac-2e5b-4a27-a9f8-222236f320b4'] = $pane;
    $display->panels['hero'][0] = 'new-dea18fac-2e5b-4a27-a9f8-222236f320b4';
    $pane = new stdClass();
    $pane->pid = 'new-72f7ddaa-7b9c-4fe2-8309-bf6d0d20ddcb';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'bean-front-page---inside-the-iaea';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '72f7ddaa-7b9c-4fe2-8309-bf6d0d20ddcb';
    $display->content['new-72f7ddaa-7b9c-4fe2-8309-bf6d0d20ddcb'] = $pane;
    $display->panels['left'][0] = 'new-72f7ddaa-7b9c-4fe2-8309-bf6d0d20ddcb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['experiments'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page_new';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_new_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page_new';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Front Page Panel',
    'no_blocks' => 0,
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
      'top' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '12',
        'column_size_lg' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '6',
        'column_size_lg' => '0',
        'offset_size_xs' => '0',
        'offset_size_sm' => '0',
        'offset_size_md' => '0',
        'offset_size_lg' => '0',
        'push_size_xs' => '0',
        'push_size_sm' => '0',
        'push_size_md' => '3',
        'push_size_lg' => '0',
        'pull_size_xs' => '0',
        'pull_size_sm' => '0',
        'pull_size_md' => '0',
        'pull_size_lg' => '0',
      ),
      'middle' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '3',
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
        'pull_size_md' => '6',
        'pull_size_lg' => '0',
      ),
      'right' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '3',
        'column_size_lg' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'first2' => NULL,
      'second2' => NULL,
      'third2' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
      'sixth' => NULL,
      'fourth2' => NULL,
      'fifth2' => NULL,
      'sixth2' => NULL,
      'hero' => array(
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
      'hero-banner' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'semantic_panels',
    'hero' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'abfa3941-b80e-4ac5-bcb4-312399ab646b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-86d6dc75-6bd1-4f1e-8bca-92a0aadcef53';
    $pane->panel = 'hero-banner';
    $pane->type = 'block';
    $pane->subtype = 'bean-atoms-for-peace---front-page-ban';
    $pane->shown = TRUE;
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'hero-banner',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '86d6dc75-6bd1-4f1e-8bca-92a0aadcef53';
    $display->content['new-86d6dc75-6bd1-4f1e-8bca-92a0aadcef53'] = $pane;
    $display->panels['hero-banner'][0] = 'new-86d6dc75-6bd1-4f1e-8bca-92a0aadcef53';
    $pane = new stdClass();
    $pane->pid = 'new-e8aad6a6-b833-40e0-a0b7-7efcf5164d49';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'front_page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'e8aad6a6-b833-40e0-a0b7-7efcf5164d49';
    $display->content['new-e8aad6a6-b833-40e0-a0b7-7efcf5164d49'] = $pane;
    $display->panels['left'][0] = 'new-e8aad6a6-b833-40e0-a0b7-7efcf5164d49';
    $pane = new stdClass();
    $pane->pid = 'new-ff80cdc3-cc9a-40cd-a789-34c6c45927f5';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-front-page---inside-the-iaea';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'navigation-sidebar-frontpage-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff80cdc3-cc9a-40cd-a789-34c6c45927f5';
    $display->content['new-ff80cdc3-cc9a-40cd-a789-34c6c45927f5'] = $pane;
    $display->panels['middle'][0] = 'new-ff80cdc3-cc9a-40cd-a789-34c6c45927f5';
    $pane = new stdClass();
    $pane->pid = 'new-868f4641-13d2-41c8-8f3f-d1cbfcd0a549';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-front-page---resources-for';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
          'class' => 'navigation-sidebar-frontpage-wrapper',
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
    $pane->uuid = '868f4641-13d2-41c8-8f3f-d1cbfcd0a549';
    $display->content['new-868f4641-13d2-41c8-8f3f-d1cbfcd0a549'] = $pane;
    $display->panels['middle'][1] = 'new-868f4641-13d2-41c8-8f3f-d1cbfcd0a549';
    $pane = new stdClass();
    $pane->pid = 'new-febd6efd-47e0-47db-a6ca-010926ac9d86';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-9';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'IAEA Meetings',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'febd6efd-47e0-47db-a6ca-010926ac9d86';
    $display->content['new-febd6efd-47e0-47db-a6ca-010926ac9d86'] = $pane;
    $display->panels['right'][0] = 'new-febd6efd-47e0-47db-a6ca-010926ac9d86';
    $pane = new stdClass();
    $pane->pid = 'new-d9a78c6c-fce6-4256-901a-15410e7c657c';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'meetings-meeting_carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '2',
      'offset' => '0',
      'path' => '',
      'override_title' => 1,
      'override_title_text' => 'IAEA Meetings',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h4',
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd9a78c6c-fce6-4256-901a-15410e7c657c';
    $display->content['new-d9a78c6c-fce6-4256-901a-15410e7c657c'] = $pane;
    $display->panels['right'][1] = 'new-d9a78c6c-fce6-4256-901a-15410e7c657c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page_new'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'iaea_57th_general_conference';
  $page->task = 'page';
  $page->admin_title = 'IAEA 57th General Conference';
  $page->admin_description = '';
  $page->path = 'about/policy/gc/cg57';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_iaea_57th_general_conference_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'iaea_57th_general_conference';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
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
        'column_size_md' => '2',
        'column_size_lg' => '2',
        'offset_size_xs' => '0',
        'offset_size_sm' => '0',
        'offset_size_md' => '0',
        'offset_size_lg' => '0',
        'push_size_xs' => '0',
        'push_size_sm' => '0',
        'push_size_md' => '6',
        'push_size_lg' => '6',
        'pull_size_xs' => '0',
        'pull_size_sm' => '0',
        'pull_size_md' => '0',
        'pull_size_lg' => '0',
      ),
      'left' => array(
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
        'push_size_md' => '2',
        'push_size_lg' => '2',
        'pull_size_xs' => '0',
        'pull_size_sm' => '0',
        'pull_size_md' => '0',
        'pull_size_lg' => '0',
      ),
      'default' => NULL,
      'hero-banner' => NULL,
      'top' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '35470777-077d-422a-abaf-e8b80a9becdd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4ff72448-627d-4ce1-86ad-877779b469a5';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'gc_57_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '4ff72448-627d-4ce1-86ad-877779b469a5';
    $display->content['new-4ff72448-627d-4ce1-86ad-877779b469a5'] = $pane;
    $display->panels['left'][0] = 'new-4ff72448-627d-4ce1-86ad-877779b469a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4ff72448-627d-4ce1-86ad-877779b469a5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['iaea_57th_general_conference'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'media_advisories';
  $page->task = 'page';
  $page->admin_title = 'Media Advisories';
  $page->admin_description = '';
  $page->path = 'newscenter/mediaadvisories';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Media Advisories',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_media_advisories_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'media_advisories';
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
        'column_size_md' => '3',
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
  $display->uuid = '3765cbc5-57bf-4d6d-a1d1-e4563d7d911b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-771e2468-225e-4c7e-9636-e03a6d0ab807';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'media_advisories-all_media_advisories';
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
    $pane->uuid = '771e2468-225e-4c7e-9636-e03a6d0ab807';
    $display->content['new-771e2468-225e-4c7e-9636-e03a6d0ab807'] = $pane;
    $display->panels['middle'][0] = 'new-771e2468-225e-4c7e-9636-e03a6d0ab807';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['media_advisories'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'multimedia';
  $page->task = 'page';
  $page->admin_title = 'Multimedia';
  $page->admin_description = '';
  $page->path = 'newscenter/multimedia';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_multimedia_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'multimedia';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_left',
          1 => 'movies',
          2 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'sidebar_left' => array(
        'type' => 'region',
        'title' => 'Sidebar Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'movies' => array(
        'type' => 'region',
        'title' => 'Movies',
        'width' => '25',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => '25',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'default' => NULL,
      'sidebar_left' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'movies' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'right' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '4',
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
      'top' => NULL,
      'left' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '4',
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
      'middle' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '4',
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
      'bottom' => NULL,
      'hero-banner' => NULL,
    ),
    'center' => array(
      'style' => 'semantic_panels',
    ),
    'sidebar_left' => array(
      'style' => 'semantic_panels',
    ),
    'movies' => array(
      'style' => 'semantic_panels',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4cd821b5-10ea-4d76-953e-b3c4b2fb9dd0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-92b03840-4f87-4255-8550-198a56319a17';
    $pane->panel = 'hero-banner';
    $pane->type = 'views_panes';
    $pane->subtype = 'iaea_videos_grid-last_one_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '92b03840-4f87-4255-8550-198a56319a17';
    $display->content['new-92b03840-4f87-4255-8550-198a56319a17'] = $pane;
    $display->panels['hero-banner'][0] = 'new-92b03840-4f87-4255-8550-198a56319a17';
    $pane = new stdClass();
    $pane->pid = 'new-50808907-2b75-4a25-8051-21efef76214f';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'simple_listings-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '50808907-2b75-4a25-8051-21efef76214f';
    $display->content['new-50808907-2b75-4a25-8051-21efef76214f'] = $pane;
    $display->panels['left'][0] = 'new-50808907-2b75-4a25-8051-21efef76214f';
    $pane = new stdClass();
    $pane->pid = 'new-ad7c3d32-293c-4260-8452-a126dede7360';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'simple_listings-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ad7c3d32-293c-4260-8452-a126dede7360';
    $display->content['new-ad7c3d32-293c-4260-8452-a126dede7360'] = $pane;
    $display->panels['middle'][0] = 'new-ad7c3d32-293c-4260-8452-a126dede7360';
    $pane = new stdClass();
    $pane->pid = 'new-52e8a17e-bbe3-4abc-abdd-efa6618b6b60';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'simple_listings-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52e8a17e-bbe3-4abc-abdd-efa6618b6b60';
    $display->content['new-52e8a17e-bbe3-4abc-abdd-efa6618b6b60'] = $pane;
    $display->panels['right'][0] = 'new-52e8a17e-bbe3-4abc-abdd-efa6618b6b60';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['multimedia'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'newscenter';
  $page->task = 'page';
  $page->admin_title = 'Newscenter';
  $page->admin_description = '';
  $page->path = 'newscenter/';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_newscenter_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'newscenter';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_left',
          1 => 'movies',
          2 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'sidebar_left' => array(
        'type' => 'region',
        'title' => 'Sidebar Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'movies' => array(
        'type' => 'region',
        'title' => 'Movies',
        'width' => '25',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => '25',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'default' => NULL,
      'sidebar_left' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'movies' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'right' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '4',
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
      'left' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '4',
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
      'middle' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '4',
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
      'bottom' => NULL,
      'top' => NULL,
      'hero-banner' => NULL,
    ),
    'center' => array(
      'style' => 'semantic_panels',
    ),
    'sidebar_left' => array(
      'style' => 'semantic_panels',
    ),
    'movies' => array(
      'style' => 'semantic_panels',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b274c079-6eb5-4b59-8a74-575f13ec7c42';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5b6b3f97-238a-40c3-ae50-f623af087bc9';
    $pane->panel = 'hero-banner';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_story_listing-last_one_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5b6b3f97-238a-40c3-ae50-f623af087bc9';
    $display->content['new-5b6b3f97-238a-40c3-ae50-f623af087bc9'] = $pane;
    $display->panels['hero-banner'][0] = 'new-5b6b3f97-238a-40c3-ae50-f623af087bc9';
    $pane = new stdClass();
    $pane->pid = 'new-0d20d7f5-9b9d-430d-b46a-b0ad5a16df0a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'simple_listings-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d20d7f5-9b9d-430d-b46a-b0ad5a16df0a';
    $display->content['new-0d20d7f5-9b9d-430d-b46a-b0ad5a16df0a'] = $pane;
    $display->panels['left'][0] = 'new-0d20d7f5-9b9d-430d-b46a-b0ad5a16df0a';
    $pane = new stdClass();
    $pane->pid = 'new-5dd90420-1053-44b3-9502-b2cd2c991746';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'simple_listings-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5dd90420-1053-44b3-9502-b2cd2c991746';
    $display->content['new-5dd90420-1053-44b3-9502-b2cd2c991746'] = $pane;
    $display->panels['middle'][0] = 'new-5dd90420-1053-44b3-9502-b2cd2c991746';
    $pane = new stdClass();
    $pane->pid = 'new-780cd806-bf25-4bf5-b0a8-4f98f63fa696';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'simple_listings-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '780cd806-bf25-4bf5-b0a8-4f98f63fa696';
    $display->content['new-780cd806-bf25-4bf5-b0a8-4f98f63fa696'] = $pane;
    $display->panels['right'][0] = 'new-780cd806-bf25-4bf5-b0a8-4f98f63fa696';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['newscenter'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'photo_essays';
  $page->task = 'page';
  $page->admin_title = 'Photo Essays';
  $page->admin_description = '';
  $page->path = 'newscenter/multimedia/photoessays';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Photo Essays',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_photo_essays_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'photo_essays';
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
      'default' => NULL,
      'top' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '0',
        'column_size_lg' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
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
        'column_size_md' => '0',
        'column_size_lg' => '0',
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
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0f5a2fc7-813a-4e12-acee-fdb6108bfc69';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9e2e2188-84ef-401d-86bd-0a986756d6cb';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '9e2e2188-84ef-401d-86bd-0a986756d6cb';
    $display->content['new-9e2e2188-84ef-401d-86bd-0a986756d6cb'] = $pane;
    $display->panels['left'][0] = 'new-9e2e2188-84ef-401d-86bd-0a986756d6cb';
    $pane = new stdClass();
    $pane->pid = 'new-9a06b283-aa6d-40e9-8936-6786cfbd313a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'photo_essays_grid-all_photo_essays_grid';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9a06b283-aa6d-40e9-8936-6786cfbd313a';
    $display->content['new-9a06b283-aa6d-40e9-8936-6786cfbd313a'] = $pane;
    $display->panels['middle'][0] = 'new-9a06b283-aa6d-40e9-8936-6786cfbd313a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['photo_essays'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'press_releases';
  $page->task = 'page';
  $page->admin_title = 'Press Releases';
  $page->admin_description = '';
  $page->path = 'newscenter/pressreleases';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Press Releases',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_press_releases_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'press_releases';
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
  $display->uuid = '54eac349-bbaa-45c0-8716-26cd5ced55a8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-72a50ca5-3c50-4dcc-9bd5-fc2d2b8c8c2a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'press_releases-all_press_releases';
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
    $pane->uuid = '72a50ca5-3c50-4dcc-9bd5-fc2d2b8c8c2a';
    $display->content['new-72a50ca5-3c50-4dcc-9bd5-fc2d2b8c8c2a'] = $pane;
    $display->panels['middle'][0] = 'new-72a50ca5-3c50-4dcc-9bd5-fc2d2b8c8c2a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['press_releases'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'topics_in_focus';
  $page->task = 'page';
  $page->admin_title = 'Topics in Focus';
  $page->admin_description = '';
  $page->path = 'newscenter/focus';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Topics in Focus',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_topics_in_focus_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'topics_in_focus';
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
  $display->title = 'Topics in Focus';
  $display->uuid = 'd09b56e4-040d-479f-a011-0bd2f44ccf96';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1c889d24-a53b-4bfa-97a0-f51c3c522c35';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'focus_pages_listing-panel_pane_1';
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
    $pane->uuid = '1c889d24-a53b-4bfa-97a0-f51c3c522c35';
    $display->content['new-1c889d24-a53b-4bfa-97a0-f51c3c522c35'] = $pane;
    $display->panels['middle'][0] = 'new-1c889d24-a53b-4bfa-97a0-f51c3c522c35';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['topics_in_focus'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'videos';
  $page->task = 'page';
  $page->admin_title = 'Videos';
  $page->admin_description = '';
  $page->path = 'newscenter/multimedia/videos';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Videos',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_videos_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'videos';
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
        'column_size_md' => '9',
        'column_size_lg' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'top' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '0',
        'column_size_lg' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '3',
        'column_size_lg' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_size_xs' => '0',
        'column_size_sm' => '0',
        'column_size_md' => '0',
        'column_size_lg' => '0',
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
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '299df370-92a4-4315-8d98-4c3808d1de08';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1cfe4bb1-15e1-40ce-9af4-62b5ab3ee785';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = '1cfe4bb1-15e1-40ce-9af4-62b5ab3ee785';
    $display->content['new-1cfe4bb1-15e1-40ce-9af4-62b5ab3ee785'] = $pane;
    $display->panels['left'][0] = 'new-1cfe4bb1-15e1-40ce-9af4-62b5ab3ee785';
    $pane = new stdClass();
    $pane->pid = 'new-b365a95a-7149-4f3d-b861-a22b98d99ac6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'iaea_videos_grid-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b365a95a-7149-4f3d-b861-a22b98d99ac6';
    $display->content['new-b365a95a-7149-4f3d-b861-a22b98d99ac6'] = $pane;
    $display->panels['middle'][0] = 'new-b365a95a-7149-4f3d-b861-a22b98d99ac6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['videos'] = $page;

  return $pages;

}
