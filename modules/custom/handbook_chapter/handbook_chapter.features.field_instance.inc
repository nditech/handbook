<?php
/**
 * @file
 * handbook_chapter.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function handbook_chapter_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_chapter-comment_body'.
  $field_instances['comment-comment_node_chapter-comment_body'] = array(
    'bundle' => 'comment_node_chapter',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-chapter-field_content_paragraphs'.
  $field_instances['node-chapter-field_content_paragraphs'] = array(
    'bundle' => 'chapter',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_content_paragraphs',
    'label' => 'Content',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'media_full_width' => 'media_full_width',
        'media_half_width' => 'media_half_width',
        'media_half_width_float_left' => 'media_half_width_float_left',
        'resource' => 'resource',
        'text' => 'text',
      ),
      'bundle_weights' => array(
        'media_full_width' => -9,
        'media_half_width' => -7,
        'media_half_width_float_left' => -8,
        'resource' => -6,
        'text' => -10,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-chapter-field_lead_image'.
  $field_instances['node-chapter-field_lead_image'] = array(
    'bundle' => 'chapter',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => 'desktop',
          'image_link' => '',
          'lazyload' => 1,
          'lazyload_aspect_ratio' => 1,
          'picture_mapping' => 'manual_breakpoints',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_lead_image',
    'label' => 'Lead image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'desktop' => 'desktop',
        ),
        'manualcrop_styles_list' => array(
          'desktop' => 'desktop',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Comment');
  t('Content');
  t('Lead image');

  return $field_instances;
}
