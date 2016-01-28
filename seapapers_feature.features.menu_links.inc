<?php
/**
 * @file
 * seapapers_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function seapapers_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contact:contact.
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Email us with questions about the site.',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Home page',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_publications:publications.
  $menu_links['main-menu_publications:publications'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publications',
    'router_path' => 'publications',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => 'List of publications',
      ),
      'identifier' => 'main-menu_publications:publications',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-contributor-tools_my-uploads:my-issue-uploads.
  $menu_links['menu-contributor-tools_my-uploads:my-issue-uploads'] = array(
    'menu_name' => 'menu-contributor-tools',
    'link_path' => 'my-issue-uploads',
    'router_path' => 'my-issue-uploads',
    'link_title' => 'My Uploads',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributor-tools_my-uploads:my-issue-uploads',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-editor-tools_my-publications:editor-publications.
  $menu_links['menu-editor-tools_my-publications:editor-publications'] = array(
    'menu_name' => 'menu-editor-tools',
    'link_path' => 'editor-publications',
    'router_path' => 'editor-publications',
    'link_title' => 'My Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editor-tools_my-publications:editor-publications',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-editorial-director-tools_all-publications:editorial-director-publications.
  $menu_links['menu-editorial-director-tools_all-publications:editorial-director-publications'] = array(
    'menu_name' => 'menu-editorial-director-tools',
    'link_path' => 'editorial-director-publications',
    'router_path' => 'editorial-director-publications',
    'link_title' => 'All Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editorial-director-tools_all-publications:editorial-director-publications',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-editorial-director-tools_create-new-publication:node/add/publication.
  $menu_links['menu-editorial-director-tools_create-new-publication:node/add/publication'] = array(
    'menu_name' => 'menu-editorial-director-tools',
    'link_path' => 'node/add/publication',
    'router_path' => 'node/add',
    'link_title' => 'Create new publication',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new newspaper record',
      ),
      'identifier' => 'menu-editorial-director-tools_create-new-publication:node/add/publication',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-new-tools_browse-issues-by-publication:subscriber-publications.
  $menu_links['menu-new-tools_browse-issues-by-publication:subscriber-publications'] = array(
    'menu_name' => 'menu-new-tools',
    'link_path' => 'subscriber-publications',
    'router_path' => 'subscriber-publications',
    'link_title' => 'Browse Issues by Publication',
    'options' => array(
      'attributes' => array(
        'title' => 'Find the issues in each publication',
      ),
      'identifier' => 'menu-new-tools_browse-issues-by-publication:subscriber-publications',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-new-tools_search:search/site.
  $menu_links['menu-new-tools_search:search/site'] = array(
    'menu_name' => 'menu-new-tools',
    'link_path' => 'search/site',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => 'Search newspaper content or site content',
      ),
      'identifier' => 'menu-new-tools_search:search/site',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-reader-tools_search:search.
  $menu_links['menu-reader-tools_search:search'] = array(
    'menu_name' => 'menu-reader-tools',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => 'Search this site',
      ),
      'identifier' => 'menu-reader-tools_search:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('All Publications');
  t('Browse Issues by Publication');
  t('Contact');
  t('Create new publication');
  t('Home');
  t('My Publications');
  t('My Uploads');
  t('Publications');
  t('Search');

  return $menu_links;
}
