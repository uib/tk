<?php
/**
 * @file
 * gdpr.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gdpr_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gdpr_main|node|gdpr_processing|default';
  $field_group->group_name = 'group_gdpr_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gdpr_processing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'field_gdpr_description',
      1 => 'field_gdpr_controller',
      2 => 'field_gdpr_location',
      3 => 'field_gdpr_data_description',
      4 => 'field_gdpr_data_origin',
      5 => 'field_gdpr_data_special',
      6 => 'field_gdpr_purpose',
      7 => 'field_gdpr_controller_person',
      8 => 'field_gdpr_data_special_lawfulne',
      9 => 'field_gdpr_data_special_type',
      10 => 'field_gdpr_data_structured',
      11 => 'field_gdpr_lawfulness',
      12 => 'field_gdpr_service',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gdpr_main|node|gdpr_processing|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Main');

  return $field_groups;
}
