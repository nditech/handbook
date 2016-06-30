<?php

/**
 * @file
 * Template.php - process theme data for your sub-theme.
 */


/**
 * Override or insert variables for the html template.
 */
/* -- Delete this line if you want to use this function
function handbook_preprocess_html(&$vars) {
}
function handbook_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function handbook_preprocess_page(&$vars) {
}
function handbook_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function handbook_preprocess_node(&$vars) {
}
function handbook_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function handbook_preprocess_comment(&$vars) {
}
function handbook_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function handbook_preprocess_block(&$vars) {
}
function handbook_process_block(&$vars) {
}
// */


/**
 * Implements template_process_html().
 *
 * Override or insert variables into the page template for HTML output.
 */
function handbook_process_html(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_html_alter($variables);
  }
}

/*
 * Implements template_process_page().
 */
function handbook_process_page(&$variables, $hook) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}
