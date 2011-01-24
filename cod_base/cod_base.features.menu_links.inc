<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function cod_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-conference-admin:79f090a8-755e-102e-a8fe-4040db1cdced
  $menu_links['menu-conference-admin:79f090a8-755e-102e-a8fe-4040db1cdced'] = array(
    'menu_name' => 'menu-conference-admin',
    'router_path' => 'node/%',
    'link_title' => 'COD help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'uuid' => '79f090a8-755e-102e-a8fe-4040db1cdced',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('COD help');


  return $menu_links;
}
