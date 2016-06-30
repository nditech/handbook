<?php
/**
 * @file
 * handbook_page_layouts.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function handbook_page_layouts_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['blockify-blockify-logo'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'blockify-logo',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'handbook' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'handbook',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-page-title'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'blockify-page-title',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'handbook' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'handbook',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-site-name'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'blockify-site-name',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'handbook' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'handbook',
        'weight' => -10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-site-slogan'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'blockify-site-slogan',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'handbook' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'handbook',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
