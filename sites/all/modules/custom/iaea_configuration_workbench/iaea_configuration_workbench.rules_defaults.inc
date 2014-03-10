<?php
/**
 * @file
 * iaea_configuration_workbench.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function iaea_configuration_workbench_default_rules_configuration() {
  $items = array();
  $items['rules_workbench_state_change_to_draft_notification'] = entity_import('rules_config', '{ "rules_workbench_state_change_to_draft_notification" : {
      "LABEL" : "Workbench state change to draft notification",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "workbench notification mail draft" ],
      "REQUIRES" : [ "workbench_moderation", "rules", "mimemail" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "draft" } }
      ],
      "DO" : [
        { "mimemail_to_users_of_role" : {
            "key" : "[site:current-user]--[node:nid]--[new-state:value]--[site:current-date]",
            "roles" : { "value" : { "5" : "5", "6" : "6" } },
            "active" : 1,
            "subject" : "[node:title] changed to [new-state:value]",
            "body" : "New content being changed from [previous-state:value] to [new-state:value].\\r\\nGo to node page from \\u003Ca href=\\u0022[node:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E.",
            "plaintext" : "New content being changed from [previous-state:value] to [new-state:value].\\r\\nGo to node page from here: [node:url].",
            "language_user" : 0,
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_workbench_state_change_to_needs_qa_notification'] = entity_import('rules_config', '{ "rules_workbench_state_change_to_needs_qa_notification" : {
      "LABEL" : "Workbench state change to needs qa notification",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "workbench needs-qa notification mail" ],
      "REQUIRES" : [ "workbench_moderation", "rules", "mimemail" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_qa" } }
      ],
      "DO" : [
        { "mimemail_to_users_of_role" : {
            "key" : "[site:current-user]--[node:nid]--[new-state:value]--[site:current-date]",
            "roles" : { "value" : { "6" : "6" } },
            "active" : 1,
            "subject" : "[node:title] changed to [new-state:value]",
            "body" : "New content being changed from [previous-state:value] to [new-state:value].\\r\\nGo to node page from \\u003Ca href=\\u0022[node:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E.",
            "plaintext" : "New content being changed from [previous-state:value] to [new-state:value].\\r\\nGo to node page from here: [node:url].",
            "language_user" : 0,
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_workbench_state_change_to_needs_review_notification'] = entity_import('rules_config', '{ "rules_workbench_state_change_to_needs_review_notification" : {
      "LABEL" : "Workbench state change to needs review notification",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "workbench notification mail needs-review" ],
      "REQUIRES" : [ "workbench_moderation", "rules", "mimemail" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "mimemail_to_users_of_role" : {
            "key" : "[site:current-user]--[node:nid]--[new-state:value]--[site:current-date]",
            "roles" : { "value" : { "5" : "5" } },
            "active" : 1,
            "subject" : "[node:title] changed to [new-state:value]",
            "body" : "New content being changed from [previous-state:value] to [new-state:value].\\r\\nGo to node page from \\u003Ca href=\\u0022[node:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E.",
            "plaintext" : "New content being changed from [previous-state:value] to [new-state:value].\\r\\nGo to node page from here: [node:url].",
            "language_user" : 0,
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_workbench_state_change_to_published_notification'] = entity_import('rules_config', '{ "rules_workbench_state_change_to_published_notification" : {
      "LABEL" : "Workbench state change to published notification",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "workbench notification mail published" ],
      "REQUIRES" : [ "workbench_moderation", "rules", "mimemail" ],
      "ON" : { "workbench_moderation_after_moderation_transition" : [] },
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } }
      ],
      "DO" : [
        { "mimemail_to_users_of_role" : {
            "key" : "[site:current-user]--[node:nid]--[new-state:value]--[site:current-date]",
            "roles" : { "value" : { "5" : "5", "6" : "6" } },
            "active" : 1,
            "subject" : "[node:title] changed to [new-state:value]",
            "body" : "New content being changed from [previous-state:value] to [new-state:value].\\r\\nGo to node page from \\u003Ca href=\\u0022[node:url]\\u0022\\u003Ehere\\u003C\\/a\\u003E.",
            "plaintext" : "New content being changed from [previous-state:value] to [new-state:value].\\r\\nGo to node page from here: [node:url].",
            "language_user" : 0,
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
