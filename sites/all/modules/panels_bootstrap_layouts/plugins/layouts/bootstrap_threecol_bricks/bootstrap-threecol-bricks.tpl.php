<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['hero-banner']): ?>
    <div class="hero">
      <div class="container">
        <div class="row clearfix">
          <?php print $content['hero-banner']; ?>
        </div>
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['top']): ?>
    <div class="row">
      <?php print $content['top']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['left'] || $content['middle'] || $content['right']): ?>
    <div class="row"> <!-- @TODO: Add extra classes -->
      <?php print $content['left']; ?>
      <?php print $content['middle']; ?>
      <?php print $content['right']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['brick']): ?>
    <div class="row">
      <?php print $content['brick']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['left1'] || $content['middle1'] || $content['right1']): ?>
    <div class="row"> <!-- @TODO: Add extra classes -->
      <?php print $content['left1']; ?>
      <?php print $content['middle1']; ?>
      <?php print $content['right1']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div class="row">
      <?php print $content['bottom']; ?>
    </div>
  <?php endif ?>
</div>
