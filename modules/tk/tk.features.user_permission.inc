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

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_criticality.
  $permissions['create field_criticality'] = array(
    'name' => 'create field_criticality',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_operator.
  $permissions['create field_operator'] = array(
    'name' => 'create field_operator',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ower_contact.
  $permissions['create field_ower_contact'] = array(
    'name' => 'create field_ower_contact',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_service_levels.
  $permissions['create field_service_levels'] = array(
    'name' => 'create field_service_levels',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_service_rotation.
  $permissions['create field_service_rotation'] = array(
    'name' => 'create field_service_rotation',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_service_state.
  $permissions['create field_service_state'] = array(
    'name' => 'create field_service_state',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_service_type.
  $permissions['create field_service_type'] = array(
    'name' => 'create field_service_type',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_supporting_systems.
  $permissions['create field_supporting_systems'] = array(
    'name' => 'create field_supporting_systems',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create service content.
  $permissions['create service content'] = array(
    'name' => 'create service content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: create service_owner content.
  $permissions['create service_owner content'] = array(
    'name' => 'create service_owner content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: create support_contact content.
  $permissions['create support_contact content'] = array(
    'name' => 'create support_contact content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any service content.
  $permissions['delete any service content'] = array(
    'name' => 'delete any service content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any service_owner content.
  $permissions['delete any service_owner content'] = array(
    'name' => 'delete any service_owner content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any support_contact content.
  $permissions['delete any support_contact content'] = array(
    'name' => 'delete any support_contact content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own service content.
  $permissions['delete own service content'] = array(
    'name' => 'delete own service content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own service_owner content.
  $permissions['delete own service_owner content'] = array(
    'name' => 'delete own service_owner content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own support_contact content.
  $permissions['delete own support_contact content'] = array(
    'name' => 'delete own support_contact content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any service content.
  $permissions['edit any service content'] = array(
    'name' => 'edit any service content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any service_owner content.
  $permissions['edit any service_owner content'] = array(
    'name' => 'edit any service_owner content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any support_contact content.
  $permissions['edit any support_contact content'] = array(
    'name' => 'edit any support_contact content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_criticality.
  $permissions['edit field_criticality'] = array(
    'name' => 'edit field_criticality',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_operator.
  $permissions['edit field_operator'] = array(
    'name' => 'edit field_operator',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ower_contact.
  $permissions['edit field_ower_contact'] = array(
    'name' => 'edit field_ower_contact',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_service_levels.
  $permissions['edit field_service_levels'] = array(
    'name' => 'edit field_service_levels',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_service_rotation.
  $permissions['edit field_service_rotation'] = array(
    'name' => 'edit field_service_rotation',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_service_state.
  $permissions['edit field_service_state'] = array(
    'name' => 'edit field_service_state',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_service_type.
  $permissions['edit field_service_type'] = array(
    'name' => 'edit field_service_type',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_supporting_systems.
  $permissions['edit field_supporting_systems'] = array(
    'name' => 'edit field_supporting_systems',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_criticality.
  $permissions['edit own field_criticality'] = array(
    'name' => 'edit own field_criticality',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_operator.
  $permissions['edit own field_operator'] = array(
    'name' => 'edit own field_operator',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ower_contact.
  $permissions['edit own field_ower_contact'] = array(
    'name' => 'edit own field_ower_contact',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_service_levels.
  $permissions['edit own field_service_levels'] = array(
    'name' => 'edit own field_service_levels',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_service_rotation.
  $permissions['edit own field_service_rotation'] = array(
    'name' => 'edit own field_service_rotation',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_service_state.
  $permissions['edit own field_service_state'] = array(
    'name' => 'edit own field_service_state',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_service_type.
  $permissions['edit own field_service_type'] = array(
    'name' => 'edit own field_service_type',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_supporting_systems.
  $permissions['edit own field_supporting_systems'] = array(
    'name' => 'edit own field_supporting_systems',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own service content.
  $permissions['edit own service content'] = array(
    'name' => 'edit own service content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own service_owner content.
  $permissions['edit own service_owner content'] = array(
    'name' => 'edit own service_owner content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own support_contact content.
  $permissions['edit own support_contact content'] = array(
    'name' => 'edit own support_contact content',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'tjenesteadmin',
    ),
    'module' => 'node',
  );

  // Exported permission: view field_criticality.
  $permissions['view field_criticality'] = array(
    'name' => 'view field_criticality',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_operator.
  $permissions['view field_operator'] = array(
    'name' => 'view field_operator',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ower_contact.
  $permissions['view field_ower_contact'] = array(
    'name' => 'view field_ower_contact',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_service_levels.
  $permissions['view field_service_levels'] = array(
    'name' => 'view field_service_levels',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_service_rotation.
  $permissions['view field_service_rotation'] = array(
    'name' => 'view field_service_rotation',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_service_state.
  $permissions['view field_service_state'] = array(
    'name' => 'view field_service_state',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_service_type.
  $permissions['view field_service_type'] = array(
    'name' => 'view field_service_type',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_supporting_systems.
  $permissions['view field_supporting_systems'] = array(
    'name' => 'view field_supporting_systems',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_criticality.
  $permissions['view own field_criticality'] = array(
    'name' => 'view own field_criticality',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_operator.
  $permissions['view own field_operator'] = array(
    'name' => 'view own field_operator',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ower_contact.
  $permissions['view own field_ower_contact'] = array(
    'name' => 'view own field_ower_contact',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_service_levels.
  $permissions['view own field_service_levels'] = array(
    'name' => 'view own field_service_levels',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_service_rotation.
  $permissions['view own field_service_rotation'] = array(
    'name' => 'view own field_service_rotation',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_service_state.
  $permissions['view own field_service_state'] = array(
    'name' => 'view own field_service_state',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_service_type.
  $permissions['view own field_service_type'] = array(
    'name' => 'view own field_service_type',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_supporting_systems.
  $permissions['view own field_supporting_systems'] = array(
    'name' => 'view own field_supporting_systems',
    'roles' => array(
      0 => 'druapladmin',
      1 => 'ita',
      2 => 'tjenesteadmin',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
