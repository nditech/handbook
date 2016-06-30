<?php
/**
 * @file
 * handbook_page_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function handbook_page_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'blockify-blockify-site-name' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-name',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'blockify-blockify-site-slogan' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-slogan',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_title';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['page_title'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'print_toc';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'all-chapters/printpdf' => 'all-chapters/printpdf',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-all_chapters_for_print-block_1' => array(
          'module' => 'views',
          'delta' => 'all_chapters_for_print-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['print_toc'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources' => 'resources',
        'all-chapters' => 'all-chapters',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-resources-block' => array(
          'module' => 'views',
          'delta' => 'resources-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-resources-block_1' => array(
          'module' => 'views',
          'delta' => 'resources-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['resources'] = $context;

  return $export;
}
