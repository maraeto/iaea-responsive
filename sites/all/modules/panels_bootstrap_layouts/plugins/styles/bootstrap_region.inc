<?php

/**
 * @file
 * Definition of the 'list' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('Bootstrap'),
  'description' => t('Bootstrap settings.'),

  'render region'          => 'panels_bootstrap_layouts_style_region_render',
  'settings form'          => 'panels_bootstrap_layouts_style_region_settings_form',
  'settings form validate' => 'panels_bootstrap_layouts_style_region_settings_form_validate',
);

/**
 * Render region callback.
 *
 * @ingroup themeable
 */
function theme_panels_bootstrap_layouts_style_region_render($vars) {
  $display = $vars['display'];
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  $column_sizes = array(
    'xs', // Extra small devices
    'sm', // Small devices
    'md', // Medium devices
    'lg', // Large devices
  );

  $layouts = array(
    'bootstrap_twocol_stacked',
    'bootstrap_threecol_stacked',
  );

  if (in_array($display->layout, $layouts) && $panes) {
    $class = array('panel-panel', $vars['region_id']);

    foreach ($column_sizes as $size) {
      $column_size = 'column_size_' . $size;
      $offset_size = 'offset_size_' . $size;
      $push_size = 'push_size_' . $size;
      $pull_size = 'pull_size_' . $size;
      if (isset($settings[$column_size]) && !empty($settings[$column_size])) {
        $class[] = 'col-' . $size . '-' . $settings[$column_size];
      }
      if (isset($settings[$offset_size]) && !empty($settings[$offset_size])) {
        $class[] = 'col-' . $size . '-offset-' . $settings[$offset_size];
      }
      if (isset($settings[$push_size]) && !empty($settings[$push_size])) {
        $class[] = 'col-' . $size . '-push-' . $settings[$push_size];
      }
      if (isset($settings[$pull_size]) && !empty($settings[$pull_size])) {
        $class[] = 'col-' . $size . '-pull-' . $settings[$pull_size];
      }
    }

    $class = implode(' ', $class);
    $html = implode('', $panes);

    return "<div class='$class'>$html</div>";
  }
}

/**
 * Region settings form callback.
 */
