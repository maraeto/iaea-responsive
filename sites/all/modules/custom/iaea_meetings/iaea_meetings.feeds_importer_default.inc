<?php
/**
 * @file
 * iaea_meetings.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function iaea_meetings_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'iaea_meetings_import';
  $feeds_importer->config = array(
    'name' => 'IAEA Meetings Import',
    'description' => 'Importing meetings from RSS feed with custom extracting of place and date from the RSS description.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Blank source 1',
            'target' => 'field_meeting_place',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Blank source 2',
            'target' => 'field_meeting_date:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Blank source 3',
            'target' => 'field_meeting_date:end',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'url',
            'target' => 'field_meeting_url:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'meeting',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['iaea_meetings_import'] = $feeds_importer;

  return $export;
}
