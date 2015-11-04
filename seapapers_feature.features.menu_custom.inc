<?php
/**
 * @file
 * seapapers_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function seapapers_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: menu-contributor-tools.
  $menus['menu-contributor-tools'] = array(
    'menu_name' => 'menu-contributor-tools',
    'title' => 'Contributor Tools',
    'description' => 'Allows contributors to see their newspapers and the issues they have uploaded.',
  );
  // Exported menu: menu-editor-tools.
  $menus['menu-editor-tools'] = array(
    'menu_name' => 'menu-editor-tools',
    'title' => 'Editor Tools',
    'description' => 'Allow Editors to see all the newspapers and all the issues that have been uploaded, and to assign contributors to newspapers.',
  );
  // Exported menu: menu-editorial-director-tools.
  $menus['menu-editorial-director-tools'] = array(
    'menu_name' => 'menu-editorial-director-tools',
    'title' => 'Editorial Director Tools',
    'description' => 'Create new publications, add subscribers, work with expected issues.',
  );
  // Exported menu: menu-new-tools.
  $menus['menu-new-tools'] = array(
    'menu_name' => 'menu-new-tools',
    'title' => 'Subscriber Tools',
    'description' => 'Menu for things a subscriber can do.',
  );
  // Exported menu: menu-reader-tools.
  $menus['menu-reader-tools'] = array(
    'menu_name' => 'menu-reader-tools',
    'title' => 'Reader Tools',
    'description' => 'Allow readers to select issues, read issues, and search issues for content.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Allow Editors to see all the newspapers and all the issues that have been uploaded, and to assign contributors to newspapers.');
  t('Allow readers to select issues, read issues, and search issues for content.');
  t('Allows contributors to see their newspapers and the issues they have uploaded.');
  t('Contributor Tools');
  t('Create new publications, add subscribers, work with expected issues.');
  t('Editor Tools');
  t('Editorial Director Tools');
  t('Main menu');
  t('Menu for things a subscriber can do.');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('Reader Tools');
  t('Subscriber Tools');

  return $menus;
}
