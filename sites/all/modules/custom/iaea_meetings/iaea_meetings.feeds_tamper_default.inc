<?php
/**
 * @file
 * iaea_meetings.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function iaea_meetings_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'iaea_meetings_import-blank_source_1-php';
  $feeds_tamper->importer = 'iaea_meetings_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$explode = explode(\'<br />\', $field);
	return trim(str_replace(\'Place: \', \'\', strip_tags($explode[0])));',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Execute php code';
  $export['iaea_meetings_import-blank_source_1-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'iaea_meetings_import-blank_source_1-rewrite';
  $feeds_tamper->importer = 'iaea_meetings_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[description]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['iaea_meetings_import-blank_source_1-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'iaea_meetings_import-blank_source_2-php';
  $feeds_tamper->importer = 'iaea_meetings_import';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$explode = explode(\'<br />\', $field);
	$str = trim(str_replace(\'Date: \', \'\', strip_tags($explode[1])));
	$pattern = \'/(\\d+)(\\D+)(\\d+)(\\s+)(\\w+)(\\s+)(\\d+)/i\';
	$replacement = \'${1} ${5} ${7}\';
	$date = preg_replace($pattern, $replacement, $str);
	return date(\'Y-m-d\', strtotime($date));

	',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Execute php code';
  $export['iaea_meetings_import-blank_source_2-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'iaea_meetings_import-blank_source_2-rewrite';
  $feeds_tamper->importer = 'iaea_meetings_import';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[description]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['iaea_meetings_import-blank_source_2-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'iaea_meetings_import-blank_source_3-php';
  $feeds_tamper->importer = 'iaea_meetings_import';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$explode = explode(\'<br />\', $field);
	$str = trim(str_replace(\'Date: \', \'\', strip_tags($explode[1])));
	$pattern = \'/(\\d+)(\\D+)(\\d+)(\\s+)(\\w+)(\\s+)(\\d+)/i\';
	$replacement = \'${3} ${5} ${7}\';
	$date = preg_replace($pattern, $replacement, $str);
	return date(\'Y-m-d\', strtotime($date));',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Execute php code';
  $export['iaea_meetings_import-blank_source_3-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'iaea_meetings_import-blank_source_3-rewrite';
  $feeds_tamper->importer = 'iaea_meetings_import';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[description]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['iaea_meetings_import-blank_source_3-rewrite'] = $feeds_tamper;

  return $export;
}
