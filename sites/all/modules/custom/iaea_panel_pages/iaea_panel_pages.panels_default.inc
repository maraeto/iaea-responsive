<?php
/**
 * @file
 * iaea_panel_pages.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function iaea_panel_pages_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dg_s_corner';
  $mini->category = '';
  $mini->admin_title = 'DG\'s Corner';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
      'sixth' => NULL,
      'middle' => array(
        'tab_title' => '',
      ),
      'first2' => NULL,
      'second2' => NULL,
      'third2' => NULL,
      'fourth2' => NULL,
      'fifth2' => NULL,
      'sixth2' => NULL,
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'bootstrap_tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '71b9370e-8074-49a8-8895-1cbf2237329c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-47d7399b-7c06-4af4-b6db-9c1cf929da55';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dg_s_corner-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'tab_title' => 'All Content',
      ),
      'style' => 'bootstrap_tabs',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '47d7399b-7c06-4af4-b6db-9c1cf929da55';
    $display->content['new-47d7399b-7c06-4af4-b6db-9c1cf929da55'] = $pane;
    $display->panels['middle'][0] = 'new-47d7399b-7c06-4af4-b6db-9c1cf929da55';
    $pane = new stdClass();
    $pane->pid = 'new-6a944642-236e-4dbf-9c41-3eac42c25f30';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dg_s_corner-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'bootstrap_tabs',
      'settings' => array(
        'tab_title' => 'News',
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6a944642-236e-4dbf-9c41-3eac42c25f30';
    $display->content['new-6a944642-236e-4dbf-9c41-3eac42c25f30'] = $pane;
    $display->panels['middle'][1] = 'new-6a944642-236e-4dbf-9c41-3eac42c25f30';
    $pane = new stdClass();
    $pane->pid = 'new-b51b2972-b75a-44f8-b8a8-427c37682a0e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dg_s_corner-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'tab_title' => 'Statements',
      ),
      'style' => 'bootstrap_tabs',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b51b2972-b75a-44f8-b8a8-427c37682a0e';
    $display->content['new-b51b2972-b75a-44f8-b8a8-427c37682a0e'] = $pane;
    $display->panels['middle'][2] = 'new-b51b2972-b75a-44f8-b8a8-427c37682a0e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dg_s_corner'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'front_page_tabs';
  $mini->category = '';
  $mini->admin_title = 'Front Page Tabs';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => array(
        'top_color' => 'blue',
      ),
      'default' => NULL,
    ),
    'middle' => array(
      'style' => 'bootstrap_tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd87140b0-ec6e-4b2a-8986-06917d665b72';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-103de05a-48b2-4be8-976c-2b1452a87be4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_story_listing-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'tab_title' => 'News',
      ),
      'style' => 'bootstrap_tabs',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '103de05a-48b2-4be8-976c-2b1452a87be4';
    $display->content['new-103de05a-48b2-4be8-976c-2b1452a87be4'] = $pane;
    $display->panels['middle'][0] = 'new-103de05a-48b2-4be8-976c-2b1452a87be4';
    $pane = new stdClass();
    $pane->pid = 'new-eeea4f55-adf9-4b03-9815-d50068b9373c';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'focus_pages_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'tab_title' => 'Topics',
      ),
      'style' => 'bootstrap_tabs',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eeea4f55-adf9-4b03-9815-d50068b9373c';
    $display->content['new-eeea4f55-adf9-4b03-9815-d50068b9373c'] = $pane;
    $display->panels['middle'][1] = 'new-eeea4f55-adf9-4b03-9815-d50068b9373c';
    $pane = new stdClass();
    $pane->pid = 'new-98c0b1ff-4fac-4d4c-8cfd-c18bf055ee93';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'photo_essays_grid-front_page_grid';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'tab_title' => 'Photo',
      ),
      'style' => 'bootstrap_tabs',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '98c0b1ff-4fac-4d4c-8cfd-c18bf055ee93';
    $display->content['new-98c0b1ff-4fac-4d4c-8cfd-c18bf055ee93'] = $pane;
    $display->panels['middle'][2] = 'new-98c0b1ff-4fac-4d4c-8cfd-c18bf055ee93';
    $pane = new stdClass();
    $pane->pid = 'new-79c7b9bf-f08c-4c14-8de0-de4af17f29bb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'iaea_videos_grid-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'tab_title' => 'Videos',
      ),
      'style' => 'bootstrap_tabs',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '79c7b9bf-f08c-4c14-8de0-de4af17f29bb';
    $display->content['new-79c7b9bf-f08c-4c14-8de0-de4af17f29bb'] = $pane;
    $display->panels['middle'][3] = 'new-79c7b9bf-f08c-4c14-8de0-de4af17f29bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['front_page_tabs'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'gc_57_tabs';
  $mini->category = '';
  $mini->admin_title = 'GC 57 Tabs';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
      'sixth' => NULL,
      'middle' => array(
        'tab_title' => '',
      ),
      'first2' => NULL,
      'second2' => NULL,
      'third2' => NULL,
      'fourth2' => NULL,
      'fifth2' => NULL,
      'sixth2' => NULL,
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'bootstrap_tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c47ba837-1336-4e20-97c2-ea661b78eeed';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6a147c08-35fb-4ac6-911c-88eb6830ba47';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-gc57-pre-conference-information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'tab_title' => 'Pre Conf',
      ),
      'style' => 'bootstrap_tabs',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a147c08-35fb-4ac6-911c-88eb6830ba47';
    $display->content['new-6a147c08-35fb-4ac6-911c-88eb6830ba47'] = $pane;
    $display->panels['middle'][0] = 'new-6a147c08-35fb-4ac6-911c-88eb6830ba47';
    $pane = new stdClass();
    $pane->pid = 'new-5e7ff3ba-cc95-489f-87e8-438b5fb40c8f';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-gc57-day-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'tab_title' => 'Day 1',
      ),
      'style' => 'bootstrap_tabs',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5e7ff3ba-cc95-489f-87e8-438b5fb40c8f';
    $display->content['new-5e7ff3ba-cc95-489f-87e8-438b5fb40c8f'] = $pane;
    $display->panels['middle'][1] = 'new-5e7ff3ba-cc95-489f-87e8-438b5fb40c8f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['gc_57_tabs'] = $mini;

  return $export;
}
