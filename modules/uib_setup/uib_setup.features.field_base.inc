<?php
/**
 * @file
 * uib_setup.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function uib_setup_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_full_name'
  $field_bases['field_full_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_full_name',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
