<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('IAEA Three Columns Bricks'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_threecol_bricks.png',
  'theme' => 'bootstrap_threecol_bricks',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'hero-banner' => t('Hero Banner'),
    'top' => t('Top'),
    'left' => t('Left side'),
    'middle' => t('Middle column'),
    'right' => t('Right side'),
    'brick' => t('Brick'),
    'left1' => t('Left side 1'),
    'middle1' => t('Middle column 1'),
    'right1' => t('Right side 1'),    
    'bottom' => t('Bottom'),
  ),
);
