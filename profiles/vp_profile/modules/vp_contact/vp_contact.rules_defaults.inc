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
      "REQUIRES" : [ "php", "rules", "feeds" ],
      "ON" : [ "feeds_after_import" ],
      "DO" : [
        { "php_eval" : { "code" : "$qids = db_select(\\u0027nodequeue_queue\\u0027, \\u0027n\\u0027)\\r\\n  -\\u003Econdition(\\u0027n.name\\u0027, \\u0027contacts\\u0027)\\r\\n  -\\u003Efields(\\u0027n\\u0027, array(\\u0027qid\\u0027))\\r\\n  -\\u003Eexecute()\\r\\n  -\\u003EfetchCol();\\r\\n$qid = $qids[0];\\r\\n$nodequeue = nodequeue_load($qid);\\r\\n$subqueues = nodequeue_load_subqueues_by_queue($qid);\\r\\n$query = db_select(\\u0027node\\u0027, \\u0027n\\u0027)\\r\\n  -\\u003Econdition(\\u0027n.type\\u0027, \\u0027contact\\u0027)\\r\\n  -\\u003Efields(\\u0027n\\u0027, array(\\u0027nid\\u0027))\\r\\n  -\\u003Eexecute();\\r\\nif ($query-\\u003ErowCount() \\u003E 0) {\\r\\n  while ($row = $query-\\u003EfetchAssoc()) {\\r\\n    nodequeue_subqueue_add($nodequeue, \\u0026$subqueues[$qid], $row[\\u0027nid\\u0027]);\\r\\n  }\\r\\n}" } }
      ]
    }
  }');
  return $items;
}
