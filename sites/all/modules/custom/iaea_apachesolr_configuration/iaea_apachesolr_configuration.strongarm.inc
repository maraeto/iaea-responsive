<?php
/**
 * @file
 * iaea_apachesolr_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function iaea_apachesolr_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_default_environment';
  $strongarm->value = 'solr';
  $export['apachesolr_default_environment'] = $strongarm;

  return $export;
}
