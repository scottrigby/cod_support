<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function cod_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-conference-admin:admin/build/features
  $menu_links['menu-conference-admin:admin/build/features'] = array(
    'menu_name' => 'menu-conference-admin',
    'link_path' => 'admin/build/features',
    'router_path' => 'admin/build/features',
    'link_title' => 'Manage features',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'fragment' => 'cod',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage features');


  return $menu_links;
}
