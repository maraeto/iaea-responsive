<div class="logo">
    <div class="container">
        <div class="row clearfix">
            <div class="col-lg-8 col-md-7 col-sm-6">
              <?php if ($logo): ?>
              <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
              </a>
              <?php endif; ?>
            </div>
            <div class="col-lg-4 col-md-5 col-sm-6 search">
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

                <nav class="navbar navbar-default" role="navigation">
                    <!-- Brand and toggle get grouped for better mobile display -->
                    <div class="navbar-header">
                      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#iaea-main-navigation">
                        <span class="sr-only">Toggle navigation</span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                      </button>
                    </div>

                    <!-- Collect the nav links, forms, and other content for toggling -->
                    <div class="collapse navbar-collapse" id="iaea-main-navigation">
                        <?php if (!empty($primary_nav))   : ?>
                            <?php print render($primary_nav); ?>
                        <?php endif; ?>
                        <?php if (!empty($secondary_nav)): ?>
                            <?php print render($secondary_nav); ?>
                        <?php endif; ?>
                        <?php if (!empty($page['navigation'])): ?>
                            <?php print render($page['navigation']); ?>
                        <?php endif; ?>

                        <?php if (!empty($page['social_media_nav'])): ?>
                          <?php print render($page['social_media_nav']); ?>
                        <?php endif; ?>
                    </div><!-- /.navbar-collapse -->
                </nav>
            </div>
        </div>
    </div>
</div><!-- /.navigation-main -->