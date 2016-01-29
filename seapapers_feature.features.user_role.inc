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
    'weight' => 7,
    'machine_name' => 'contributor',
  );

  // Exported role: Editorial Director.
  $roles['Editorial Director'] = array(
    'name' => 'Editorial Director',
    'weight' => 9,
    'machine_name' => 'editorial_director',
  );

  // Exported role: IP Address Based Login.
  $roles['IP Address Based Login'] = array(
    'name' => 'IP Address Based Login',
    'weight' => 5,
    'machine_name' => 'ip_address_based_login',
  );

  // Exported role: Read All Papers All Issues.
  $roles['Read All Papers All Issues'] = array(
    'name' => 'Read All Papers All Issues',
    'weight' => 6,
    'machine_name' => 'read_all_papers_all_issues',
  );

  // Exported role: publisher.
  $roles['publisher'] = array(
    'name' => 'publisher',
    'weight' => 3,
    'machine_name' => 'publisher',
  );

  // Exported role: reader.
  $roles['reader'] = array(
    'name' => 'reader',
    'weight' => 2,
    'machine_name' => 'reader',
  );

  return $roles;
}
