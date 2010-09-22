<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function cod_session_user_default_permissions() {
  $permissions = array();

  // Exported permission: create session content
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own session content
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(),
  );

  // Exported permission: edit field_accepted
  $permissions['edit field_accepted'] = array(
    'name' => 'edit field_accepted',
    'roles' => array(),
  );

  // Exported permission: edit field_day
  $permissions['edit field_day'] = array(
    'name' => 'edit field_day',
    'roles' => array(),
  );

  // Exported permission: edit field_room
  $permissions['edit field_room'] = array(
    'name' => 'edit field_room',
    'roles' => array(),
  );

  // Exported permission: edit field_skill_level
  $permissions['edit field_skill_level'] = array(
    'name' => 'edit field_skill_level',
    'roles' => array(),
  );

  // Exported permission: edit field_slot
  $permissions['edit field_slot'] = array(
    'name' => 'edit field_slot',
    'roles' => array(),
  );

  // Exported permission: edit field_sponsorship_level
  $permissions['edit field_sponsorship_level'] = array(
    'name' => 'edit field_sponsorship_level',
    'roles' => array(),
  );

  // Exported permission: edit field_track
  $permissions['edit field_track'] = array(
    'name' => 'edit field_track',
    'roles' => array(),
  );

  // Exported permission: edit own session content
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(),
  );

  // Exported permission: view field_accepted
  $permissions['view field_accepted'] = array(
    'name' => 'view field_accepted',
    'roles' => array(),
  );

  // Exported permission: view field_day
  $permissions['view field_day'] = array(
    'name' => 'view field_day',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_room
  $permissions['view field_room'] = array(
    'name' => 'view field_room',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_skill_level
  $permissions['view field_skill_level'] = array(
    'name' => 'view field_skill_level',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_slot
  $permissions['view field_slot'] = array(
    'name' => 'view field_slot',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_track
  $permissions['view field_track'] = array(
    'name' => 'view field_track',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
