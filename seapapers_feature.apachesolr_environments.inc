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
  $environment->conf = array();
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'page',
      2 => 'reminder',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
