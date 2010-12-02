<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function cod_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-conference-admin
  $menus['menu-conference-admin'] = array(
    'menu_name' => 'menu-conference-admin',
    'title' => 'Conference Management',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Conference Management');


  return $menus;
}
