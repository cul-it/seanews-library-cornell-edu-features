<?php
/**
 * @file
 * seapapers_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function seapapers_feature_user_default_roles() {
  $roles = array();

  // Exported role: Contributor.
  $roles['Contributor'] = array(
    'name' => 'Contributor',
    'weight' => 3,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 6,
  );

  // Exported role: Editorial Director.
  $roles['Editorial Director'] = array(
    'name' => 'Editorial Director',
    'weight' => 5,
  );

  // Exported role: IP Address Based Login.
  $roles['IP Address Based Login'] = array(
    'name' => 'IP Address Based Login',
    'weight' => 7,
  );

  // Exported role: Read All Papers All Issues.
  $roles['Read All Papers All Issues'] = array(
    'name' => 'Read All Papers All Issues',
    'weight' => 8,
  );

  // Exported role: publisher.
  $roles['publisher'] = array(
    'name' => 'publisher',
    'weight' => 4,
  );

  // Exported role: reader.
  $roles['reader'] = array(
    'name' => 'reader',
    'weight' => 2,
  );

  return $roles;
}
