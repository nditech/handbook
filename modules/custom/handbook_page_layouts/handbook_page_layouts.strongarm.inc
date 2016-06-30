<?php
/**
 * @file
 * handbook_page_layouts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function handbook_page_layouts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-logo' => 'blockify-logo',
    'blockify-site-name' => 'blockify-site-name',
    'blockify-site-slogan' => 'blockify-site-slogan',
    'blockify-page-title' => 'blockify-page-title',
    'blockify-breadcrumb' => 0,
    'blockify-tabs' => 0,
    'blockify-messages' => 0,
    'blockify-actions' => 0,
    'blockify-feed-icons' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  return $export;
}
