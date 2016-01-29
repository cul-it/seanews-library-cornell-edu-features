<?php
/**
 * @file
 * seapapers_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function seapapers_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'East Timor',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '271ffd05-7f25-42f0-a70d-139256192e36',
    'vocabulary_machine_name' => 'country_city',
  );
  $terms[] = array(
    'name' => 'Dili',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8c972978-f9d5-40a5-9751-98ab5b8f8390',
    'vocabulary_machine_name' => 'country_city',
    'parent' => array(
      0 => '271ffd05-7f25-42f0-a70d-139256192e36',
    ),
  );
  $terms[] = array(
    'name' => 'Timor Post',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'be138259-0799-48c6-9858-57b77d29843e',
    'vocabulary_machine_name' => 'publication_titles',
  );
  return $terms;
}
