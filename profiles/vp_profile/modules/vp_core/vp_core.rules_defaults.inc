<?php
/**
 * @file
 * vp_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function vp_core_default_rules_configuration() {
  $items = array();
  $items['rules_after_adding_content_redirection'] = entity_import('rules_config', '{ "rules_after_adding_content_redirection" : {
      "LABEL" : "After adding content redirection",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "DO" : [ { "redirect" : { "url" : "admin\\/content", "destination" : 1 } } ]
    }
  }');
  return $items;
}
