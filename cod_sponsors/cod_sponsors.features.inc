<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function cod_sponsors_context_default_contexts() {
  $items = array();

  $items['context_ui-section-sponsors'] = array(
    'namespace' => 'context_ui',
    'attribute' => 'section',
    'value' => 'sponsors',
    'description' => 'Sponsors page',
    'views' => array(
      '0' => 'Sponsors',
    ),
    'block' => array(
      'views_Sponsors-block_1' => array(
        'module' => 'views',
        'delta' => 'Sponsors-block_1',
        'weight' => 10,
        'region' => 'content',
        'status' => '0',
        'label' => 'Sponsors: Gold Sponsor Block',
        'type' => 'context_ui',
      ),
      'views_Sponsors-block_2' => array(
        'module' => 'views',
        'delta' => 'Sponsors-block_2',
        'weight' => 11,
        'region' => 'content',
        'status' => '0',
        'label' => 'Sponsors: Silver Sponsor Block',
        'type' => 'context_ui',
      ),
      'views_Sponsors-block_3' => array(
        'module' => 'views',
        'delta' => 'Sponsors-block_3',
        'weight' => 12,
        'region' => 'content',
        'status' => '0',
        'label' => 'Sponsors: Bronze Sponsor Block',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
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
