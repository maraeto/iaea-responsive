<?php
/**
 * @file
 * iaea_feeds_vimeo_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function iaea_feeds_vimeo_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'iaea_vimeo_import';
  $feeds_importer->config = array(
    'name' => 'IAEA Vimeo import',
    'description' => '',
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
      'plugin_key' => 'FeedsVimeoParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'field_iaeavideo_body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'published_timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'title',
            'target' => 'field_iaeavideo_vimeo:title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'thumbnail_large',
            'target' => 'field_iaeavideo_poster',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'published_timestamp',
            'target' => 'field_iaeavideo_date:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'url',
            'target' => 'field_iaeavideo_vimeo:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'tags',
            'target' => 'field_iaeavideo_tags',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'iaea_video',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '3600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['iaea_vimeo_import'] = $feeds_importer;

  return $export;
}
