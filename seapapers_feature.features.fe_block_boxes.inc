<?php
/**
 * @file
 * seapapers_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function seapapers_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'CUL Header';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'culheader';
  $fe_block_boxes->body = '<a href="http://www.cornell.edu"><img src="/sites/clone-seapapers.dev.library.cornell.edu/files/45-white.gif"/></a>';

  $export['culheader'] = $fe_block_boxes;

  return $export;
}
