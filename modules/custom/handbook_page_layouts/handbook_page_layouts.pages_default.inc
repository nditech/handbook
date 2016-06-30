<?php
/**
 * @file
 * handbook_page_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function handbook_page_layouts_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'homepage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66344714-7118-4e4b-b2f7-07e3cd9a9c03';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a8a4ef33-df77-491e-ba17-f3c891a7e466';
    $pane->panel = 'one_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:75';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a8a4ef33-df77-491e-ba17-f3c891a7e466';
    $display->content['new-a8a4ef33-df77-491e-ba17-f3c891a7e466'] = $pane;
    $display->panels['one_main'][0] = 'new-a8a4ef33-df77-491e-ba17-f3c891a7e466';
    $pane = new stdClass();
    $pane->pid = 'new-cc1e185e-4bf2-4e91-9162-318bbcdb73b3';
    $pane->panel = 'one_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:78';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc1e185e-4bf2-4e91-9162-318bbcdb73b3';
    $display->content['new-cc1e185e-4bf2-4e91-9162-318bbcdb73b3'] = $pane;
    $display->panels['one_main'][1] = 'new-cc1e185e-4bf2-4e91-9162-318bbcdb73b3';
    $pane = new stdClass();
    $pane->pid = 'new-5180e5e2-6dca-4ce8-b618-3b1b3ed79ff8';
    $pane->panel = 'one_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:70';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5180e5e2-6dca-4ce8-b618-3b1b3ed79ff8';
    $display->content['new-5180e5e2-6dca-4ce8-b618-3b1b3ed79ff8'] = $pane;
    $display->panels['one_main'][2] = 'new-5180e5e2-6dca-4ce8-b618-3b1b3ed79ff8';
    $pane = new stdClass();
    $pane->pid = 'new-31951870-0823-474e-9c10-fe84fc5f8a93';
    $pane->panel = 'one_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:73';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '31951870-0823-474e-9c10-fe84fc5f8a93';
    $display->content['new-31951870-0823-474e-9c10-fe84fc5f8a93'] = $pane;
    $display->panels['one_main'][3] = 'new-31951870-0823-474e-9c10-fe84fc5f8a93';
    $pane = new stdClass();
    $pane->pid = 'new-49607f42-0f16-4e13-8227-3bde726bb14d';
    $pane->panel = 'one_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:48';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '49607f42-0f16-4e13-8227-3bde726bb14d';
    $display->content['new-49607f42-0f16-4e13-8227-3bde726bb14d'] = $pane;
    $display->panels['one_main'][4] = 'new-49607f42-0f16-4e13-8227-3bde726bb14d';
    $pane = new stdClass();
    $pane->pid = 'new-2c43d75a-3207-4e62-806c-4021805b57ac';
    $pane->panel = 'one_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:43';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2c43d75a-3207-4e62-806c-4021805b57ac';
    $display->content['new-2c43d75a-3207-4e62-806c-4021805b57ac'] = $pane;
    $display->panels['one_main'][5] = 'new-2c43d75a-3207-4e62-806c-4021805b57ac';
    $pane = new stdClass();
    $pane->pid = 'new-068add28-0fe4-4166-8c42-b6b0c3241bc2';
    $pane->panel = 'one_main';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:77';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '068add28-0fe4-4166-8c42-b6b0c3241bc2';
    $display->content['new-068add28-0fe4-4166-8c42-b6b0c3241bc2'] = $pane;
    $display->panels['one_main'][6] = 'new-068add28-0fe4-4166-8c42-b6b0c3241bc2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a8a4ef33-df77-491e-ba17-f3c891a7e466';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
