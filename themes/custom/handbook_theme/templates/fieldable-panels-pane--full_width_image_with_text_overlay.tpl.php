<?php
$background = $field_image[0]['uri'];
        $background = drupal_realpath($background);
        $background = str_replace($_SERVER['DOCUMENT_ROOT'].'/','',$background);
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="pane-wrapper" style="background-image:url(/<?php print $background ?>);">
  	<?php print render($title_suffix); ?>
  	<?php print render($content); ?>
  </div>
</div>
