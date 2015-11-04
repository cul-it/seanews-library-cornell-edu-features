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
  // Exported menu link: menu-contributor-tools_documentation:node/1366.
  $menu_links['menu-contributor-tools_documentation:node/1366'] = array(
    'menu_name' => 'menu-contributor-tools',
    'link_path' => 'node/1366',
    'router_path' => 'node/%',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contributor-tools_documentation:node/1366',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
  // Exported menu link: menu-contributor-tools_upload-any-issue:publications-I-upload.
  $menu_links['menu-contributor-tools_upload-any-issue:publications-I-upload'] = array(
    'menu_name' => 'menu-contributor-tools',
    'link_path' => 'publications-I-upload',
    'router_path' => 'publications-I-upload',
    'link_title' => 'Upload Any Issue',
    'options' => array(
      'attributes' => array(
        'title' => 'Upload issues to any publication you have permission to upload to. Provides default publication but not date.',
      ),
      'identifier' => 'menu-contributor-tools_upload-any-issue:publications-I-upload',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-contributor-tools_upload-expected-issues:contributor-expected-issues.
  $menu_links['menu-contributor-tools_upload-expected-issues:contributor-expected-issues'] = array(
    'menu_name' => 'menu-contributor-tools',
    'link_path' => 'contributor-expected-issues',
    'router_path' => 'contributor-expected-issues',
    'link_title' => 'Upload Expected Issues',
    'options' => array(
      'attributes' => array(
        'title' => 'Upload issues we\'re expecting. Provides default publication and date.',
      ),
      'identifier' => 'menu-contributor-tools_upload-expected-issues:contributor-expected-issues',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-editor-tools_my-expected-issues:editor-expected-issues.
  $menu_links['menu-editor-tools_my-expected-issues:editor-expected-issues'] = array(
    'menu_name' => 'menu-editor-tools',
    'link_path' => 'editor-expected-issues',
    'router_path' => 'editor-expected-issues',
    'link_title' => 'My Expected Issues',
    'options' => array(
      'attributes' => array(
        'title' => 'List of issues that have not been uploaded yet.',
      ),
      'identifier' => 'menu-editor-tools_my-expected-issues:editor-expected-issues',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
  // Exported menu link: menu-editorial-director-tools_add-new-expected-issues:publication-expected-issues-create.
  $menu_links['menu-editorial-director-tools_add-new-expected-issues:publication-expected-issues-create'] = array(
    'menu_name' => 'menu-editorial-director-tools',
    'link_path' => 'publication-expected-issues-create',
    'router_path' => 'publication-expected-issues-create',
    'link_title' => 'Add New Expected Issues',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editorial-director-tools_add-new-expected-issues:publication-expected-issues-create',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
    'router_path' => 'node/add/publication',
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
  // Exported menu link: menu-editorial-director-tools_expected-issues:publication-expected-issues.
  $menu_links['menu-editorial-director-tools_expected-issues:publication-expected-issues'] = array(
    'menu_name' => 'menu-editorial-director-tools',
    'link_path' => 'publication-expected-issues',
    'router_path' => 'publication-expected-issues',
    'link_title' => 'Expected Issues',
    'options' => array(
      'attributes' => array(
        'title' => 'Expected Issues for publications',
      ),
      'identifier' => 'menu-editorial-director-tools_expected-issues:publication-expected-issues',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
    'router_path' => 'search/site',
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
  // Exported menu link: menu-new-tools_technical-contact:node/1091.
  $menu_links['menu-new-tools_technical-contact:node/1091'] = array(
    'menu_name' => 'menu-new-tools',
    'link_path' => 'node/1091',
    'router_path' => 'node/%',
    'link_title' => 'Technical Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Technical Issues Contact Form',
      ),
      'identifier' => 'menu-new-tools_technical-contact:node/1091',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
  t('Add New Expected Issues');
  t('All Publications');
  t('Browse Issues by Publication');
  t('Contact');
  t('Create new publication');
  t('Documentation');
  t('Expected Issues');
  t('Home');
  t('My Expected Issues');
  t('My Publications');
  t('My Uploads');
  t('Publications');
  t('Search');
  t('Technical Contact');
  t('Upload Any Issue');
  t('Upload Expected Issues');

  return $menu_links;
}
