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
  $items['rules_email_expected_issue_reminder_to_an_editor'] = entity_import('rules_config', '{ "rules_email_expected_issue_reminder_to_an_editor" : {
      "LABEL" : "Email Expected Issue Reminder to an Editor [editor_uid]",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "email" ],
      "REQUIRES" : [ "rules", "seanews" ],
      "USES VARIABLES" : { "editor_uid" : { "label" : "User ID of an Editor", "type" : "integer" } },
      "ACTION SET" : [
        { "seanews_action_node_render_view_text" : {
            "USING" : {
              "viewname" : "editor_expected_issues",
              "display" : "page",
              "argument1" : "[editor-uid:value]"
            },
            "PROVIDE" : { "variable_added" : { "expected_issues_view_text" : "Text of the view" } }
          }
        },
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "editor-uid" ] },
            "PROVIDE" : { "entity_fetched" : { "fetched_user_info" : "Editor User Info" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "Hello [fetched-user-info:name],\\r\\n\\r\\nThe following issues were expected to be uploaded by you into the SEApapers archive over the past month but have not been. Please login to the archive to either upload the issues, or to provide a reason for their absence.\\r\\n\\r\\nThank you\\r\\n[expected-issues-view-text:value]"
            },
            "PROVIDE" : { "variable_added" : { "email_body" : "Email Body" } }
          }
        },
        { "drupal_message" : { "message" : "[email-body:value]" } },
        { "mail" : {
            "to" : "[fetched-user-info:mail]",
            "subject" : "SEApapers Archive Expected Issues Reminder",
            "message" : "[email-body:value]",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "ghg4@cornell.edu",
            "subject" : "Your copy of SEAPapers Monthly Reminder sent to [fetched-user-info:name]",
            "message" : "This message was sent to the Editor [fetched-user-info:name] today:\\r\\n\\r\\n[email-body:value]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_find_editors_who_need_expected_issue_emails'] = entity_import('rules_config', '{ "rules_find_editors_who_need_expected_issue_emails" : {
      "LABEL" : "Monthly Email to Editors re. Expected Issues",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "email" ],
      "REQUIRES" : [ "rules", "php", "rules_scheduler", "views_bulk_operations" ],
      "ACTION SET" : [
        { "schedule" : {
            "component" : "rules_find_editors_who_need_expected_issue_emails",
            "date" : "first day of next month",
            "identifier" : "Schedule SEApapers Archive Expected Issues Reminder Email \\u003C?php echo date( \\u0022Y-m-d\\u0022, strtotime(\\u0027first day of next month\\u0027)); ?\\u003E"
          }
        },
        { "views_bulk_operations_action_load_id_list" : {
            "USING" : { "view" : "editors_expecting_issues|default" },
            "PROVIDE" : { "entity_id_list" : { "editor_entity_id_list" : "A list of editor ids" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "editor-entity-id-list" ] },
            "ITEM" : { "editor_id" : "Current editor" },
            "DO" : [
              { "component_rules_email_expected_issue_reminder_to_an_editor" : { "editor_uid" : [ "editor-id" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_lookup_issues_on_publication_expected_issue_save'] = entity_import('rules_config', '{ "rules_lookup_issues_on_publication_expected_issue_save" : {
      "LABEL" : "Lookup Issues on Publication Expected Issue Save",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "seanews", "rules" ],
      "ON" : {
        "node_insert--publication_expected_issue" : { "bundle" : "publication_expected_issue" },
        "node_update--publication_expected_issue" : { "bundle" : "publication_expected_issue" }
      },
      "DO" : [
        { "seanews_action_node_lookup_publication_issue" : { "node" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_prepare_newly_uploaded_publication_issues'] = entity_import('rules_config', '{ "rules_prepare_newly_uploaded_publication_issues" : {
      "LABEL" : "Prepare Newly Uploaded Publication Issues",
      "PLUGIN" : "reaction rule",
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
        { "seanews_action_node_save_publication_issue_move_file" : { "node" : [ "node" ] } },
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
