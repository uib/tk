<?php
/**
 * @file
 * tk_setup.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tk_setup_user_default_roles() {
  $roles = array();

  // Exported role: druapladmin.
  $roles['druapladmin'] = array(
    'name' => 'druapladmin',
    'weight' => '2',
  );

  // Exported role: ita.
  $roles['ita'] = array(
    'name' => 'ita',
    'weight' => '3',
  );

  // Exported role: tjenesteadmin.
  $roles['tjenesteadmin'] = array(
    'name' => 'tjenesteadmin',
    'weight' => '4',
  );

  return $roles;
}
