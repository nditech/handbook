<?php
/**
 * @file
 * handbook_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function handbook_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function handbook_paragraphs_paragraphs_info() {
  $items = array(
    'media_full_width' => array(
      'name' => 'Media full width',
      'bundle' => 'media_full_width',
      'locked' => '1',
    ),
    'media_half_width' => array(
      'name' => 'Media half width float right',
      'bundle' => 'media_half_width',
      'locked' => '1',
    ),
    'media_half_width_float_left' => array(
      'name' => 'Media half width float left',
      'bundle' => 'media_half_width_float_left',
      'locked' => '1',
    ),
    'resource' => array(
      'name' => 'Resource',
      'bundle' => 'resource',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Text',
      'bundle' => 'text',
      'locked' => '1',
    ),
  );
  return $items;
}
