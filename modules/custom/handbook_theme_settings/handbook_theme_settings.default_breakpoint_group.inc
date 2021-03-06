<?php
/**
 * @file
 * handbook_theme_settings.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function handbook_theme_settings_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'handbook';
  $breakpoint_group->name = 'Handbook';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.handbook.desktop',
    1 => 'breakpoints.theme.handbook.tablet',
    2 => 'breakpoints.theme.handbook.mobile',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['handbook'] = $breakpoint_group;

  return $export;
}
