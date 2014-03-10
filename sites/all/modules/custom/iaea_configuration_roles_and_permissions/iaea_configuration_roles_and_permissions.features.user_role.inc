<?php
/**
 * @file
 * iaea_configuration_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function iaea_configuration_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 5,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 2,
  );

  // Exported role: Editor in chief.
  $roles['Editor in chief'] = array(
    'name' => 'Editor in chief',
    'weight' => 3,
  );

  // Exported role: Tech QA.
  $roles['Tech QA'] = array(
    'name' => 'Tech QA',
    'weight' => 4,
  );

  return $roles;
}
