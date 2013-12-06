<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="row">
      <?php print $content['top']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['first'] || $content['second'] || $content['third'] || $content['fourth'] || $content['fifth'] || $content['sixth']): ?>
    <div class="row"> <!-- @TODO: Add extra classes -->
      <?php print $content['first']; ?>
      <?php print $content['second']; ?>
      <?php print $content['third']; ?>
      <?php print $content['fourth']; ?>
      <?php print $content['fifth']; ?>
      <?php print $content['sixth']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['middle']): ?>
    <div class="row">
      <?php print $content['middle']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['first2'] || $content['second2'] || $content['third2'] || $content['fourth2'] || $content['fifth2'] || $content['sixth2']): ?>
    <div class="row"> <!-- @TODO: Add extra classes -->
      <?php print $content['first2']; ?>
      <?php print $content['second2']; ?>
      <?php print $content['third2']; ?>
      <?php print $content['fourth2']; ?>
      <?php print $content['fifth2']; ?>
      <?php print $content['sixth2']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div class="row">
      <?php print $content['bottom']; ?>
    </div>
  <?php endif ?>
</div>
