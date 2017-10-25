<?php
/**
 * @file
 * tk.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tk_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_cmdb_id'.
  $permissions['create field_cmdb_id'] = array(
    'name' => 'create field_cmdb_id',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_criticality'.
  $permissions['create field_criticality'] = array(
    'name' => 'create field_criticality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_edit_state'.
  $permissions['create field_edit_state'] = array(
    'name' => 'create field_edit_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_information_class'.
  $permissions['create field_information_class'] = array(
    'name' => 'create field_information_class',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_internal_notes'.
  $permissions['create field_internal_notes'] = array(
    'name' => 'create field_internal_notes',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_operator'.
  $permissions['create field_operator'] = array(
    'name' => 'create field_operator',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ower_contact'.
  $permissions['create field_ower_contact'] = array(
    'name' => 'create field_ower_contact',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_quality'.
  $permissions['create field_quality'] = array(
    'name' => 'create field_quality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ros_date'.
  $permissions['create field_ros_date'] = array(
    'name' => 'create field_ros_date',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ros_link'.
  $permissions['create field_ros_link'] = array(
    'name' => 'create field_ros_link',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ros_revision_date'.
  $permissions['create field_ros_revision_date'] = array(
    'name' => 'create field_ros_revision_date',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_service_levels'.
  $permissions['create field_service_levels'] = array(
    'name' => 'create field_service_levels',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_service_rotation'.
  $permissions['create field_service_rotation'] = array(
    'name' => 'create field_service_rotation',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_service_state'.
  $permissions['create field_service_state'] = array(
    'name' => 'create field_service_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_service_type'.
  $permissions['create field_service_type'] = array(
    'name' => 'create field_service_type',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_supporting_systems'.
  $permissions['create field_supporting_systems'] = array(
    'name' => 'create field_supporting_systems',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cmdb_id'.
  $permissions['edit field_cmdb_id'] = array(
    'name' => 'edit field_cmdb_id',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_criticality'.
  $permissions['edit field_criticality'] = array(
    'name' => 'edit field_criticality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_edit_state'.
  $permissions['edit field_edit_state'] = array(
    'name' => 'edit field_edit_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_information_class'.
  $permissions['edit field_information_class'] = array(
    'name' => 'edit field_information_class',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_internal_notes'.
  $permissions['edit field_internal_notes'] = array(
    'name' => 'edit field_internal_notes',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_operator'.
  $permissions['edit field_operator'] = array(
    'name' => 'edit field_operator',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ower_contact'.
  $permissions['edit field_ower_contact'] = array(
    'name' => 'edit field_ower_contact',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_quality'.
  $permissions['edit field_quality'] = array(
    'name' => 'edit field_quality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ros_date'.
  $permissions['edit field_ros_date'] = array(
    'name' => 'edit field_ros_date',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ros_link'.
  $permissions['edit field_ros_link'] = array(
    'name' => 'edit field_ros_link',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ros_revision_date'.
  $permissions['edit field_ros_revision_date'] = array(
    'name' => 'edit field_ros_revision_date',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_service_levels'.
  $permissions['edit field_service_levels'] = array(
    'name' => 'edit field_service_levels',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_service_rotation'.
  $permissions['edit field_service_rotation'] = array(
    'name' => 'edit field_service_rotation',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_service_state'.
  $permissions['edit field_service_state'] = array(
    'name' => 'edit field_service_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_service_type'.
  $permissions['edit field_service_type'] = array(
    'name' => 'edit field_service_type',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_supporting_systems'.
  $permissions['edit field_supporting_systems'] = array(
    'name' => 'edit field_supporting_systems',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cmdb_id'.
  $permissions['edit own field_cmdb_id'] = array(
    'name' => 'edit own field_cmdb_id',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_criticality'.
  $permissions['edit own field_criticality'] = array(
    'name' => 'edit own field_criticality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_edit_state'.
  $permissions['edit own field_edit_state'] = array(
    'name' => 'edit own field_edit_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_information_class'.
  $permissions['edit own field_information_class'] = array(
    'name' => 'edit own field_information_class',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_internal_notes'.
  $permissions['edit own field_internal_notes'] = array(
    'name' => 'edit own field_internal_notes',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_operator'.
  $permissions['edit own field_operator'] = array(
    'name' => 'edit own field_operator',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ower_contact'.
  $permissions['edit own field_ower_contact'] = array(
    'name' => 'edit own field_ower_contact',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_quality'.
  $permissions['edit own field_quality'] = array(
    'name' => 'edit own field_quality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ros_date'.
  $permissions['edit own field_ros_date'] = array(
    'name' => 'edit own field_ros_date',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ros_link'.
  $permissions['edit own field_ros_link'] = array(
    'name' => 'edit own field_ros_link',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ros_revision_date'.
  $permissions['edit own field_ros_revision_date'] = array(
    'name' => 'edit own field_ros_revision_date',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_service_levels'.
  $permissions['edit own field_service_levels'] = array(
    'name' => 'edit own field_service_levels',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_service_rotation'.
  $permissions['edit own field_service_rotation'] = array(
    'name' => 'edit own field_service_rotation',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_service_state'.
  $permissions['edit own field_service_state'] = array(
    'name' => 'edit own field_service_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_service_type'.
  $permissions['edit own field_service_type'] = array(
    'name' => 'edit own field_service_type',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_supporting_systems'.
  $permissions['edit own field_supporting_systems'] = array(
    'name' => 'edit own field_supporting_systems',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cmdb_id'.
  $permissions['view field_cmdb_id'] = array(
    'name' => 'view field_cmdb_id',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_criticality'.
  $permissions['view field_criticality'] = array(
    'name' => 'view field_criticality',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_edit_state'.
  $permissions['view field_edit_state'] = array(
    'name' => 'view field_edit_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_information_class'.
  $permissions['view field_information_class'] = array(
    'name' => 'view field_information_class',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_internal_notes'.
  $permissions['view field_internal_notes'] = array(
    'name' => 'view field_internal_notes',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_operator'.
  $permissions['view field_operator'] = array(
    'name' => 'view field_operator',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ower_contact'.
  $permissions['view field_ower_contact'] = array(
    'name' => 'view field_ower_contact',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_quality'.
  $permissions['view field_quality'] = array(
    'name' => 'view field_quality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ros_date'.
  $permissions['view field_ros_date'] = array(
    'name' => 'view field_ros_date',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ros_link'.
  $permissions['view field_ros_link'] = array(
    'name' => 'view field_ros_link',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ros_revision_date'.
  $permissions['view field_ros_revision_date'] = array(
    'name' => 'view field_ros_revision_date',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_service_levels'.
  $permissions['view field_service_levels'] = array(
    'name' => 'view field_service_levels',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_service_rotation'.
  $permissions['view field_service_rotation'] = array(
    'name' => 'view field_service_rotation',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_service_state'.
  $permissions['view field_service_state'] = array(
    'name' => 'view field_service_state',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_service_type'.
  $permissions['view field_service_type'] = array(
    'name' => 'view field_service_type',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_supporting_systems'.
  $permissions['view field_supporting_systems'] = array(
    'name' => 'view field_supporting_systems',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cmdb_id'.
  $permissions['view own field_cmdb_id'] = array(
    'name' => 'view own field_cmdb_id',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_criticality'.
  $permissions['view own field_criticality'] = array(
    'name' => 'view own field_criticality',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_edit_state'.
  $permissions['view own field_edit_state'] = array(
    'name' => 'view own field_edit_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_information_class'.
  $permissions['view own field_information_class'] = array(
    'name' => 'view own field_information_class',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_internal_notes'.
  $permissions['view own field_internal_notes'] = array(
    'name' => 'view own field_internal_notes',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_operator'.
  $permissions['view own field_operator'] = array(
    'name' => 'view own field_operator',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ower_contact'.
  $permissions['view own field_ower_contact'] = array(
    'name' => 'view own field_ower_contact',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_quality'.
  $permissions['view own field_quality'] = array(
    'name' => 'view own field_quality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ros_date'.
  $permissions['view own field_ros_date'] = array(
    'name' => 'view own field_ros_date',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ros_link'.
  $permissions['view own field_ros_link'] = array(
    'name' => 'view own field_ros_link',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ros_revision_date'.
  $permissions['view own field_ros_revision_date'] = array(
    'name' => 'view own field_ros_revision_date',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_service_levels'.
  $permissions['view own field_service_levels'] = array(
    'name' => 'view own field_service_levels',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_service_rotation'.
  $permissions['view own field_service_rotation'] = array(
    'name' => 'view own field_service_rotation',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_service_state'.
  $permissions['view own field_service_state'] = array(
    'name' => 'view own field_service_state',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_service_type'.
  $permissions['view own field_service_type'] = array(
    'name' => 'view own field_service_type',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_supporting_systems'.
  $permissions['view own field_supporting_systems'] = array(
    'name' => 'view own field_supporting_systems',
    'roles' => array(
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