function panels_bootstrap_layouts_style_region_settings_form($style_settings, $display, $pid, $type, $form_state) {
  $options = range(0, 12);
  $options[0] = t('-- None --');

  $form['column_size_xs'] = array(
    '#type' => 'select',
    '#title' => t('Сolumn size XS'),
    '#options' => $options,
    '#default_value' => isset($style_settings['column_size_xs'])
      ? $style_settings['column_size_xs']
      : _panels_bootstrap_layouts_get_default_column_size($display->layout, $pid),
    '#description' => t('Column size for Extra small devices (col-xs-*)'),
  );

  $form['column_size_sm'] = array(
    '#type' => 'select',
    '#title' => t('Сolumn size SM'),
    '#options' => $options,
    '#default_value' => isset($style_settings['column_size_sm'])
      ? $style_settings['column_size_sm']
      : _panels_bootstrap_layouts_get_default_column_size($display->layout, $pid),
    '#description' => t('Column size for Small devices (col-sm-*)'),
  );

  $form['column_size_md'] = array(
    '#type' => 'select',
    '#title' => t('Сolumn size MD'),
    '#options' => $options,
    '#default_value' => isset($style_settings['column_size_md'])
      ? $style_settings['column_size_md']
      : _panels_bootstrap_layouts_get_default_column_size($display->layout, $pid),
    '#description' => t('Column size for Medium devices (col-md-*)'),
  );

  $form['column_size_lg'] = array(
    '#type' => 'select',
    '#title' => t('Сolumn size LG'),
    '#options' => $options,
    '#default_value' => isset($style_settings['column_size_lg'])
      ? $style_settings['column_size_lg']
      : _panels_bootstrap_layouts_get_default_column_size($display->layout, $pid),
    '#description' => t('Column size for Large devices (col-lg-*)'),
  );

  $form['offset_size_xs'] = array(
    '#type' => 'select',
    '#title' => t('Offset size XS'),
    '#options' => $options,
    '#default_value' => isset($style_settings['offset_size_xs'])
      ? $style_settings['offset_size_xs'] : 0,
  );

  $form['offset_size_sm'] = array(
    '#type' => 'select',
    '#title' => t('Offset size SM'),
    '#options' => $options,
    '#default_value' => isset($style_settings['offset_size_sm'])
      ? $style_settings['offset_size_sm'] : 0,
  );

  $form['offset_size_md'] = array(
    '#type' => 'select',
    '#title' => t('Offset size MD'),
    '#options' => $options,
    '#default_value' => isset($style_settings['offset_size_md'])
      ? $style_settings['offset_size_md'] : 0,
  );

  $form['offset_size_lg'] = array(
    '#type' => 'select',
    '#title' => t('Offset size LG'),
    '#options' => $options,
    '#default_value' => isset($style_settings['offset_size_lg'])
      ? $style_settings['offset_size_lg'] : 0,
  );

  $form['push_size_xs'] = array(
    '#type' => 'select',
    '#title' => t('Push size XS'),
    '#options' => $options,
    '#default_value' => isset($style_settings['push_size_xs'])
      ? $style_settings['push_size_xs'] : 0,
  );

  $form['push_size_sm'] = array(
    '#type' => 'select',
    '#title' => t('Push size SM'),
    '#options' => $options,
    '#default_value' => isset($style_settings['push_size_sm'])
      ? $style_settings['push_size_sm'] : 0,
  );

  $form['push_size_md'] = array(
    '#type' => 'select',
    '#title' => t('Push size MD'),
    '#options' => $options,
    '#default_value' => isset($style_settings['push_size_md'])
      ? $style_settings['push_size_md'] : 0,
  );

  $form['push_size_lg'] = array(
    '#type' => 'select',
    '#title' => t('Push size LG'),
    '#options' => $options,
    '#default_value' => isset($style_settings['push_size_lg'])
      ? $style_settings['push_size_lg'] : 0,
  );

  $form['pull_size_xs'] = array(
    '#type' => 'select',
    '#title' => t('Pull size XS'),
    '#options' => $options,
    '#default_value' => isset($style_settings['pull_size_xs'])
      ? $style_settings['pull_size_xs'] : 0,
  );

  $form['pull_size_sm'] = array(
    '#type' => 'select',
    '#title' => t('Pull size SM'),
    '#options' => $options,
    '#default_value' => isset($style_settings['pull_size_sm'])
      ? $style_settings['pull_size_sm'] : 0,
  );

  $form['pull_size_md'] = array(
    '#type' => 'select',
    '#title' => t('Pull size MD'),
    '#options' => $options,
    '#default_value' => isset($style_settings['pull_size_md'])
      ? $style_settings['pull_size_md'] : 0,
  );

  $form['pull_size_lg'] = array(
    '#type' => 'select',
    '#title' => t('Pull size LG'),
    '#options' => $options,
    '#default_value' => isset($style_settings['pull_size_lg'])
      ? $style_settings['pull_size_lg'] : 0,
  );

  return $form;
}

function panels_bootstrap_layouts_style_region_settings_form_validate($form, $settings, &$form_state) {
  if ($form_state['type'] == 'region') {
    $style_settings = $form_state['display']->panel_settings['style_settings'];
    $pid = $form_state['pid'];

    switch ($pid) {
      case 'top':
      case 'bottom':
        if ($settings['column_size'] + $settings['offset_size'] > 12) {
          form_set_error('column_size', t('Column size + Offset cannot be more than 12!'));
        }
        break;

      case 'left':
      case 'middle':
      case 'right':
        $regions = array('left', 'middle', 'right');
        // Delete current region.
        unset($regions[array_search($pid, $regions)]);

        // Calculate grid.
        $total_column_size = $settings['column_size'];
        $total_offset_size = $settings['offset_size'];

        foreach ($regions as $region) {
          $total_column_size += (int)$style_settings[$region]['column_size'];
          $total_offset_size += (int)$style_settings[$region]['offset_size'];
        }

        if ($total_column_size + $total_offset_size > 12) {
          form_set_error('column_size', t('Column type + Offset cannot be more than 12!'));
        }
      break;
    }
  }
}

function _panels_bootstrap_layouts_get_default_column_size($layout, $pid) {
  if (in_array($pid, array('top', 'bottom'))) {
    return 12;
  }

  if ($layout == 'bootstrap_twocol_stacked') {
    return 6;
  }

  if ($layout == 'bootstrap_threecol_stacked') {
    return 4;
  }

  return 1;
}
