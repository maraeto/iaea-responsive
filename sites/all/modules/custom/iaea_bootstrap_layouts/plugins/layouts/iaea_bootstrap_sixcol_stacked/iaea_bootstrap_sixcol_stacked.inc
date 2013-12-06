<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Six Columns Stacked'),
  'category' => t('Bootstrap'),
  'icon' => 'iaea_bootstrap_sixcol_stacked.png',
  'theme' => 'iaea_bootstrap_sixcol_stacked',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'first' => t('First row - first col'),
    'second' => t('First row - second col'),
    'third' => t('First row - third col'),
    'fourth' => t('First row - fourth col'),
    'fifth' => t('First row - fifth col'),
    'sixth' => t('First row - sixth col'),
    'middle' => t('Middle'),
    'first2' => t('Second row - first col'),
    'second2' => t('Second row - second col'),
    'third2' => t('Second row - third col'),
    'fourth2' => t('Second row - fourth col'),
    'fifth2' => t('Second row - fifth col'),
    'sixth2' => t('Second row - sixth col'),
    'bottom' => t('Bottom'),
  ),
);
