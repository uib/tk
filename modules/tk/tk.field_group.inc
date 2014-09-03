<?php
/**
 * @file
 * tk.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tk_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|service|default';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_service_type',
      1 => 'field_ower_contact',
      2 => 'field_description',
      3 => 'field_service_rotation',
      4 => 'field_summary',
      5 => 'field_supporting_systems',
      6 => 'field_criticality',
      7 => 'field_quality',
      8 => 'field_service_levels',
      9 => 'field_operator',
      10 => 'field_internal_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => ' group-main field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_main|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|service|default';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_support_contact',
      1 => 'field_service_state',
      2 => 'field_service_owner',
      3 => 'field_service_supplier',
      4 => 'field_user_group',
      5 => 'field_cost',
      6 => 'field_demand',
      7 => 'field_field_howto_orde',
      8 => 'field_availability',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => ' group-sidebar field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_sidebar|node|service|default'] = $field_group;

  return $export;
}
