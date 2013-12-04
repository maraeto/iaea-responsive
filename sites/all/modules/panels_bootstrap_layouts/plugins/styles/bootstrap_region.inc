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

  $layouts = array(
    'bootstrap_twocol_stacked',
    'bootstrap_threecol_stacked',
  );

  if (in_array($display->layout, $layouts) && $panes) {
    $class = array('panel-panel', $vars['region_id']);

    if ($settings['column_size']) {
      if (empty($settings['column_type'])) {
        $settings['column_type'] = 'col-lg';
      }

      if (is_array($settings['column_type'])) {
        foreach ($settings['column_type'] as $col_type) {
          $size_suffix = explode('-', $col_type);
          $class[] = $col_type . '-' . $settings["column_size_{$size_suffix[1]}"];
        }
      }
      else {
        $class[] = $settings['column_type'] . '-' . $settings['column_size'];
      }
    }

    if ($settings['offset_type'] && $settings['offset_size']) {
      $class[] = $settings['offset_type'] . '-' . $settings['offset_size'];
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

  $col_type_opts = array(
    'col-xs' => t('Extra small devices'),
    'col-sm' => t('Small devices'),
    'col-md' => t('Medium devices'),
    'col-lg' => t('Large devices'),
  );

  $form['column_type'] = array(
    '#type' => 'select',
    '#title' => t('Сolumn type'),
    '#options' => $col_type_opts,
    '#default_value' => isset($style_settings['column_type'])
      ? $style_settings['column_type'] : 'col-lg',
    '#multiple' => TRUE,
  );

  $form['column_size_xs'] = array(
    '#type' => 'select',
    '#title' => t('Сolumn size XS'),
    '#options' => $options,
    '#default_value' => isset($style_settings['column_size_xs'])
      ? $style_settings['column_size_xs']
      : _panels_bootstrap_layouts_get_default_column_size($display->layout, $pid),
  );

  $form['column_size_sm'] = array(
    '#type' => 'select',
    '#title' => t('Сolumn size SM'),
    '#options' => $options,
    '#default_value' => isset($style_settings['column_size_sm'])
      ? $style_settings['column_size_sm']
      : _panels_bootstrap_layouts_get_default_column_size($display->layout, $pid),
  );

  $form['column_size_md'] = array(
    '#type' => 'select',
    '#title' => t('Сolumn size MD'),
    '#options' => $options,
    '#default_value' => isset($style_settings['column_size_md'])
      ? $style_settings['column_size_md']
      : _panels_bootstrap_layouts_get_default_column_size($display->layout, $pid),
  );

  $form['column_size_lg'] = array(
    '#type' => 'select',
    '#title' => t('Сolumn size LG'),
    '#options' => $options,
    '#default_value' => isset($style_settings['column_size_lg'])
      ? $style_settings['column_size_lg']
      : _panels_bootstrap_layouts_get_default_column_size($display->layout, $pid),
  );

  $form['offset_type'] = array(
    '#type' => 'select',
    '#title' => t('Offset type'),
    '#options' => array(
      'col-offset' => t('Tiny devices'),
      'col-sm-offset' => t('Small & medium devices'),
      'col-lg-offset' => t('Large devices'),
    ),
    '#default_value' => isset($style_settings['offset_type'])
      ? $style_settings['offset_type']
      : 'col-lg-offset',
  );

  $form['offset_size'] = array(
    '#type' => 'select',
    '#title' => t('Offset size'),
    '#options' => $options,
    '#default_value' => isset($style_settings['offset_size'])
      ? $style_settings['offset_size']
      : 0,
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
