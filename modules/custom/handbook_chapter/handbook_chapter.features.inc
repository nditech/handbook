<?php
/**
 * @file
 * handbook_chapter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function handbook_chapter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function handbook_chapter_node_info() {
  $items = array(
    'chapter' => array(
      'name' => t('Chapter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
