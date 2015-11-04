<?php
/**
 * @file
 * seapapers_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function seapapers_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_piblications';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Subscriber Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_pub_masthead' => 'field_pub_masthead',
    'title' => 'title',
    'term_node_tid' => 'term_node_tid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_pub_masthead' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_paired_with_city_target_id']['id'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['relationships']['field_country_paired_with_city_target_id']['table'] = 'field_data_field_country_paired_with_city';
  $handler->display->display_options['relationships']['field_country_paired_with_city_target_id']['field'] = 'field_country_paired_with_city_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_pub_issue_pub_node']['id'] = 'reverse_field_pub_issue_pub_node';
  $handler->display->display_options['relationships']['reverse_field_pub_issue_pub_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_pub_issue_pub_node']['field'] = 'reverse_field_pub_issue_pub_node';
  $handler->display->display_options['relationships']['reverse_field_pub_issue_pub_node']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title - CUL Pathname */
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['id'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['table'] = 'field_data_field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['field'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['exclude'] = TRUE;
  /* Field: Content: Masthead */
  $handler->display->display_options['fields']['field_pub_masthead']['id'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['table'] = 'field_data_field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['field'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_masthead']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'all-publication-issues/[field_pub_title_r_cul_path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Issues available for [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Type';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'country_ciy' => 'country_ciy',
    'vocabulary_2' => 'vocabulary_2',
    'vocabulary_1' => 'vocabulary_1',
    'vocabulary_4' => 0,
    'vocabulary_3' => 0,
    'publication_titles' => 0,
  );
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_coverage']['id'] = 'field_coverage';
  $handler->display->display_options['fields']['field_coverage']['table'] = 'field_data_field_coverage';
  $handler->display->display_options['fields']['field_coverage']['field'] = 'field_coverage';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Issues';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Issues';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'subscriber-issues/[field_pub_title_r_cul_path]';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language (field_pub_language) */
  $handler->display->display_options['filters']['field_pub_language_target_id']['id'] = 'field_pub_language_target_id';
  $handler->display->display_options['filters']['field_pub_language_target_id']['table'] = 'field_data_field_pub_language';
  $handler->display->display_options['filters']['field_pub_language_target_id']['field'] = 'field_pub_language_target_id';
  $handler->display->display_options['filters']['field_pub_language_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_language_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['operator_id'] = 'field_pub_language_target_id_op';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['operator'] = 'field_pub_language_target_id_op';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['identifier'] = 'field_pub_language_target_id';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Frequency of Publication (field_pub_frequency) */
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['id'] = 'field_pub_frequency_target_id';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['table'] = 'field_data_field_pub_frequency';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['field'] = 'field_pub_frequency_target_id';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['operator_id'] = 'field_pub_frequency_target_id_op';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['label'] = 'Frequency';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['description'] = 'Frequency of Publication';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['operator'] = 'field_pub_frequency_target_id_op';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['identifier'] = 'field_pub_frequency_target_id';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Country paired with City (field_country_paired_with_city) */
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['id'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['table'] = 'field_data_field_country_paired_with_city';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['field'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['operator_id'] = 'field_country_paired_with_city_target_id_op';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['operator'] = 'field_country_paired_with_city_target_id_op';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['identifier'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['label'] = 'Country paired with City (field_country_paired_with_city)';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['identifier'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'subscriber-publications';
  $export['all_piblications'] = $view;

  $view = new view();
  $view->name = 'all_publication_issues';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'All Publication Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publication Issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_pub_title_r_cul',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_pub_issue_date' => 'field_pub_issue_date',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['id'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['table'] = 'field_data_field_pub_issue_pub';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['field'] = 'field_pub_issue_pub_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Publication Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title - Romaized by CUL */
  $handler->display->display_options['fields']['field_pub_title_r_cul']['id'] = 'field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['table'] = 'field_data_field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['field'] = 'field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['relationship'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['label'] = '';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_title_r_cul']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pub_title_r_cul']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Publication Issue Document(s) */
  $handler->display->display_options['fields']['field_pub_issue_document']['id'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['table'] = 'field_data_field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['field'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['label'] = 'Document';
  $handler->display->display_options['fields']['field_pub_issue_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_issue_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_issue_document']['type'] = 'file_url_plain';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_pub_issue_date']['id'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['field'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['label'] = '';
  $handler->display->display_options['fields']['field_pub_issue_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pub_issue_date']['alter']['path'] = '[field_pub_issue_document]';
  $handler->display->display_options['fields']['field_pub_issue_date']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_pub_issue_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_issue_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Issue';
  /* Sort criterion: Content: Title - Romaized by CUL (field_pub_title_r_cul) */
  $handler->display->display_options['sorts']['field_pub_title_r_cul_value']['id'] = 'field_pub_title_r_cul_value';
  $handler->display->display_options['sorts']['field_pub_title_r_cul_value']['table'] = 'field_data_field_pub_title_r_cul';
  $handler->display->display_options['sorts']['field_pub_title_r_cul_value']['field'] = 'field_pub_title_r_cul_value';
  $handler->display->display_options['sorts']['field_pub_title_r_cul_value']['relationship'] = 'field_pub_issue_pub_target_id';
  /* Sort criterion: Content: Publication Date (field_pub_issue_date) */
  $handler->display->display_options['sorts']['field_pub_issue_date_value']['id'] = 'field_pub_issue_date_value';
  $handler->display->display_options['sorts']['field_pub_issue_date_value']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['sorts']['field_pub_issue_date_value']['field'] = 'field_pub_issue_date_value';
  $handler->display->display_options['sorts']['field_pub_issue_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Title - Term (field_title_term) */
  $handler->display->display_options['arguments']['field_title_term_tid']['id'] = 'field_title_term_tid';
  $handler->display->display_options['arguments']['field_title_term_tid']['table'] = 'field_data_field_title_term';
  $handler->display->display_options['arguments']['field_title_term_tid']['field'] = 'field_title_term_tid';
  $handler->display->display_options['arguments']['field_title_term_tid']['relationship'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['arguments']['field_title_term_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_title_term_tid']['summary']['number_of_records'] = '1';
  $handler->display->display_options['arguments']['field_title_term_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_title_term_tid']['summary_options']['base_path'] = 'all-publication-issues';
  $handler->display->display_options['arguments']['field_title_term_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_issue' => 'publication_issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publication Issue Document(s) (field_pub_issue_document:fid) */
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['id'] = 'field_pub_issue_document_fid';
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['table'] = 'field_data_field_pub_issue_document';
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['field'] = 'field_pub_issue_document_fid';
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['group'] = 1;
  /* Filter criterion: Content: Title - Term (field_title_term) */
  $handler->display->display_options['filters']['field_title_term_tid']['id'] = 'field_title_term_tid';
  $handler->display->display_options['filters']['field_title_term_tid']['table'] = 'field_data_field_title_term';
  $handler->display->display_options['filters']['field_title_term_tid']['field'] = 'field_title_term_tid';
  $handler->display->display_options['filters']['field_title_term_tid']['relationship'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['filters']['field_title_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['operator_id'] = 'field_title_term_tid_op';
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['operator'] = 'field_title_term_tid_op';
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['identifier'] = 'field_title_term_tid';
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_title_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_title_term_tid']['vocabulary'] = 'publication_titles';
  /* Filter criterion: Content: Publication Date (field_pub_issue_date) */
  $handler->display->display_options['filters']['field_pub_issue_date_value']['id'] = 'field_pub_issue_date_value';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['field'] = 'field_pub_issue_date_value';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['operator_id'] = 'field_pub_issue_date_value_op';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['operator'] = 'field_pub_issue_date_value_op';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['identifier'] = 'field_pub_issue_date_value';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry - No issues available under your subscription.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['path'] = 'all-publication-issues';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_issue_publication_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Publication */
  $handler->display->display_options['fields']['field_pub_issue_pub']['id'] = 'field_pub_issue_pub';
  $handler->display->display_options['fields']['field_pub_issue_pub']['table'] = 'field_data_field_pub_issue_pub';
  $handler->display->display_options['fields']['field_pub_issue_pub']['field'] = 'field_pub_issue_pub';
  $handler->display->display_options['fields']['field_pub_issue_pub']['label'] = '';
  $handler->display->display_options['fields']['field_pub_issue_pub']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_issue_pub']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Issue Publication Pathname (field_pub_issue_pub_path) */
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['id'] = 'field_pub_issue_pub_path_value';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['table'] = 'field_data_field_pub_issue_pub_path';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['field'] = 'field_pub_issue_pub_path_value';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['summary_options']['base_path'] = 'all-publication-issues';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['limit'] = '0';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['all_publication_issues'] = $view;

  $view = new view();
  $view->name = 'batch_processing';
  $view->description = 'Bulk Operations';
  $view->tag = 'jgr';
  $view->base_table = 'node';
  $view->human_name = 'bulk_operations';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => 5,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'title' => 'title',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Node: Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'vbo';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Bulk Operations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['batch_processing'] = $view;

  $view = new view();
  $view->name = 'city_in_country';
  $view->description = 'Supports popup list of cities in currently selected country';
  $view->tag = 'v2';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'City in Country';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'City in Country';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Representative node */
  $handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'country_ciy' => 'country_ciy',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['city_in_country'] = $view;

  $view = new view();
  $view->name = 'countries';
  $view->description = 'Supports secondary City in Country popup';
  $view->tag = 'v2';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Countries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'country_ciy' => 'country_ciy',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'countries';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['countries'] = $view;

  $view = new view();
  $view->name = 'cular_issue_export';
  $view->description = '';
  $view->tag = 'CULAR';
  $view->base_table = 'node';
  $view->human_name = 'CULAR Issue Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CULAR Issue Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['id'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['table'] = 'field_data_field_pub_issue_pub';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['field'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['label'] = 'Issue Publication';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'node';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'Publication UUID';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'Issue UUID';
  /* Field: Content: Title - Romaized by CUL */
  $handler->display->display_options['fields']['field_pub_title_r_cul']['id'] = 'field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['table'] = 'field_data_field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['field'] = 'field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['relationship'] = 'field_pub_issue_pub_target_id';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_pub_issue_date']['id'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['field'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Publication Issue Document(s) */
  $handler->display->display_options['fields']['field_pub_issue_document']['id'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['table'] = 'field_data_field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['field'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['label'] = 'Publication Issue Document';
  $handler->display->display_options['fields']['field_pub_issue_document']['alter']['text'] = '[field_pub_issue_document-fid]';
  $handler->display->display_options['fields']['field_pub_issue_document']['alter']['path'] = '[field_pub_issue_document]';
  $handler->display->display_options['fields']['field_pub_issue_document']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pub_issue_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_issue_document']['type'] = 'file_url_plain';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_issue' => 'publication_issue',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'cular-issue-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['style_options']['encoding'] = 'UTF-8';
  $handler->display->display_options['path'] = 'cular-issue-export.csv';
  $export['cular_issue_export'] = $view;

  $view = new view();
  $view->name = 'cular_publication_export';
  $view->description = '';
  $view->tag = 'CULAR';
  $view->base_table = 'node';
  $view->human_name = 'CULAR Publication Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CULAR Publication Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'uuid' => 'uuid',
    'field_pub_title_r_cul_path' => 'field_pub_title_r_cul_path',
    'field_pub_title_native' => 'field_pub_title_native',
    'field_pub_title_native_translit' => 'field_pub_title_native_translit',
    'field_pub_title_r_cul' => 'field_pub_title_r_cul',
    'field_pub_title_r_pub' => 'field_pub_title_r_pub',
    'field_pub_title_translated' => 'field_pub_title_translated',
    'field_country_and_city' => 'field_country_and_city',
    'field_country_paired_with_city' => 'field_country_paired_with_city',
    'field_coverage' => 'field_coverage',
    'field_pub_editor' => 'field_pub_editor',
    'field_pub_frequency' => 'field_pub_frequency',
    'field_pub_language' => 'field_pub_language',
    'field_pub_uploader' => 'field_pub_uploader',
    'field_pub_website' => 'field_pub_website',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uuid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_title_r_cul_path' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_title_native' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_title_native_translit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_title_r_cul' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_title_r_pub' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_title_translated' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_and_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_paired_with_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_coverage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_editor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_frequency' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_uploader' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Masthead (field_pub_masthead:fid) */
  $handler->display->display_options['relationships']['field_pub_masthead_fid']['id'] = 'field_pub_masthead_fid';
  $handler->display->display_options['relationships']['field_pub_masthead_fid']['table'] = 'field_data_field_pub_masthead';
  $handler->display->display_options['relationships']['field_pub_masthead_fid']['field'] = 'field_pub_masthead_fid';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'Publication UUID';
  /* Field: Content: Title - CUL Pathname */
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['id'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['table'] = 'field_data_field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['field'] = 'field_pub_title_r_cul_path';
  /* Field: Content: Title - Native */
  $handler->display->display_options['fields']['field_pub_title_native']['id'] = 'field_pub_title_native';
  $handler->display->display_options['fields']['field_pub_title_native']['table'] = 'field_data_field_pub_title_native';
  $handler->display->display_options['fields']['field_pub_title_native']['field'] = 'field_pub_title_native';
  /* Field: Content: Title - Native Transliterated */
  $handler->display->display_options['fields']['field_pub_title_native_translit']['id'] = 'field_pub_title_native_translit';
  $handler->display->display_options['fields']['field_pub_title_native_translit']['table'] = 'field_data_field_pub_title_native_translit';
  $handler->display->display_options['fields']['field_pub_title_native_translit']['field'] = 'field_pub_title_native_translit';
  /* Field: Content: Title - Romaized by CUL */
  $handler->display->display_options['fields']['field_pub_title_r_cul']['id'] = 'field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['table'] = 'field_data_field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['field'] = 'field_pub_title_r_cul';
  /* Field: Content: Title - Romanized by Publication */
  $handler->display->display_options['fields']['field_pub_title_r_pub']['id'] = 'field_pub_title_r_pub';
  $handler->display->display_options['fields']['field_pub_title_r_pub']['table'] = 'field_data_field_pub_title_r_pub';
  $handler->display->display_options['fields']['field_pub_title_r_pub']['field'] = 'field_pub_title_r_pub';
  /* Field: Content: Title - Translated */
  $handler->display->display_options['fields']['field_pub_title_translated']['id'] = 'field_pub_title_translated';
  $handler->display->display_options['fields']['field_pub_title_translated']['table'] = 'field_data_field_pub_title_translated';
  $handler->display->display_options['fields']['field_pub_title_translated']['field'] = 'field_pub_title_translated';
  /* Field: Content: City in Country */
  $handler->display->display_options['fields']['field_country_and_city']['id'] = 'field_country_and_city';
  $handler->display->display_options['fields']['field_country_and_city']['table'] = 'field_data_field_country_and_city';
  $handler->display->display_options['fields']['field_country_and_city']['field'] = 'field_country_and_city';
  $handler->display->display_options['fields']['field_country_and_city']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Country paired with City */
  $handler->display->display_options['fields']['field_country_paired_with_city']['id'] = 'field_country_paired_with_city';
  $handler->display->display_options['fields']['field_country_paired_with_city']['table'] = 'field_data_field_country_paired_with_city';
  $handler->display->display_options['fields']['field_country_paired_with_city']['field'] = 'field_country_paired_with_city';
  $handler->display->display_options['fields']['field_country_paired_with_city']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_coverage']['id'] = 'field_coverage';
  $handler->display->display_options['fields']['field_coverage']['table'] = 'field_data_field_coverage';
  $handler->display->display_options['fields']['field_coverage']['field'] = 'field_coverage';
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_pub_editor']['id'] = 'field_pub_editor';
  $handler->display->display_options['fields']['field_pub_editor']['table'] = 'field_data_field_pub_editor';
  $handler->display->display_options['fields']['field_pub_editor']['field'] = 'field_pub_editor';
  $handler->display->display_options['fields']['field_pub_editor']['type'] = 'user_reference_plain';
  /* Field: Content: Frequency of Publication */
  $handler->display->display_options['fields']['field_pub_frequency']['id'] = 'field_pub_frequency';
  $handler->display->display_options['fields']['field_pub_frequency']['table'] = 'field_data_field_pub_frequency';
  $handler->display->display_options['fields']['field_pub_frequency']['field'] = 'field_pub_frequency';
  $handler->display->display_options['fields']['field_pub_frequency']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Language */
  $handler->display->display_options['fields']['field_pub_language']['id'] = 'field_pub_language';
  $handler->display->display_options['fields']['field_pub_language']['table'] = 'field_data_field_pub_language';
  $handler->display->display_options['fields']['field_pub_language']['field'] = 'field_pub_language';
  $handler->display->display_options['fields']['field_pub_language']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Uploader */
  $handler->display->display_options['fields']['field_pub_uploader']['id'] = 'field_pub_uploader';
  $handler->display->display_options['fields']['field_pub_uploader']['table'] = 'field_data_field_pub_uploader';
  $handler->display->display_options['fields']['field_pub_uploader']['field'] = 'field_pub_uploader';
  $handler->display->display_options['fields']['field_pub_uploader']['type'] = 'user_reference_plain';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_pub_website']['id'] = 'field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['table'] = 'field_data_field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['field'] = 'field_pub_website';
  $handler->display->display_options['fields']['field_pub_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pub_website']['type'] = 'link_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_pub_masthead_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'Masthead Path';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'cular-publication-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['style_options']['encoding'] = 'UTF-8';
  $handler->display->display_options['path'] = 'cular-publication-export.csv';
  $export['cular_publication_export'] = $view;

  $view = new view();
  $view->name = 'document_paths';
  $view->description = 'See filesystem paths of uploads';
  $view->tag = 'v2, jgr';
  $view->base_table = 'node';
  $view->human_name = 'document_paths';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_document_fid' => 'field_document_fid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_document_fid' => array(
      'separator' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Publication Issue Document(s) */
  $handler->display->display_options['fields']['field_pub_issue_document']['id'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['table'] = 'field_data_field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['field'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['label'] = 'Document';
  $handler->display->display_options['fields']['field_pub_issue_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_issue_document']['type'] = 'file_url_plain';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_issue' => 'publication_issue',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'issue_paths';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Issue Paths';
  $handler->display->display_options['menu']['description'] = 'Find issues in the file system';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['document_paths'] = $view;

  $view = new view();
  $view->name = 'documentation';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Documentation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documentation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    8 => '8',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'documentation' => 'documentation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'documentation';
  $export['documentation'] = $view;

  $view = new view();
  $view->name = 'editor_expected_issues';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Editor Expected Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Expected Issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publication_ent_reference_target_id']['id'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['relationships']['field_publication_ent_reference_target_id']['table'] = 'field_data_field_publication_ent_reference';
  $handler->display->display_options['relationships']['field_publication_ent_reference_target_id']['field'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['relationships']['field_publication_ent_reference_target_id']['label'] = 'Publication';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publication Expected Issue Date */
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['id'] = 'field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['table'] = 'field_data_field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['field'] = 'field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['label'] = '';
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Editor (field_pub_editor) */
  $handler->display->display_options['arguments']['field_pub_editor_uid']['id'] = 'field_pub_editor_uid';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['table'] = 'field_data_field_pub_editor';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['field'] = 'field_pub_editor_uid';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_expected_issue' => 'publication_expected_issue',
  );
  /* Filter criterion: Content: Expected Issue Lookup (field_expected_issue_lookup) */
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['id'] = 'field_expected_issue_lookup_value';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['table'] = 'field_data_field_expected_issue_lookup';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['field'] = 'field_expected_issue_lookup_value';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['value']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'editor-expected-issues';
  $export['editor_expected_issues'] = $view;

  $view = new view();
  $view->name = 'editors_expecting_issues';
  $view->description = 'List User ID of each Editor who has Expected Issues pending';
  $view->tag = 'email';
  $view->base_table = 'users';
  $view->human_name = 'List the Editors Expecting Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Editors with Expected Issues pending';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'uid' => 'uid',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User: Editor (field_pub_editor) - reverse */
  $handler->display->display_options['relationships']['reverse_field_pub_editor_node']['id'] = 'reverse_field_pub_editor_node';
  $handler->display->display_options['relationships']['reverse_field_pub_editor_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_pub_editor_node']['field'] = 'reverse_field_pub_editor_node';
  $handler->display->display_options['relationships']['reverse_field_pub_editor_node']['label'] = 'Is Editor of Publication';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_publication_ent_reference_node']['id'] = 'reverse_field_publication_ent_reference_node';
  $handler->display->display_options['relationships']['reverse_field_publication_ent_reference_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_publication_ent_reference_node']['field'] = 'reverse_field_publication_ent_reference_node';
  $handler->display->display_options['relationships']['reverse_field_publication_ent_reference_node']['relationship'] = 'reverse_field_pub_editor_node';
  $handler->display->display_options['relationships']['reverse_field_publication_ent_reference_node']['label'] = 'Expected Isssue';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    9 => '9',
  );
  /* Filter criterion: Content: Expected Issue Lookup (field_expected_issue_lookup) */
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['id'] = 'field_expected_issue_lookup_value';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['table'] = 'field_data_field_expected_issue_lookup';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['field'] = 'field_expected_issue_lookup_value';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['relationship'] = 'reverse_field_publication_ent_reference_node';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['value']['value'] = '0';
  $export['editors_expecting_issues'] = $view;

  $view = new view();
  $view->name = 'export_newspapers';
  $view->description = 'Export for migrating newspapers to new content type';
  $view->tag = 'v1, jgr';
  $view->base_table = 'node';
  $view->human_name = 'Export Newspapers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export Newspapers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Nid-GUID';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'newspaper[nid]';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_title_native']['id'] = 'field_title_native';
  $handler->display->display_options['fields']['field_title_native']['table'] = 'field_data_field_title_native';
  $handler->display->display_options['fields']['field_title_native']['field'] = 'field_title_native';
  $handler->display->display_options['fields']['field_title_native']['label'] = 'Title - Native';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = 'City';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['label'] = 'Country';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_frequency']['id'] = 'field_frequency';
  $handler->display->display_options['fields']['field_frequency']['table'] = 'field_data_field_frequency';
  $handler->display->display_options['fields']['field_frequency']['field'] = 'field_frequency';
  $handler->display->display_options['fields']['field_frequency']['label'] = 'Frequency';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_language']['id'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
  $handler->display->display_options['fields']['field_language']['field'] = 'field_language';
  $handler->display->display_options['fields']['field_language']['label'] = 'Language';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_maintainer']['id'] = 'field_maintainer';
  $handler->display->display_options['fields']['field_maintainer']['table'] = 'field_data_field_maintainer';
  $handler->display->display_options['fields']['field_maintainer']['field'] = 'field_maintainer';
  $handler->display->display_options['fields']['field_maintainer']['label'] = 'Maintainer';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_masthead']['id'] = 'field_masthead';
  $handler->display->display_options['fields']['field_masthead']['table'] = 'field_data_field_masthead';
  $handler->display->display_options['fields']['field_masthead']['field'] = 'field_masthead';
  $handler->display->display_options['fields']['field_masthead']['label'] = 'Masthead';
  $handler->display->display_options['fields']['field_masthead']['alter']['text'] = '[field_masthead-title]';
  $handler->display->display_options['fields']['field_masthead']['alter']['absolute'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Notes';
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_title_r_cul']['id'] = 'field_title_r_cul';
  $handler->display->display_options['fields']['field_title_r_cul']['table'] = 'field_data_field_title_r_cul';
  $handler->display->display_options['fields']['field_title_r_cul']['field'] = 'field_title_r_cul';
  $handler->display->display_options['fields']['field_title_r_cul']['label'] = 'Title - Romanized by CUL';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_title_r_paper']['id'] = 'field_title_r_paper';
  $handler->display->display_options['fields']['field_title_r_paper']['table'] = 'field_data_field_title_r_paper';
  $handler->display->display_options['fields']['field_title_r_paper']['field'] = 'field_title_r_paper';
  $handler->display->display_options['fields']['field_title_r_paper']['label'] = 'Title - Romanized by newspaper';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_title_r_trans']['id'] = 'field_title_r_trans';
  $handler->display->display_options['fields']['field_title_r_trans']['table'] = 'field_data_field_title_r_trans';
  $handler->display->display_options['fields']['field_title_r_trans']['field'] = 'field_title_r_trans';
  $handler->display->display_options['fields']['field_title_r_trans']['label'] = 'Title - Translated';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_title_r_cul_translit']['id'] = 'field_title_r_cul_translit';
  $handler->display->display_options['fields']['field_title_r_cul_translit']['table'] = 'field_data_field_title_r_cul_translit';
  $handler->display->display_options['fields']['field_title_r_cul_translit']['field'] = 'field_title_r_cul_translit';
  $handler->display->display_options['fields']['field_title_r_cul_translit']['label'] = 'Title - Transliterated';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = 'Website';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'newspaper' => 'newspaper',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'export-newspapers';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'export-newspapers/csv';
  $export['export_newspapers'] = $view;

  $view = new view();
  $view->name = 'issues_i_uploaded';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Issues I Uploaded';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Issue Uploads';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    8 => '8',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_pub_issue_document' => 'field_pub_issue_document',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_issue_document' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['id'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['table'] = 'field_data_field_pub_issue_pub';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['field'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['label'] = 'Publication';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Publication Issue Document(s) */
  $handler->display->display_options['fields']['field_pub_issue_document']['id'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['table'] = 'field_data_field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['field'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['label'] = 'Publication Issue Document';
  $handler->display->display_options['fields']['field_pub_issue_document']['click_sort_column'] = 'fid';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Uploader (field_pub_uploader) */
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['id'] = 'field_pub_uploader_uid';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['table'] = 'field_data_field_pub_uploader';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['field'] = 'field_pub_uploader_uid';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['relationship'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_issue' => 'publication_issue',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-issue-uploads';
  $export['issues_i_uploaded'] = $view;

  $view = new view();
  $view->name = 'manager_publications';
  $view->description = 'List of Newspapers for given Contributor';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Manager Publications';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 25;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_masthead_fid' => 'field_masthead_fid',
    'title' => 'title',
    'field_city_sort_value' => 'field_city_sort_value',
    'field_country_sort_value' => 'field_country_sort_value',
    'field_frequency_sort_value' => 'field_frequency_sort_value',
    'field_language_sort_value' => 'field_language_sort_value',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_masthead_fid' => array(
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_city_sort_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_country_sort_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_frequency_sort_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_language_sort_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  /* Relationship: Content: Uploader (field_pub_uploader) */
  $handler->display->display_options['relationships']['field_pub_uploader_uid']['id'] = 'field_pub_uploader_uid';
  $handler->display->display_options['relationships']['field_pub_uploader_uid']['table'] = 'field_data_field_pub_uploader';
  $handler->display->display_options['relationships']['field_pub_uploader_uid']['field'] = 'field_pub_uploader_uid';
  $handler->display->display_options['relationships']['field_pub_uploader_uid']['delta'] = '-1';
  /* Field: Content: Masthead */
  $handler->display->display_options['fields']['field_pub_masthead']['id'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['table'] = 'field_data_field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['field'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_masthead']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Add';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Add an issue';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/publication-issue?field_pub_issue_pub=[nid]';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'field_pub_uploader_uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = '0';
  $handler->display->display_options['filters']['uid_current']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'publications-I-upload';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Newspapers';
  $handler->display->display_options['menu']['description'] = 'List of Southeast Asia Newspapers I can Upload';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $export['manager_publications'] = $view;

  $view = new view();
  $view->name = 'possible_maintainers';
  $view->description = 'List contributors and their emails';
  $view->tag = 'v2';
  $view->base_table = 'users';
  $view->human_name = 'Possible Maintainers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Possible Maintainers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['format_username'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'mail' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['possible_maintainers'] = $view;

  $view = new view();
  $view->name = 'publication_expected_issues';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Publication Expected Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contributor Expected Issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_publication_ent_reference_target_id']['id'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['relationships']['field_publication_ent_reference_target_id']['table'] = 'field_data_field_publication_ent_reference';
  $handler->display->display_options['relationships']['field_publication_ent_reference_target_id']['field'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['relationships']['field_publication_ent_reference_target_id']['label'] = 'Publication';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_publication_reference_nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Publication Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publication_reference_nid';
  $handler->display->display_options['fields']['title']['label'] = 'Publication Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Publication Expected Issue Date */
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['id'] = 'field_pub_expected_issue_date_1';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['table'] = 'field_data_field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['field'] = 'field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Expected Issue Nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Publication Expected Issue Date */
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['id'] = 'field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['table'] = 'field_data_field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['field'] = 'field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['alter']['path'] = 'node/[nid_1]';
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_pub_expected_issue_date']['delta_offset'] = '0';
  /* Field: Content: Expected Issue Lookup */
  $handler->display->display_options['fields']['field_expected_issue_lookup']['id'] = 'field_expected_issue_lookup';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['table'] = 'field_data_field_expected_issue_lookup';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['field'] = 'field_expected_issue_lookup';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['text'] = 'See Issue';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['path'] = 'node/[field_expected_issue_lookup-value]';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['empty'] = '<a href="/node/add/publication-issue/?field_pub_issue_pub=[nid]&edit[field_pub_issue_date][und][0][value][date]=[field_pub_expected_issue_date]">Upload</a>';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Expected Isssue';
  /* Sort criterion: Content: Publication Expected Issue Date (field_pub_expected_issue_date) */
  $handler->display->display_options['sorts']['field_pub_expected_issue_date_value']['id'] = 'field_pub_expected_issue_date_value';
  $handler->display->display_options['sorts']['field_pub_expected_issue_date_value']['table'] = 'field_data_field_pub_expected_issue_date';
  $handler->display->display_options['sorts']['field_pub_expected_issue_date_value']['field'] = 'field_pub_expected_issue_date_value';
  /* Contextual filter: Content: Title - CUL Pathname (field_pub_title_r_cul_path) */
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['id'] = 'field_pub_title_r_cul_path_value';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['table'] = 'field_data_field_pub_title_r_cul_path';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['field'] = 'field_pub_title_r_cul_path_value';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary_options']['base_path'] = 'publication-expected-issues';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_expected_issue' => 'publication_expected_issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Director */
  $handler = $view->new_display('page', 'Director', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Expected Issues';
  $handler->display->display_options['display_description'] = 'Display for the Editorial Directors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_pub_expected_issue_date_1' => 'field_pub_expected_issue_date_1',
    'nid_1' => 'nid_1',
    'field_pub_expected_issue_date' => 'field_pub_expected_issue_date',
    'field_expected_issue_lookup' => 'field_expected_issue_lookup',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_expected_issue_date_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_expected_issue_date' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_expected_issue_lookup' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Publication Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Publication Expected Issue Date */
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['id'] = 'field_pub_expected_issue_date_1';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['table'] = 'field_data_field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['field'] = 'field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['label'] = 'Expected Issue';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Expected Issue Nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Expected Issue Lookup */
  $handler->display->display_options['fields']['field_expected_issue_lookup']['id'] = 'field_expected_issue_lookup';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['table'] = 'field_data_field_expected_issue_lookup';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['field'] = 'field_expected_issue_lookup';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['label'] = 'Found Issue';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['text'] = 'See Issue';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['path'] = 'node/[field_expected_issue_lookup-value]';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_lookup']['empty_zero'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Upload Issue Link';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Upload Issue';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/publication-issue/?field_pub_issue_pub=[nid]&edit[field_pub_issue_date][und][0][value][date]=[field_pub_expected_issue_date_1]';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Upload the [field_pub_expected_issue_date_1] issue of [title]';
  $handler->display->display_options['path'] = 'publication-expected-issues';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Publication Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Expected Issues';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title - CUL Pathname (field_pub_title_r_cul_path) */
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['id'] = 'field_pub_title_r_cul_path_value';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['table'] = 'field_data_field_pub_title_r_cul_path';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['field'] = 'field_pub_title_r_cul_path_value';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary_options']['base_path'] = 'publication-expected-issues';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['limit'] = '0';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_1' => 'page_1',
    'default' => 0,
  );

  /* Display: Contributor */
  $handler = $view->new_display('page', 'Contributor', 'page_2');
  $handler->display->display_options['display_description'] = 'Display for the Contributors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_pub_expected_issue_date_1' => 'field_pub_expected_issue_date_1',
    'nid_1' => 'nid_1',
    'field_pub_expected_issue_date' => 'field_pub_expected_issue_date',
    'field_expected_issue_lookup' => 'field_expected_issue_lookup',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_expected_issue_date_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pub_expected_issue_date' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_expected_issue_lookup' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Publication Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Publication Expected Issue Date */
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['id'] = 'field_pub_expected_issue_date_1';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['table'] = 'field_data_field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['field'] = 'field_pub_expected_issue_date';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['label'] = 'Expected Issue';
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_pub_expected_issue_date_1']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Expected Issue Nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Expected Issue Lookup */
  $handler->display->display_options['fields']['field_expected_issue_lookup']['id'] = 'field_expected_issue_lookup';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['table'] = 'field_data_field_expected_issue_lookup';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['field'] = 'field_expected_issue_lookup';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['label'] = 'Found Issue';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['text'] = 'See Issue';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_lookup']['alter']['path'] = 'node/[field_expected_issue_lookup-value]';
  $handler->display->display_options['fields']['field_expected_issue_lookup']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_lookup']['empty_zero'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Upload Issue Link';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Upload Issue';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/publication-issue/?field_pub_issue_pub=[nid]&edit[field_pub_issue_date][und][0][value][date]=[field_pub_expected_issue_date_1]';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Upload the [field_pub_expected_issue_date_1] issue of [title]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Uploader (field_pub_uploader) */
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['id'] = 'field_pub_uploader_uid';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['table'] = 'field_data_field_pub_uploader';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['field'] = 'field_pub_uploader_uid';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['relationship'] = 'field_publication_ent_reference_target_id';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_uploader_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_expected_issue' => 'publication_expected_issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Expected Issue Lookup (field_expected_issue_lookup) */
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['id'] = 'field_expected_issue_lookup_value';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['table'] = 'field_data_field_expected_issue_lookup';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['field'] = 'field_expected_issue_lookup_value';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_expected_issue_lookup_value']['group'] = 1;
  $handler->display->display_options['path'] = 'contributor-expected-issues';
  $export['publication_expected_issues'] = $view;

  $view = new view();
  $view->name = 'publication_expected_issues_create';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Publication Expected Issues Create';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publication Expected Issues Create';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Add Expected Issues';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/publication-expected-issue/?field_publication_ent_reference=[nid]&edit[field_pub_expected_issue_date][und][0][show_todate]=0&edit[field_pub_expected_issue_date][und][0][show_repeat_settings]=1';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Add expected issues for [title]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'publication-expected-issues-create';
  $export['publication_expected_issues_create'] = $view;

  $view = new view();
  $view->name = 'publication_issue_documents';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'file_managed';
  $view->human_name = 'Issue Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Issue Documents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File: Content using Publication Issue Document(s) */
  $handler->display->display_options['relationships']['reverse_field_pub_issue_document_node']['id'] = 'reverse_field_pub_issue_document_node';
  $handler->display->display_options['relationships']['reverse_field_pub_issue_document_node']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['reverse_field_pub_issue_document_node']['field'] = 'reverse_field_pub_issue_document_node';
  $handler->display->display_options['relationships']['reverse_field_pub_issue_document_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['id'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['table'] = 'field_data_field_pub_issue_pub';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['field'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['relationship'] = 'reverse_field_pub_issue_document_node';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['required'] = TRUE;
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_pub_issue_document_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Publication';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_pub_issue_date']['id'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['field'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['relationship'] = 'reverse_field_pub_issue_document_node';
  $handler->display->display_options['fields']['field_pub_issue_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Filter criterion: Content: Title - Term (field_title_term) */
  $handler->display->display_options['filters']['field_title_term_tid']['id'] = 'field_title_term_tid';
  $handler->display->display_options['filters']['field_title_term_tid']['table'] = 'field_data_field_title_term';
  $handler->display->display_options['filters']['field_title_term_tid']['field'] = 'field_title_term_tid';
  $handler->display->display_options['filters']['field_title_term_tid']['relationship'] = 'reverse_field_pub_issue_document_node';
  $handler->display->display_options['filters']['field_title_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_title_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['operator_id'] = 'field_title_term_tid_op';
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['operator'] = 'field_title_term_tid_op';
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['identifier'] = 'field_title_term_tid';
  $handler->display->display_options['filters']['field_title_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_title_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_title_term_tid']['vocabulary'] = 'publication_titles';
  /* Filter criterion: Content: Publication Date (field_pub_issue_date) */
  $handler->display->display_options['filters']['field_pub_issue_date_value']['id'] = 'field_pub_issue_date_value';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['field'] = 'field_pub_issue_date_value';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['relationship'] = 'reverse_field_pub_issue_document_node';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_issue_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['operator_id'] = 'field_pub_issue_date_value_op';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['label'] = 'Publication Date (field_pub_issue_date)';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['operator'] = 'field_pub_issue_date_value_op';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['identifier'] = 'field_pub_issue_date_value';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'issue-documents';
  $export['publication_issue_documents'] = $view;

  $view = new view();
  $view->name = 'publication_issues';
  $view->description = 'Show all issues of the current publication';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Publication Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_pub_issue_pub',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_pub_issue_date' => 'field_pub_issue_date',
    'field_pub_issue_pub' => 'field_pub_issue_pub',
    'field_pub_issue_document' => 'field_pub_issue_document',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_pub_issue_date']['id'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['field'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['label'] = '';
  $handler->display->display_options['fields']['field_pub_issue_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pub_issue_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_pub_issue_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_issue_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Issue Publication */
  $handler->display->display_options['fields']['field_pub_issue_pub']['id'] = 'field_pub_issue_pub';
  $handler->display->display_options['fields']['field_pub_issue_pub']['table'] = 'field_data_field_pub_issue_pub';
  $handler->display->display_options['fields']['field_pub_issue_pub']['field'] = 'field_pub_issue_pub';
  $handler->display->display_options['fields']['field_pub_issue_pub']['label'] = '';
  $handler->display->display_options['fields']['field_pub_issue_pub']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_issue_pub']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_issue_pub']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Publication Issue Document(s) */
  $handler->display->display_options['fields']['field_pub_issue_document']['id'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['table'] = 'field_data_field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['field'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['label'] = '';
  $handler->display->display_options['fields']['field_pub_issue_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_issue_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_issue_document']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Issue Publication (field_pub_issue_pub) */
  $handler->display->display_options['arguments']['field_pub_issue_pub_target_id']['id'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['arguments']['field_pub_issue_pub_target_id']['table'] = 'field_data_field_pub_issue_pub';
  $handler->display->display_options['arguments']['field_pub_issue_pub_target_id']['field'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['arguments']['field_pub_issue_pub_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pub_issue_pub_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_pub_issue_pub_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_pub_issue_pub_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_issue_pub_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_issue_pub_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_issue' => 'publication_issue',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_issue' => 'publication_issue',
  );
  $export['publication_issues'] = $view;

  $view = new view();
  $view->name = 'publication_name_list';
  $view->description = 'Simple list of titles';
  $view->tag = 'jgr25';
  $view->base_table = 'node';
  $view->human_name = 'Publication Name List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $export['publication_name_list'] = $view;

  $view = new view();
  $view->name = 'publication_reminders';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Publication Reminders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_pub_masthead' => 'field_pub_masthead',
    'title' => 'title',
    'term_node_tid' => 'term_node_tid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_pub_masthead' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_paired_with_city_target_id']['id'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['relationships']['field_country_paired_with_city_target_id']['table'] = 'field_data_field_country_paired_with_city';
  $handler->display->display_options['relationships']['field_country_paired_with_city_target_id']['field'] = 'field_country_paired_with_city_target_id';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_expected_issue_publication_node']['id'] = 'reverse_field_expected_issue_publication_node';
  $handler->display->display_options['relationships']['reverse_field_expected_issue_publication_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_expected_issue_publication_node']['field'] = 'reverse_field_expected_issue_publication_node';
  $handler->display->display_options['relationships']['reverse_field_expected_issue_publication_node']['label'] = 'Content referencing Content from field_expected_issue_publication';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title - CUL Pathname */
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['id'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['table'] = 'field_data_field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['field'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['exclude'] = TRUE;
  /* Field: Content: Masthead */
  $handler->display->display_options['fields']['field_pub_masthead']['id'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['table'] = 'field_data_field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['field'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_masthead']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'all-publication-issues/[field_pub_title_r_cul_path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Issues available for [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Frequency';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_2' => 'vocabulary_2',
    'vocabulary_4' => 0,
    'vocabulary_3' => 0,
    'country_ciy' => 0,
    'vocabulary_1' => 0,
    'publication_titles' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_expected_issue_publication_node';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Expected Issues Nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_expected_issue_date']['id'] = 'field_expected_issue_date';
  $handler->display->display_options['fields']['field_expected_issue_date']['table'] = 'field_data_field_expected_issue_date';
  $handler->display->display_options['fields']['field_expected_issue_date']['field'] = 'field_expected_issue_date';
  $handler->display->display_options['fields']['field_expected_issue_date']['relationship'] = 'reverse_field_expected_issue_publication_node';
  $handler->display->display_options['fields']['field_expected_issue_date']['label'] = 'Expected Issue Dates';
  $handler->display->display_options['fields']['field_expected_issue_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_expected_issue_date']['alter']['path'] = 'node/[nid_1]/edit';
  $handler->display->display_options['fields']['field_expected_issue_date']['empty'] = '<a href="/node/add/expected-issue?field_expected_issue_publication=[nid]" title="Add expected issue reminders">Add...</a>';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Missing Issues';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Missing Issues';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'expected-issues/[field_pub_title_r_cul_path]';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'List missing issues for [title]';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language (field_pub_language) */
  $handler->display->display_options['filters']['field_pub_language_target_id']['id'] = 'field_pub_language_target_id';
  $handler->display->display_options['filters']['field_pub_language_target_id']['table'] = 'field_data_field_pub_language';
  $handler->display->display_options['filters']['field_pub_language_target_id']['field'] = 'field_pub_language_target_id';
  $handler->display->display_options['filters']['field_pub_language_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_language_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['operator_id'] = 'field_pub_language_target_id_op';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['operator'] = 'field_pub_language_target_id_op';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['identifier'] = 'field_pub_language_target_id';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Frequency of Publication (field_pub_frequency) */
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['id'] = 'field_pub_frequency_target_id';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['table'] = 'field_data_field_pub_frequency';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['field'] = 'field_pub_frequency_target_id';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['operator_id'] = 'field_pub_frequency_target_id_op';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['label'] = 'Frequency';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['description'] = 'Frequency of Publication';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['operator'] = 'field_pub_frequency_target_id_op';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['identifier'] = 'field_pub_frequency_target_id';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Country paired with City (field_country_paired_with_city) */
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['id'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['table'] = 'field_data_field_country_paired_with_city';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['field'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['operator_id'] = 'field_country_paired_with_city_target_id_op';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['operator'] = 'field_country_paired_with_city_target_id_op';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['identifier'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['label'] = 'Country paired with City (field_country_paired_with_city)';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['identifier'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'expected-issue-dates';
  $export['publication_reminders'] = $view;

  $view = new view();
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_pub_masthead' => 'field_pub_masthead',
    'title' => 'title',
    'term_node_tid' => 'term_node_tid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_pub_masthead' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_paired_with_city_target_id']['id'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['relationships']['field_country_paired_with_city_target_id']['table'] = 'field_data_field_country_paired_with_city';
  $handler->display->display_options['relationships']['field_country_paired_with_city_target_id']['field'] = 'field_country_paired_with_city_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title - CUL Pathname */
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['id'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['table'] = 'field_data_field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['field'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['exclude'] = TRUE;
  /* Field: Content: Masthead */
  $handler->display->display_options['fields']['field_pub_masthead']['id'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['table'] = 'field_data_field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['field'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_masthead']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'all-publication-issues/[field_pub_title_r_cul_path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Issues available for [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'Type';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_4' => 0,
    'vocabulary_3' => 0,
    'vocabulary_2' => 0,
    'vocabulary_1' => 0,
  );
  /* Field: Content: Coverage */
  $handler->display->display_options['fields']['field_coverage']['id'] = 'field_coverage';
  $handler->display->display_options['fields']['field_coverage']['table'] = 'field_data_field_coverage';
  $handler->display->display_options['fields']['field_coverage']['field'] = 'field_coverage';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language (field_pub_language) */
  $handler->display->display_options['filters']['field_pub_language_target_id']['id'] = 'field_pub_language_target_id';
  $handler->display->display_options['filters']['field_pub_language_target_id']['table'] = 'field_data_field_pub_language';
  $handler->display->display_options['filters']['field_pub_language_target_id']['field'] = 'field_pub_language_target_id';
  $handler->display->display_options['filters']['field_pub_language_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_language_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['operator_id'] = 'field_pub_language_target_id_op';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['operator'] = 'field_pub_language_target_id_op';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['identifier'] = 'field_pub_language_target_id';
  $handler->display->display_options['filters']['field_pub_language_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Frequency of Publication (field_pub_frequency) */
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['id'] = 'field_pub_frequency_target_id';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['table'] = 'field_data_field_pub_frequency';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['field'] = 'field_pub_frequency_target_id';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['operator_id'] = 'field_pub_frequency_target_id_op';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['label'] = 'Frequency';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['description'] = 'Frequency of Publication';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['operator'] = 'field_pub_frequency_target_id_op';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['identifier'] = 'field_pub_frequency_target_id';
  $handler->display->display_options['filters']['field_pub_frequency_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Country paired with City (field_country_paired_with_city) */
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['id'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['table'] = 'field_data_field_country_paired_with_city';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['field'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['operator_id'] = 'field_country_paired_with_city_target_id_op';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['operator'] = 'field_country_paired_with_city_target_id_op';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['identifier'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['label'] = 'Country paired with City (field_country_paired_with_city)';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['identifier'] = 'field_country_paired_with_city_target_id';
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_country_paired_with_city_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Public Publications */
  $handler = $view->new_display('page', 'Public Publications', 'page');
  $handler->display->display_options['path'] = 'publications';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Publications';
  $handler->display->display_options['menu']['description'] = 'List of the publications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Editor Publications */
  $handler = $view->new_display('page_with_page_title', 'Editor Publications', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    8 => '8',
    4 => '4',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title - CUL Pathname */
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['id'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['table'] = 'field_data_field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['field'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['exclude'] = TRUE;
  /* Field: Content: Masthead */
  $handler->display->display_options['fields']['field_pub_masthead']['id'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['table'] = 'field_data_field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['field'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_masthead']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'all-publication-issues/[field_pub_title_r_cul_path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Issues available for [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Uploader */
  $handler->display->display_options['fields']['field_pub_uploader']['id'] = 'field_pub_uploader';
  $handler->display->display_options['fields']['field_pub_uploader']['table'] = 'field_data_field_pub_uploader';
  $handler->display->display_options['fields']['field_pub_uploader']['field'] = 'field_pub_uploader';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Editor (field_pub_editor) */
  $handler->display->display_options['arguments']['field_pub_editor_uid']['id'] = 'field_pub_editor_uid';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['table'] = 'field_data_field_pub_editor';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['field'] = 'field_pub_editor_uid';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_editor_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'editor-publications';

  /* Display: Editorial Director Publications */
  $handler = $view->new_display('page_with_page_title', 'Editorial Director Publications', 'page_with_page_title_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    8 => '8',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title - CUL Pathname */
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['id'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['table'] = 'field_data_field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['field'] = 'field_pub_title_r_cul_path';
  $handler->display->display_options['fields']['field_pub_title_r_cul_path']['exclude'] = TRUE;
  /* Field: Content: Masthead */
  $handler->display->display_options['fields']['field_pub_masthead']['id'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['table'] = 'field_data_field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['field'] = 'field_pub_masthead';
  $handler->display->display_options['fields']['field_pub_masthead']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_masthead']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'all-publication-issues/[field_pub_title_r_cul_path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Issues available for [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Editor */
  $handler->display->display_options['fields']['field_pub_editor']['id'] = 'field_pub_editor';
  $handler->display->display_options['fields']['field_pub_editor']['table'] = 'field_data_field_pub_editor';
  $handler->display->display_options['fields']['field_pub_editor']['field'] = 'field_pub_editor';
  /* Field: Content: Uploader */
  $handler->display->display_options['fields']['field_pub_uploader']['id'] = 'field_pub_uploader';
  $handler->display->display_options['fields']['field_pub_uploader']['table'] = 'field_data_field_pub_uploader';
  $handler->display->display_options['fields']['field_pub_uploader']['field'] = 'field_pub_uploader';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['path'] = 'editorial-director-publications';
  $export['publications'] = $view;

  $view = new view();
  $view->name = 'subscriber_issues';
  $view->description = '';
  $view->tag = 'v2';
  $view->base_table = 'node';
  $view->human_name = 'Subscriber Issues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publication Issues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_pub_title_r_cul',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_pub_issue_date' => 'field_pub_issue_date',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['id'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['table'] = 'field_data_field_pub_issue_pub';
  $handler->display->display_options['relationships']['field_pub_issue_pub_target_id']['field'] = 'field_pub_issue_pub_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Publication Nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title - Romaized by CUL */
  $handler->display->display_options['fields']['field_pub_title_r_cul']['id'] = 'field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['table'] = 'field_data_field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['field'] = 'field_pub_title_r_cul';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['relationship'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['label'] = '';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_title_r_cul']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pub_title_r_cul']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_pub_title_r_cul']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Publication Issue Document(s) */
  $handler->display->display_options['fields']['field_pub_issue_document']['id'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['table'] = 'field_data_field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['field'] = 'field_pub_issue_document';
  $handler->display->display_options['fields']['field_pub_issue_document']['label'] = 'Document';
  $handler->display->display_options['fields']['field_pub_issue_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pub_issue_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pub_issue_document']['type'] = 'file_url_plain';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_pub_issue_date']['id'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['field'] = 'field_pub_issue_date';
  $handler->display->display_options['fields']['field_pub_issue_date']['label'] = '';
  $handler->display->display_options['fields']['field_pub_issue_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pub_issue_date']['alter']['path'] = '[field_pub_issue_document]';
  $handler->display->display_options['fields']['field_pub_issue_date']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_pub_issue_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_issue_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Issue';
  /* Sort criterion: Content: Title - Romaized by CUL (field_pub_title_r_cul) */
  $handler->display->display_options['sorts']['field_pub_title_r_cul_value']['id'] = 'field_pub_title_r_cul_value';
  $handler->display->display_options['sorts']['field_pub_title_r_cul_value']['table'] = 'field_data_field_pub_title_r_cul';
  $handler->display->display_options['sorts']['field_pub_title_r_cul_value']['field'] = 'field_pub_title_r_cul_value';
  $handler->display->display_options['sorts']['field_pub_title_r_cul_value']['relationship'] = 'field_pub_issue_pub_target_id';
  /* Sort criterion: Content: Publication Date (field_pub_issue_date) */
  $handler->display->display_options['sorts']['field_pub_issue_date_value']['id'] = 'field_pub_issue_date_value';
  $handler->display->display_options['sorts']['field_pub_issue_date_value']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['sorts']['field_pub_issue_date_value']['field'] = 'field_pub_issue_date_value';
  $handler->display->display_options['sorts']['field_pub_issue_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Title - CUL Pathname (field_pub_title_r_cul_path) */
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['id'] = 'field_pub_title_r_cul_path_value';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['table'] = 'field_data_field_pub_title_r_cul_path';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['field'] = 'field_pub_title_r_cul_path_value';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['relationship'] = 'field_pub_issue_pub_target_id';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pub_title_r_cul_path_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_issue' => 'publication_issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publication Issue Document(s) (field_pub_issue_document:fid) */
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['id'] = 'field_pub_issue_document_fid';
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['table'] = 'field_data_field_pub_issue_document';
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['field'] = 'field_pub_issue_document_fid';
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_pub_issue_document_fid']['group'] = 1;
  /* Filter criterion: Content: Publication Date (field_pub_issue_date) */
  $handler->display->display_options['filters']['field_pub_issue_date_value']['id'] = 'field_pub_issue_date_value';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['table'] = 'field_data_field_pub_issue_date';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['field'] = 'field_pub_issue_date_value';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_pub_issue_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['operator_id'] = 'field_pub_issue_date_value_op';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['operator'] = 'field_pub_issue_date_value_op';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['identifier'] = 'field_pub_issue_date_value';
  $handler->display->display_options['filters']['field_pub_issue_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry - No issues available under your subscription.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  $handler->display->display_options['path'] = 'subscriber-issues';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_issue_publication_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Issue Publication */
  $handler->display->display_options['fields']['field_pub_issue_pub']['id'] = 'field_pub_issue_pub';
  $handler->display->display_options['fields']['field_pub_issue_pub']['table'] = 'field_data_field_pub_issue_pub';
  $handler->display->display_options['fields']['field_pub_issue_pub']['field'] = 'field_pub_issue_pub';
  $handler->display->display_options['fields']['field_pub_issue_pub']['label'] = '';
  $handler->display->display_options['fields']['field_pub_issue_pub']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pub_issue_pub']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Issue Publication Pathname (field_pub_issue_pub_path) */
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['id'] = 'field_pub_issue_pub_path_value';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['table'] = 'field_data_field_pub_issue_pub_path';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['field'] = 'field_pub_issue_pub_path_value';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['summary_options']['base_path'] = 'all-publication-issues';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pub_issue_pub_path_value']['limit'] = '0';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['subscriber_issues'] = $view;

  return $export;
}
