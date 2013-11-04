<div class="tab-pane <?php echo $settings['active_class']; ?>" id="<?php echo $settings['tab_id']; ?>">
<?php if (isset($content->title)): ?>
  <h2 class="pane-title <?php print (isset($settings['top_color'])) ? $settings['top_color'] : 'blue'; ?>"><?php print $content->title; ?></h2>
<?php endif ?>
  <div class="pane-content">
    <?php print render($content->content); ?>
  </div>
</div>
