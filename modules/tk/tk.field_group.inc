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
      0 => 'group_text',
      1 => 'group_secondary',
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
      0 => 'field_cmdb_id',
      1 => 'field_supporting_systems',
      2 => 'field_ower_contact',
      3 => 'field_service_levels',
      4 => 'field_service_rotation',
      5 => 'field_service_state',
      6 => 'field_criticality',
      7 => 'field_service_type',
      8 => 'field_ros_link',
      9 => 'field_edit_state',
      10 => 'field_information_class',
      11 => 'field_operator',
      12 => 'field_internal_notes',
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
      0 => 'field_home_link',
      1 => 'field_service_owner',
      2 => 'field_ros_date',
      3 => 'field_service_supplier',
      4 => 'field_ros_revision_date',
      5 => 'field_availability',
      6 => 'field_field_howto_orde',
      7 => 'field_support_contact',
      8 => 'field_demand',
      9 => 'field_documentation_link',
      10 => 'field_cost',
      11 => 'field_user_group',
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
      0 => 'field_description',
      1 => 'field_summary',
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
