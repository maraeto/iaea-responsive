<ul class="nav nav-tabs bootstrap-tabs" id="tabs-frontpage">
  <?php foreach ($tabs as $tab_id => $tab) : ?>
  <li class="<?php echo $tab['class']; ?>"><a data-toggle="tab" href="#<?php echo $tab['id']; ?>"><?php echo $tab['title']; ?></a></li>
  <?php endforeach; ?>
</ul>

<div class="tab-content">
  <?php print render($content); ?>
</div>
