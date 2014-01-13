<header id="navbar" role="banner">
    <div class="container">
        <div class="row clearfix">
            <div class="col-md-8 column">
              <?php if ($logo): ?>
                <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                  <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
                </a>
              <?php endif; ?>
            </div>
            <div class="col-md-4 column">
                <div class="row pull-right clearfix">
                    <div class="col-md-12 column">
                        <?php if (!empty($page['social_media'])): ?>
                          <?php print render($page['social_media']); ?>
                        <?php endif; ?>
                    </div>
                </div>
                <div class="text-right pull-right search-field">
                    <?php if (!empty($page['search_box'])): ?>
                      <?php print render($page['search_box']); ?>
                    <?php endif; ?>
                </div>
            </div>
        </div>
    </div>
</header>

  <div class="<?php print $navbar_classes; ?>">
    <div class="navbar-header" role="navigation">

      <?php if (!empty($site_name)): ?>
        <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
      <?php endif; ?>
      <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
    </div>

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
      <div class="navbar-collapse collapse">
        <nav role="navigation">
          <?php if (!empty($primary_nav)): ?>
            <?php print render($primary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($secondary_nav)): ?>
            <?php print render($secondary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($page['navigation'])): ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>
        </nav>
      </div>
    <?php endif; ?>

  </div>

<div class="main-container container">
  <div class="row">

  <?php if (!empty($breadcrumb)): ?>
    <div class="col-md-12">
      <?php print $breadcrumb; endif;?>
    </div>

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <section<?php print $content_column_class; ?>>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>
  </div>
</div>


<?php if ($page['doormat']): ?>
  <div class="doormat">
    <div class="container">
      <?php print render($page['doormat']); ?>
    </div>
  </div> <!-- /.doormat -->
<?php endif; ?>

<footer class="footer">
  <?php #print render($page['footer']); ?>
    <div class="container">
      <div class="row">
        <div class="col-md-4 footer-address">
          <?php if (!empty($page['footer_address'])): ?>
            <?php print render($page['footer_address']); ?>
          <?php endif; ?>
        </div>
        <div class="col-md-8 footer-nav text-right">
            <?php if (!empty($page['footer_nav'])): ?>
              <?php print render($page['footer_nav']); ?>
            <?php endif; ?>
        </div>
</footer>
<script>
/* drop down menu on hover */
  jQuery(document).ready(function(){
    jQuery('ul.nav li.dropdown, ul.nav li.dropdown-submenu').hover(function() {
      jQuery(this).find('.dropdown-menu').stop(true, true).delay(200).fadeIn(200);
    }, function() {
      jQuery(this).find('.dropdown-menu').stop(true, true).delay(200).fadeOut(200);
    });
/* follow the link on */
    jQuery('ul.nav li.dropdown, ul.nav li.dropdown-submenu').click( function(e) {
      e.stopPropagation();
} );
});
</script>
