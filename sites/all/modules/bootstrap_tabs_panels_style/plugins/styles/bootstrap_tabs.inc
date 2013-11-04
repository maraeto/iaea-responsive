<?php

/**
* Implementation of hook_panels_styles().
*/
$plugin =  array(
  'bootstrap_tabs' => array(
    'title' => t('Bootstrap Tabs'),
    'description'   => t('Bootstrap Tabs - display panel panes as tab panes.'),
    'render region' => 'bootstrap_tabs_render_region',
    'settings form' => 'bootstrap_tabs_settings_form',
    'render pane' => 'bootstrap_tabs_render_pane',
    'pane settings form' => 'bootstrap_tabs_settings_form',
    'hook theme'    => array(
      'bootstrap_tabs_theme_pane' => array(
        'template' => 'bootstrap-tabs-pane',
         'path' => drupal_get_path('module', 'bootstrap_tabs_panels_style') . '/plugins/styles',
         'variables' => array(
           'content' => NULL,
           'settings' => NULL,
         ),
       ),
      'bootstrap_tabs_theme_region' => array(
        'template' => 'bootstrap-tabs-region',
         'path' => drupal_get_path('module', 'bootstrap_tabs_panels_style') .'/plugins/styles',
         'variables' => array(
           'content' => NULL,
           'tabs' => NULL,
         ),
       ),
    ),
  ),
);

function theme_bootstrap_tabs_render_pane($vars) {
  static $i = 0;
  $settings = $vars['settings'];
  $content = $vars['content'];
  $settings['tab_id'] = "tab-{$vars['pane']->pid}";
  if ($i++ == 0) {
    $settings['active_class'] = 'active';
  }
  else {
    $settings['active_class'] = '';
  }

  return theme('bootstrap_tabs_theme_pane', array('content' => $content, 'settings' => $settings));
}

function theme_bootstrap_tabs_render_region($vars) {
  $content = '';
  $tabs = array();

  $i = 0;
  foreach ($vars['panes'] as $pane_id => $pane_output) {
    $content .= $pane_output;
    $class = !$i++ ? 'active' : '';
    if (isset($vars['display']->content[$pane_id]->configuration['override_title']) &&
      !empty($vars['display']->content[$pane_id]->configuration['override_title_text'])) {
      $title = $vars['display']->content[$pane_id]->configuration['override_title_text'];
    }
    else if (isset($vars['display']->content[$pane_id]->style['settings']['tab_title'])
      && !empty($vars['display']->content[$pane_id]->style['settings']['tab_title'])) {
      $title = $vars['display']->content[$pane_id]->style['settings']['tab_title'];
    }
    else {
      $title = "Tab $i";
    }
    $tabs[$pane_id] = array(
      'id' => "tab-$pane_id",
      'class' => $class,
      'title' => $title,
    );
  }
  if (empty($content)) {
    return;
  }

  return theme('bootstrap_tabs_theme_region', array('content' => $content, 'tabs' => $tabs));
}

function bootstrap_tabs_settings_form($style_settings) {
  $form['tab_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Tab Title'),
    '#default_value' => (isset($style_settings['tab_title'])) ? $style_settings['tab_title'] : '',
  );

  return $form;
}
