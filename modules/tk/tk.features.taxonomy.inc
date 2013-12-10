<?php
/**
 * @file
 * tk.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tk_taxonomy_default_vocabularies() {
  return array(
    'roller' => array(
      'name' => 'Roller',
      'machine_name' => 'roller',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tjenesteorientert' => array(
      'name' => 'Tjenesteorientert',
      'machine_name' => 'tjenesteorientert',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'virksomhetsnivaa' => array(
      'name' => 'Virksomhetsnivå',
      'machine_name' => 'virksomhetsnivaa',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
