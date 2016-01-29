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
