<?php
/**
 * @file
 * tk.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tk_field_group_info() {
  $field_groups = array();

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
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'group_secondary',
      1 => 'group_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main',
      'instance_settings' => array(
        'classes' => 'group-main field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_service_full_group_main',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary|node|service|default';
  $field_group->group_name = 'group_secondary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Secondary',
    'weight' => '36',
    'children' => array(
      0 => 'field_service_type',
      1 => 'field_information_class',
      2 => 'field_ros_date',
      3 => 'field_service_levels',
      4 => 'field_ros_revision_date',
      5 => 'field_criticality',
      6 => 'field_ros_link',
      7 => 'field_cmdb_id',
      8 => 'field_service_rotation',
      9 => 'field_service_state',
      10 => 'field_edit_state',
      11 => 'field_supporting_systems',
      12 => 'field_internal_notes',
      13 => 'field_operator',
      14 => 'field_ower_contact',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Secondary',
      'instance_settings' => array(
        'classes' => 'group-secondary field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_service_full_group_secondary',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_secondary|node|service|default'] = $field_group;

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
    'label' => 'Primary',
    'weight' => '2',
    'children' => array(
      0 => 'field_service_supplier',
      1 => 'field_demand',
      2 => 'field_service_owner',
      3 => 'field_cost',
      4 => 'field_availability',
      5 => 'field_user_group',
      6 => 'field_support_contact',
      7 => 'field_field_howto_orde',
      8 => 'field_home_link',
      9 => 'field_documentation_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Primary',
      'instance_settings' => array(
        'classes' => ' group-sidebar field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_service_full_group_sidebar',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sidebar|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|service|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '35',
    'children' => array(
      0 => 'field_summary',
      1 => 'field_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'classes' => 'group-text field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_service_full_group_text',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text|node|service|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Main');
  t('Primary');
  t('Secondary');
  t('Text');

  return $field_groups;
}
