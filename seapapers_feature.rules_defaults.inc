<?php
/**
 * @file
 * seapapers_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function seapapers_feature_default_rules_configuration() {
  $items = array();
  $items['rules_prepare_newly_uploaded_publication_issues'] = entity_import('rules_config', '{ "rules_prepare_newly_uploaded_publication_issues" : {
      "LABEL" : "Prepare Newly Uploaded Publication Issues",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "issues" ],
      "REQUIRES" : [ "rules", "seanews" ],
      "ON" : { "node_insert--publication_issue" : { "bundle" : "publication_issue" } },
      "DO" : [
        { "data_set" : {
            "data" : [ "node:title" ],
            "value" : "[node:field-pub-issue-pub:field_pub_title_r_cul] [node:field-pub-issue-date:custom:Y-m-d]"
          }
        },
        { "seanews_action_node_save_publication_issue_update_expected" : { "node" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_prepare_updated_publication_issues_cloned_'] = entity_import('rules_config', '{ "rules_prepare_updated_publication_issues_cloned_" : {
      "LABEL" : "Prepare Updated Publication Issues",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "issues" ],
      "REQUIRES" : [ "rules", "seanews" ],
      "ON" : { "node_update--publication_issue" : { "bundle" : "publication_issue" } },
      "DO" : [
        { "data_set" : {
            "data" : [ "node:title" ],
            "value" : "[node:field-pub-issue-pub:field_pub_title_r_cul] [node:field-pub-issue-date:custom:Y-m-d]"
          }
        },
        { "seanews_action_node_save_publication_issue_move_file" : { "node" : [ "node" ] } },
        { "seanews_action_node_save_publication_issue_update_expected" : { "node" : [ "node-unchanged" ] } },
        { "seanews_action_node_save_publication_issue_update_expected" : { "node" : [ "node" ] } }
      ]
    }
  }');
  return $items;
}
