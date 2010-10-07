<?php

/**
 * Implementation of hook_user_default_roles().
 */
function cod_session_user_default_roles() {
  $roles = array();

  // Exported role: test-asd
  $roles['session_organizer'] = array(
    'name' => 'session organizer',
  );

  return $roles;
}
