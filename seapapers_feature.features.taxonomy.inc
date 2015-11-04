<?php
/**
 * @file
 * seapapers_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function seapapers_feature_taxonomy_default_vocabularies() {
  return array(
    'publication_titles' => array(
      'name' => 'Publication Titles',
      'machine_name' => 'publication_titles',
      'description' => 'Newspaper title to use as filter and in popups',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
