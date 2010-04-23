<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _cod_session_content_default_fields() {
  $fields = array();

  // Exported field: field_day
  $fields[] = array(
    'field_name' => 'field_day',
    'type_name' => 'session',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '01| Day 1
02| Day 2
03| Day 3',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Day',
      'weight' => '31',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_slot
  $fields[] = array(
    'field_name' => 'field_slot',
    'type_name' => 'session',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1030-1130| 10:30am-11:30am
1300-1400| 1:00pm-2:00pm',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Time Slot',
      'weight' => '32',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  array(
    t('Day'),
    t('Time Slot'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_flag_default_flags().
 */
function _cod_session_flag_default_flags() {
$flags = array();
// Exported flag: "Session Vote".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'session_vote',
  'title' => 'Session Vote',
  'global' => '0',
  'types' => 
  array (
    0 => 'session',
  ),
  'flag_short' => 'Vote for this session',
  'flag_long' => 'Vote for this session',
  'flag_message' => 'Your vote has been recorded!',
  'unflag_short' => 'Retract vote',
  'unflag_long' => 'Retract your vote for this session.',
  'unflag_message' => 'Your vote has been retracted.',
  'unflag_denied_text' => '',
  'link_type' => 'toggle',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => '2',
    ),
    'unflag' => 
    array (
      0 => '2',
    ),
  ),
  'show_on_page' => 1,
  'show_on_teaser' => 0,
  'show_on_form' => 0,
  'access_author' => '',
  'i18n' => 0,
  'flag_confirmation' => '',
  'unflag_confirmation' => '',
  'api_version' => 2,
  'module' => 'cod_session',
  'locked' => 
  array (
    0 => 'name',
  ),
);
return $flags;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _cod_session_user_default_permissions() {
  $permissions = array();

  // Exported permission: create session content
  $permissions[] = array(
    'name' => 'create session content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own session content
  $permissions[] = array(
    'name' => 'delete own session content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own session content
  $permissions[] = array(
    'name' => 'edit own session content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
