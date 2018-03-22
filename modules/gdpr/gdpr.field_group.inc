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
      0 => 'field_gdpr_subject_informed',
      1 => 'field_gdpr_comment',
      2 => 'field_gdpr_location',
      3 => 'field_gdpr_delete_policy',
      4 => 'field_gdpr_controller',
      5 => 'field_gdpr_data_special',
      6 => 'field_gdpr_measures',
      7 => 'field_gdpr_data_structured',
      8 => 'field_gdpr_processor',
      9 => 'field_gdpr_processor_contract',
      10 => 'field_gdpr_controller_person',
      11 => 'field_gdpr_description',
      12 => 'field_gdpr_data_special_lawfulne',
      13 => 'field_gdpr_service',
      14 => 'field_gdpr_data_special_type',
      15 => 'field_gdpr_lawfulness',
      16 => 'field_gdpr_purpose',
      17 => 'field_gdpr_data_description',
      18 => 'field_gdpr_data_origin',
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
