<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
if (!empty($field_video)) {
        $thumbnail_link = $field_video[0]['thumbnail_path'];
        $thumbnail_link = drupal_realpath($thumbnail_link);
        $thumbnail_link = str_replace($_SERVER['DOCUMENT_ROOT'].'/','',$thumbnail_link);

        $video_link = $field_video[0]['video_url'];
}
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php  if (!empty($field_video)) : ?>
         <div class="print-video-thumbnail"><a href="<?php print $video_link ?>" target="_blank"><img src="<?php print $thumbnail_link ?>" alt="video thumbnail" /></a></div>
    <?php endif; ?>
    <?php print render($content); ?>
  </div>
</div>
