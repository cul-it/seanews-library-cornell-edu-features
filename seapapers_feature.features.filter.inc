<?php
/**
 * @file
 * seapapers_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function seapapers_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML with PHP.
  $formats['full_html_with_php'] = array(
    'format' => 'full_html_with_php',
    'name' => 'Full HTML with PHP',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'php_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => 0,
    'status' => 1,
    'weight' => 11,
    'filters' => array(
      'php_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
