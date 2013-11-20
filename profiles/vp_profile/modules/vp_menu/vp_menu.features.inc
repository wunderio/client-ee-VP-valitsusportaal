<?php
/**
 * @file
 * vp_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vp_menu_node_info() {
  $items = array(
    'vp_menu_dropdown_box' => array(
      'name' => t('1st level menuitem / 2nd level menu'),
      'base' => 'node_content',
      'description' => t('The menuitem for the first level menu. The body section of this node is used to structure and style the second level menu box that appears when associated first level menuitem is clicked.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function vp_menu_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: comment_node_vp_menu_dropdown_box
  $rdf_mappings['comment']['comment_node_vp_menu_dropdown_box'] = array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:Comment',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'comment_body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'pid' => array(
      'predicates' => array(
        0 => 'sioc:reply_of',
      ),
      'type' => 'rel',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
  );

  // Exported RDF mapping: vp_menu_dropdown_box
  $rdf_mappings['node']['vp_menu_dropdown_box'] = array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
      'type' => 'property',
    ),
  );

  return $rdf_mappings;
}
