<?php
/**
 * @file
 * uib_setup.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uib_setup_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'druapladmin' => 'druapladmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'druapladmin' => 'druapladmin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'druapladmin' => 'druapladmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'druapladmin' => 'druapladmin',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'druapladmin' => 'druapladmin',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'create field_criticality'.
  $permissions['create field_criticality'] = array(
    'name' => 'create field_criticality',
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
      'druapladmin' => 'druapladmin',
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

  // Exported permission: 'create service content'.
  $permissions['create service content'] = array(
    'name' => 'create service content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service_owner content'.
  $permissions['create service_owner content'] = array(
    'name' => 'create service_owner content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create support_contact content'.
  $permissions['create support_contact content'] = array(
    'name' => 'create support_contact content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service content'.
  $permissions['delete any service content'] = array(
    'name' => 'delete any service content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any service_owner content'.
  $permissions['delete any service_owner content'] = array(
    'name' => 'delete any service_owner content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any support_contact content'.
  $permissions['delete any support_contact content'] = array(
    'name' => 'delete any support_contact content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service content'.
  $permissions['delete own service content'] = array(
    'name' => 'delete own service content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_owner content'.
  $permissions['delete own service_owner content'] = array(
    'name' => 'delete own service_owner content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own support_contact content'.
  $permissions['delete own support_contact content'] = array(
    'name' => 'delete own support_contact content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in service_business_levels'.
  $permissions['delete terms in service_business_levels'] = array(
    'name' => 'delete terms in service_business_levels',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_classes'.
  $permissions['delete terms in service_classes'] = array(
    'name' => 'delete terms in service_classes',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in service_roles'.
  $permissions['delete terms in service_roles'] = array(
    'name' => 'delete terms in service_roles',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any service content'.
  $permissions['edit any service content'] = array(
    'name' => 'edit any service content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any service_owner content'.
  $permissions['edit any service_owner content'] = array(
    'name' => 'edit any service_owner content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any support_contact content'.
  $permissions['edit any support_contact content'] = array(
    'name' => 'edit any support_contact content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_criticality'.
  $permissions['edit field_criticality'] = array(
    'name' => 'edit field_criticality',
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
      'druapladmin' => 'druapladmin',
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

  // Exported permission: 'edit own field_criticality'.
  $permissions['edit own field_criticality'] = array(
    'name' => 'edit own field_criticality',
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
      'druapladmin' => 'druapladmin',
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

  // Exported permission: 'edit own service content'.
  $permissions['edit own service content'] = array(
    'name' => 'edit own service content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_owner content'.
  $permissions['edit own service_owner content'] = array(
    'name' => 'edit own service_owner content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own support_contact content'.
  $permissions['edit own support_contact content'] = array(
    'name' => 'edit own support_contact content',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in service_business_levels'.
  $permissions['edit terms in service_business_levels'] = array(
    'name' => 'edit terms in service_business_levels',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_classes'.
  $permissions['edit terms in service_classes'] = array(
    'name' => 'edit terms in service_classes',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in service_roles'.
  $permissions['edit terms in service_roles'] = array(
    'name' => 'edit terms in service_roles',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_criticality'.
  $permissions['view field_criticality'] = array(
    'name' => 'view field_criticality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_operator'.
  $permissions['view field_operator'] = array(
    'name' => 'view field_operator',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ower_contact'.
  $permissions['view field_ower_contact'] = array(
    'name' => 'view field_ower_contact',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_quality'.
  $permissions['view field_quality'] = array(
    'name' => 'view field_quality',
    'roles' => array(
      'druapladmin' => 'druapladmin',
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_service_levels'.
  $permissions['view field_service_levels'] = array(
    'name' => 'view field_service_levels',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_service_rotation'.
  $permissions['view field_service_rotation'] = array(
    'name' => 'view field_service_rotation',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_service_state'.
  $permissions['view field_service_state'] = array(
    'name' => 'view field_service_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_service_type'.
  $permissions['view field_service_type'] = array(
    'name' => 'view field_service_type',
    'roles' => array(
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

  // Exported permission: 'view own field_criticality'.
  $permissions['view own field_criticality'] = array(
    'name' => 'view own field_criticality',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_operator'.
  $permissions['view own field_operator'] = array(
    'name' => 'view own field_operator',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ower_contact'.
  $permissions['view own field_ower_contact'] = array(
    'name' => 'view own field_ower_contact',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_quality'.
  $permissions['view own field_quality'] = array(
    'name' => 'view own field_quality',
    'roles' => array(
      'druapladmin' => 'druapladmin',
      'ita' => 'ita',
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_service_levels'.
  $permissions['view own field_service_levels'] = array(
    'name' => 'view own field_service_levels',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_service_rotation'.
  $permissions['view own field_service_rotation'] = array(
    'name' => 'view own field_service_rotation',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_service_state'.
  $permissions['view own field_service_state'] = array(
    'name' => 'view own field_service_state',
    'roles' => array(
      'tjenesteadmin' => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_service_type'.
  $permissions['view own field_service_type'] = array(
    'name' => 'view own field_service_type',
    'roles' => array(
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
