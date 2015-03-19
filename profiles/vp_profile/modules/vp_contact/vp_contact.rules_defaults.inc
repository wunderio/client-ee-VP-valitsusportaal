<?php
/**
 * @file
 * vp_contact.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function vp_contact_default_rules_configuration() {
  $items = array();
  $items['rules_imported_nodes_to_nodequeue'] = entity_import('rules_config', '{ "rules_imported_nodes_to_nodequeue" : {
      "LABEL" : "Imported nodes to nodequeue",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "rules", "feeds" ],
      "ON" : { "feeds_after_import" : [] },
      "DO" : [
        { "php_eval" : { "code" : "drupal_load(\\u0027module\\u0027, \\u0027nodequeue\\u0027);\\r\\n\\r\\n\\/\\/ Enable auto add.\\r\\n$qids = db_select(\\u0027nodequeue_queue\\u0027, \\u0027n\\u0027)\\r\\n  -\\u003Econdition(\\u0027n.name\\u0027, \\u0027contacts\\u0027)\\r\\n  -\\u003Efields(\\u0027n\\u0027, array(\\u0027qid\\u0027))\\r\\n  -\\u003Eexecute()\\r\\n  -\\u003EfetchCol();\\r\\n$qid = $qids[0];\\r\\ndb_merge(\\u0027nodequeue_auto\\u0027)\\r\\n  -\\u003Ekey(array(\\u0027qid\\u0027 =\\u003E $qid))\\r\\n  -\\u003Efields(array(\\r\\n      \\u0027qid\\u0027 =\\u003E $qid,\\r\\n      \\u0027auto_add\\u0027 =\\u003E 1,\\r\\n  ))\\r\\n  -\\u003Eexecute();\\r\\n\\/\\/ Add existing nodes.\\r\\n$qids = db_select(\\u0027nodequeue_queue\\u0027, \\u0027n\\u0027)\\r\\n  -\\u003Econdition(\\u0027n.name\\u0027, \\u0027contacts\\u0027)\\r\\n  -\\u003Efields(\\u0027n\\u0027, array(\\u0027qid\\u0027))\\r\\n  -\\u003Eexecute()\\r\\n  -\\u003EfetchCol();\\r\\n$qid = $qids[0];\\r\\n$nodequeue = nodequeue_load($qid);\\r\\n$subqueues = nodequeue_load_subqueues_by_queue($qid);\\r\\n$subqueue = reset($subqueues);\\r\\n$query = db_select(\\u0027node\\u0027, \\u0027n\\u0027)\\r\\n  -\\u003Econdition(\\u0027n.type\\u0027, \\u0027contact\\u0027)\\r\\n  -\\u003Efields(\\u0027n\\u0027, array(\\u0027nid\\u0027))\\r\\n  -\\u003Eexecute();\\r\\nif ($query-\\u003ErowCount() \\u003E 0) {\\r\\n  while ($row = $query-\\u003EfetchAssoc()) {\\r\\n   nodequeue_subqueue_add($nodequeue, $subqueue, $row[\\u0027nid\\u0027]);\\r\\n  }\\r\\n}\\r\\n\\r\\nwatchdog(\\u0027rk\\u0027, \\u0027rule for nodequeue just ran\\u0027);" } }
      ]
    }
  }');
  return $items;
}
