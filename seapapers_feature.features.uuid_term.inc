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
    'name' => 'Timor Post',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'be138259-0799-48c6-9858-57b77d29843e',
    'vocabulary_machine_name' => 'publication_titles',
  );
  return $terms;
}
