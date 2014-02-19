<?php
/**
 * @file
 * vp_news.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function vp_news_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'news';
  $feeds_importer->config = array(
    'name' => 'News',
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
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'guid/text()',
          'xpathparser:3' => 'title/text()',
          'xpathparser:4' => 'description/text()',
          'xpathparser:5' => 'dc:language/text()',
          'xpathparser:6' => 'pubDate/text()',
          'xpathparser:7' => 'category/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
        ),
        'context' => '/rss/channel/item',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:3',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:4',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:5',
            'target' => 'language',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:6',
            'target' => 'created',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_source',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_news_type',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_news_subject',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_cover_image',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_name',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_division',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_e_mail',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_occupaction',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['news'] = $feeds_importer;

  return $export;
}
