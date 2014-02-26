<div class="logo">
    <div class="container">
        <div class="row clearfix">
            <div class="col-lg-8 col-md-7 col-sm-6">
              <?php if ($logo): ?>
                <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                  <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="img-responsive" />
                </a>
              <?php endif; ?>
            </div>
            <div class="search col-lg-4 col-md-5 col-sm-6 pull-righ">
              <?php if (!empty($page['search_box'])): ?>
                <?php print render($page['search_box']); ?>
              <?php endif; ?>
            </div>
        </div>
    </div>
</div>



<div class="navigation-main">
    <div class="container space-bottom">
        <div class="row clearfix">
            <div class="col-md-12">

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
</div>
</div>
</div>
</div>

<div class="container">
  <div class="row clearfix">

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
    <div class="row clearfix">
      <?php print render($page['doormat']); ?>
    </div>
  </div>
</div>
<?php endif; ?>

<footer class="footer">
    <div class="container">
      <div class="row clearfix">
        <div class="col-sm-6">
            <div class="row">
              <?php if (!empty($page['footer_address'])): ?>
                <?php print render($page['footer_address']); ?>
              <?php endif; ?>
            </div>
        </div>
        <div class="col-sm-6">
          <?php if (!empty($page['footer_nav'])): ?>
            <?php print render($page['footer_nav']); ?>
          <?php endif; ?>
        </div>
      </div>
    </div>
</footer>
