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
    'service_business_levels' => array(
      'name' => 'Virksomhetsnivå',
      'machine_name' => 'service_business_levels',
      'description' => 'Tjenester for',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'service_classes' => array(
      'name' => 'Tjenesteorientert',
      'machine_name' => 'service_classes',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'service_roles' => array(
      'name' => 'Roller',
      'machine_name' => 'service_roles',
      'description' => 'Nyttige tjenester for deg som er...',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
