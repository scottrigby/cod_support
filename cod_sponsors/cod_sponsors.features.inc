<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function cod_sponsors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function cod_sponsors_imagecache_default_presets() {
  $items = array(
    'sponsor_logo_bronze' => array(),
    'sponsor_logo_callout' => array(),
    'sponsor_logo_gold' => array(),
    'sponsor_logo_platinum' => array(),
    'sponsor_logo_silver' => array(),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function cod_sponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'module' => 'features',
      'description' => t('An event sponsor'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function cod_sponsors_views_api() {
  return array(
    'api' => '2',
  );
}
