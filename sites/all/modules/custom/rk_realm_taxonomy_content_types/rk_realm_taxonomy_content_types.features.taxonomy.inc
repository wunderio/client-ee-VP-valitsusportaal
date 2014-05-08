<?php
/**
 * @file
 * rk_realm_taxonomy_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rk_realm_taxonomy_content_types_taxonomy_default_vocabularies() {
  return array(
    'realm' => array(
      'name' => 'Realm',
      'machine_name' => 'realm',
      'description' => 'Areas of expertise particular to this organisation.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
