<?php
/**
 * @file
 * seapapers_feature.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function seapapers_feature_contact_categories_defaults() {
  return array(
    'website content' => array(
      'category' => 'website content',
      'recipients' => 'ghg4@cornell.edu,jgr25@cornell.edu',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
    'website technical issues' => array(
      'category' => 'website technical issues',
      'recipients' => 'jgr25@cornell.edu,ghg4@cornell.edu',
      'reply' => '',
      'weight' => 0,
      'selected' => 0,
    ),
  );
}
