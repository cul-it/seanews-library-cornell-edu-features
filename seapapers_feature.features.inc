<?php
/**
 * @file
 * seapapers_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function seapapers_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function seapapers_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function seapapers_feature_node_info() {
  $items = array(
    'documentation' => array(
      'name' => t('Documentation'),
      'base' => 'node_content',
      'description' => t('Documentation on a topic. Should be visible only to the roles that need to use it.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => t('Newspaper or publication'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publication_expected_issue' => array(
      'name' => t('Publication Expected Issue'),
      'base' => 'node_content',
      'description' => t('Holds the date when an issue of a publication is expected. Uses date_repeat_entity to generate a node for each date in a series of dates. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publication_issue' => array(
      'name' => t('Publication Issue'),
      'base' => 'node_content',
      'description' => t('An issue of the publication.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reminder' => array(
      'name' => t('Reminder'),
      'base' => 'node_content',
      'description' => t('Entity for handling expected issue reminders'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function seapapers_feature_default_search_api_index() {
  $items = array();
  $items['issue_content'] = entity_import('search_api_index', '{
    "name" : "Issue Content",
    "machine_name" : "issue_content",
    "description" : "Index of content of issues",
    "server" : null,
    "item_type" : "file",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 0
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : false } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "content_taxonomy_autocomplete_moderated_terms" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "attachments_content" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "attachments_content" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : { "attachments_content" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "attachments_content" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "attachments_content" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "0",
    "read_only" : "0"
  }');
  $items['publications'] = entity_import('search_api_index', '{
    "name" : "Publications",
    "machine_name" : "publications",
    "description" : "Publicatons and Issues",
    "server" : null,
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "publication", "publication_issue" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_country_and_city" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_country_paired_with_city" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_pub_issue_date" : { "type" : "date" },
        "field_pub_issue_pub" : { "type" : "integer", "entity_type" : "node" },
        "field_pub_language" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_pub_title_native" : { "type" : "text" },
        "field_pub_title_native_translit" : { "type" : "text" },
        "field_pub_title_r_cul" : { "type" : "text" },
        "field_pub_title_r_cul_path" : { "type" : "text" },
        "field_pub_title_r_pub" : { "type" : "text" },
        "field_pub_title_translated" : { "type" : "text" },
        "field_publication_ent_reference" : { "type" : "integer", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "content_taxonomy_autocomplete_moderated_terms" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_pub_title_r_cul" : true,
              "field_pub_title_native" : true,
              "field_pub_title_r_pub" : true,
              "field_pub_title_r_cul_path" : true,
              "field_pub_title_translated" : true,
              "field_pub_title_native_translit" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_pub_title_r_cul" : true,
              "field_pub_title_native" : true,
              "field_pub_title_r_pub" : true,
              "field_pub_title_r_cul_path" : true,
              "field_pub_title_translated" : true,
              "field_pub_title_native_translit" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "field_pub_title_r_cul" : true,
              "field_pub_title_native" : true,
              "field_pub_title_r_pub" : true,
              "field_pub_title_r_cul_path" : true,
              "field_pub_title_translated" : true,
              "field_pub_title_native_translit" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_pub_title_r_cul" : true,
              "field_pub_title_native" : true,
              "field_pub_title_r_pub" : true,
              "field_pub_title_r_cul_path" : true,
              "field_pub_title_translated" : true,
              "field_pub_title_native_translit" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_pub_title_r_cul" : true,
              "field_pub_title_native" : true,
              "field_pub_title_r_pub" : true,
              "field_pub_title_r_cul_path" : true,
              "field_pub_title_translated" : true,
              "field_pub_title_native_translit" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "0",
    "read_only" : "0"
  }');
  return $items;
}
