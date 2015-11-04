<?php
/**
 * @file
 * seapapers_feature.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function seapapers_feature_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'development_core_of_solr';
  $environment->name = 'Development Core of solr';
  $environment->url = 'http://seapapers.solr.library.cornell.edu/solr/#/dev';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 1,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 1,
  );
  $environment->index_bundles = array();
  $export['development_core_of_solr'] = $environment;

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'Apache Solr server';
  $environment->url = 'http://seapapers.solr.library.cornell.edu/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 1,
    'apachesolr_enabled_facets' => array(
      'apachesolr_search' => array(
        'type' => 'type',
        'im_vid_4' => 'im_vid_4',
        'im_vid_3' => 'im_vid_3',
        'im_vid_2' => 'im_vid_2',
        'im_vid_1' => 'im_vid_1',
      ),
    ),
    'apachesolr_read_only' => '1',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '0:0',
    'apachesolr_search_excluded_types' => array(
      'story' => 'story',
      'issue' => 0,
      'newspaper' => 0,
      'page' => 0,
    ),
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'book' => '0',
      'documentation' => '0',
      'file' => '0',
      'page' => '0.5',
      'publication' => '0',
      'publication_expected_issue' => '0',
      'publication_issue' => '1.0',
      'reminder' => '0',
      'story' => '0.3',
      'webform' => '0',
      'test_multi_image' => '0',
    ),
    'apachesolr_soft_commit' => 1,
    'field_bias' => array(
      'content' => '1.0',
      'label' => '5.0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'ts_comments' => '0.5',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'documentation',
      1 => 'publication',
      2 => 'publication_issue',
    ),
    'file' => array(
      0 => 'default',
      1 => 'image',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
