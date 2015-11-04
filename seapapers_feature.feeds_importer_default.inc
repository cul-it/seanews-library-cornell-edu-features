<?php
/**
 * @file
 * seapapers_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function seapapers_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_issues';
  $feeds_importer->config = array(
    'name' => 'Import Issues',
    'description' => 'Import Issues from csv file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '43',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Document',
            'target' => 'field_document',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Find Newspaper Taxonomy',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Publication',
            'target' => 'field_publication:title:duplicates',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Scratch',
            'target' => 'field_type',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'City terms',
            'target' => 'field_city_issue',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Country terms',
            'target' => 'field_country_issue',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Languages terms',
            'target' => 'field_languages_issue',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Publication Date',
            'target' => 'field_published:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '2',
        'skip_hash_check' => 0,
        'bundle' => 'issue',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_issues'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_publication_issues';
  $feeds_importer->config = array(
    'name' => 'Import Publication Issues',
    'description' => 'Import csv file of issue recored from original site',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '43',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Publication Date',
            'target' => 'field_pub_issue_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Document',
            'target' => 'field_pub_issue_document:uri',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Publication',
            'target' => 'field_pub_issue_pub:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '4',
        'skip_hash_check' => 0,
        'bundle' => 'publication_issue',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_publication_issues'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'newspaper_import';
  $feeds_importer->config = array(
    'name' => 'Newspaper Import',
    'description' => 'Import newspapers from csv file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '43',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'City',
            'target' => 'field_city',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Country',
            'target' => 'field_country',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'Frequency',
            'target' => 'field_frequency',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Language',
            'target' => 'field_language',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'Maintainer',
            'target' => 'field_maintainer:name:duplicates',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Masthead',
            'target' => 'field_masthead',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Scratch',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Title - Native',
            'target' => 'field_title_native',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Title - Romanized by CUL',
            'target' => 'field_title_r_cul',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Title - Romanized by newspaper',
            'target' => 'field_title_r_paper',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Title - Translated',
            'target' => 'field_title_r_trans',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Title - Transliterated',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Website',
            'target' => 'field_website:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '2',
        'skip_hash_check' => 0,
        'bundle' => 'newspaper',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['newspaper_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'publication_import';
  $feeds_importer->config = array(
    'name' => 'Publication Import',
    'description' => 'import csv into publication nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '43',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Nid-GUID',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Title - Native',
            'target' => 'field_pub_title_native',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Title',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'City',
            'target' => 'field_pub_city:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Country',
            'target' => 'field_pub_country:label',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Frequency',
            'target' => 'field_pub_frequency:label',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Language',
            'target' => 'field_pub_language:label',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Maintainer',
            'target' => 'field_pub_uploader:name:duplicates',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Masthead',
            'target' => 'field_pub_masthead:uri',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Notes',
            'target' => 'comment',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Title - Romanized by CUL',
            'target' => 'field_pub_title_r_cul',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Title - Romanized by newspaper',
            'target' => 'field_pub_title_r_pub',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Title - Translated',
            'target' => 'field_pub_title_translated',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Title - Transliterated',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Website',
            'target' => 'field_pub_website:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => '2',
        'skip_hash_check' => 0,
        'bundle' => 'publication',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['publication_import'] = $feeds_importer;

  return $export;
}
