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
    'service_roles' => array(
      'name' => 'Roller',
      'machine_name' => 'service_roles',
      'description' => 'Nyttige tjenester for deg som er...',
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
