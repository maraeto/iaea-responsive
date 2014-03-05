<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Three Columns with Hero'),
  'category' => t('Bootstrap'),
  'icon' => 'iaea_bootstrap_threecol_hero.png',
  'theme' => 'iaea_bootstrap_threecol_hero',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'hero' => t('Hero'),
    'top' => t('Top'),
    'left' => t('Left side'),
    'middle' => t('Middle column'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);
