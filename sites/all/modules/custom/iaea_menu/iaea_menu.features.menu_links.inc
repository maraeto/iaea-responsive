<?php
/**
 * @file
 * iaea_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function iaea_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:about
  $menu_links['main-menu_about-us:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_biography:node/3003
  $menu_links['main-menu_biography:node/3003'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3003',
    'router_path' => 'node/%',
    'link_title' => 'Biography',
    'options' => array(
      'identifier' => 'main-menu_biography:node/3003',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_iaea-director-general:about/dg',
  );
  // Exported menu link: main-menu_board-of-governors:node/2997
  $menu_links['main-menu_board-of-governors:node/2997'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2997',
    'router_path' => 'node/%',
    'link_title' => 'Board of Governors',
    'options' => array(
      'identifier' => 'main-menu_board-of-governors:node/2997',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_policy-bodies:node/2995',
  );
  // Exported menu link: main-menu_business-opportunities:node/2999
  $menu_links['main-menu_business-opportunities:node/2999'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2999',
    'router_path' => 'node/%',
    'link_title' => 'Business Opportunities',
    'options' => array(
      'identifier' => 'main-menu_business-opportunities:node/2999',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about',
  );
  // Exported menu link: main-menu_dgs-statement-menu-position-rule:menu-position/4
  $menu_links['main-menu_dgs-statement-menu-position-rule:menu-position/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/4',
    'router_path' => 'menu-position/%',
    'link_title' => 'DG\'s Statement (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_dgs-statement-menu-position-rule:menu-position/4',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_dgs-statements:newscenter/statements',
  );
  // Exported menu link: main-menu_dgs-statements:newscenter/statements
  $menu_links['main-menu_dgs-statements:newscenter/statements'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newscenter/statements',
    'router_path' => 'newscenter/statements',
    'link_title' => 'DG\'s Statements',
    'options' => array(
      'identifier' => 'main-menu_dgs-statements:newscenter/statements',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newscenter:newscenter',
  );
  // Exported menu link: main-menu_divider:http://#divider
  $menu_links['main-menu_divider:http://#divider'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://#divider',
    'router_path' => '',
    'link_title' => 'DIVIDER',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_divider:http://#divider',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about',
  );
  // Exported menu link: main-menu_focus-page-menu-position-rule:menu-position/1
  $menu_links['main-menu_focus-page-menu-position-rule:menu-position/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/1',
    'router_path' => 'menu-position/%',
    'link_title' => 'Focus Page (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_focus-page-menu-position-rule:menu-position/1',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'main-menu_topics-in-focus:newscenter/focus',
  );
  // Exported menu link: main-menu_general-conference:node/2996
  $menu_links['main-menu_general-conference:node/2996'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2996',
    'router_path' => 'node/%',
    'link_title' => 'General Conference',
    'options' => array(
      'identifier' => 'main-menu_general-conference:node/2996',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_policy-bodies:node/2995',
  );
  // Exported menu link: main-menu_heading-multimedia:http://#dropdown-header
  $menu_links['main-menu_heading-multimedia:http://#dropdown-header'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://#dropdown-header',
    'router_path' => '',
    'link_title' => 'HEADING Multimedia',
    'options' => array(
      'attributes' => array(
        'title' => 'Multimedia',
      ),
      'identifier' => 'main-menu_heading-multimedia:http://#dropdown-header',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newscenter:newscenter',
  );
  // Exported menu link: main-menu_iaea-director-general:about/dg
  $menu_links['main-menu_iaea-director-general:about/dg'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/dg',
    'router_path' => 'about/dg',
    'link_title' => 'IAEA Director General',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_iaea-director-general:about/dg',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about',
  );
  // Exported menu link: main-menu_latest-from-iaea:node/12
  $menu_links['main-menu_latest-from-iaea:node/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Latest From IAEA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_latest-from-iaea:node/12',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newscenter:newscenter',
  );
  // Exported menu link: main-menu_media-advisories:newscenter/mediaadvisories
  $menu_links['main-menu_media-advisories:newscenter/mediaadvisories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newscenter/mediaadvisories',
    'router_path' => 'newscenter/mediaadvisories',
    'link_title' => 'Media Advisories',
    'options' => array(
      'identifier' => 'main-menu_media-advisories:newscenter/mediaadvisories',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newscenter:newscenter',
  );
  // Exported menu link: main-menu_media-advisory-menu-position-rule:menu-position/8
  $menu_links['main-menu_media-advisory-menu-position-rule:menu-position/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/8',
    'router_path' => 'menu-position/%',
    'link_title' => 'Media Advisory (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_media-advisory-menu-position-rule:menu-position/8',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_media-advisories:newscenter/mediaadvisories',
  );
  // Exported menu link: main-menu_member-states:node/2998
  $menu_links['main-menu_member-states:node/2998'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2998',
    'router_path' => 'node/%',
    'link_title' => 'Member States',
    'options' => array(
      'identifier' => 'main-menu_member-states:node/2998',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_policy-bodies:node/2995',
  );
  // Exported menu link: main-menu_multimedia:newscenter/multimedia
  $menu_links['main-menu_multimedia:newscenter/multimedia'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newscenter/multimedia',
    'router_path' => 'newscenter/multimedia',
    'link_title' => 'Multimedia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_multimedia:newscenter/multimedia',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newscenter:newscenter',
  );
  // Exported menu link: main-menu_news-story-menu-position-rule:menu-position/2
  $menu_links['main-menu_news-story-menu-position-rule:menu-position/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/2',
    'router_path' => 'menu-position/%',
    'link_title' => 'News Story (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_news-story-menu-position-rule:menu-position/2',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_top-stories-and-news:newscenter/news',
  );
  // Exported menu link: main-menu_newscenter:newscenter
  $menu_links['main-menu_newscenter:newscenter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newscenter',
    'router_path' => 'newscenter',
    'link_title' => 'Newscenter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_newscenter:newscenter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_nucleus:node/41
  $menu_links['main-menu_nucleus:node/41'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Nucleus',
    'options' => array(
      'identifier' => 'main-menu_nucleus:node/41',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_our-work:node/11
  $menu_links['main-menu_our-work:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Our Work',
    'options' => array(
      'attributes' => array(
        'title' => 'What We Do',
      ),
      'identifier' => 'main-menu_our-work:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_photo-essays-menu-position-rule:menu-position/5
  $menu_links['main-menu_photo-essays-menu-position-rule:menu-position/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/5',
    'router_path' => 'menu-position/%',
    'link_title' => 'Photo Essays (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_photo-essays-menu-position-rule:menu-position/5',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_photo-essays:newscenter/multimedia/photoessays',
  );
  // Exported menu link: main-menu_photo-essays:newscenter/multimedia/photoessays
  $menu_links['main-menu_photo-essays:newscenter/multimedia/photoessays'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newscenter/multimedia/photoessays',
    'router_path' => 'newscenter/multimedia/photoessays',
    'link_title' => 'Photo Essays',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_photo-essays:newscenter/multimedia/photoessays',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_multimedia:newscenter/multimedia',
  );
  // Exported menu link: main-menu_photo-gallery-menu-position-rule:menu-position/9
  $menu_links['main-menu_photo-gallery-menu-position-rule:menu-position/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/9',
    'router_path' => 'menu-position/%',
    'link_title' => 'Photo Gallery (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_photo-gallery-menu-position-rule:menu-position/9',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_multimedia:newscenter/multimedia',
  );
  // Exported menu link: main-menu_policy-bodies:node/2995
  $menu_links['main-menu_policy-bodies:node/2995'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2995',
    'router_path' => 'node/%',
    'link_title' => 'Policy Bodies',
    'options' => array(
      'identifier' => 'main-menu_policy-bodies:node/2995',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about',
  );
  // Exported menu link: main-menu_press-release-menu-position-rule:menu-position/7
  $menu_links['main-menu_press-release-menu-position-rule:menu-position/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/7',
    'router_path' => 'menu-position/%',
    'link_title' => 'Press Release (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_press-release-menu-position-rule:menu-position/7',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_press-releases:newscenter/pressreleases',
  );
  // Exported menu link: main-menu_press-releases:newscenter/pressreleases
  $menu_links['main-menu_press-releases:newscenter/pressreleases'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newscenter/pressreleases',
    'router_path' => 'newscenter/pressreleases',
    'link_title' => 'Press Releases',
    'options' => array(
      'identifier' => 'main-menu_press-releases:newscenter/pressreleases',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newscenter:newscenter',
  );
  // Exported menu link: main-menu_publications:publications
  $menu_links['main-menu_publications:publications'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publications',
    'router_path' => 'publications',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_publications:publications',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_secretariat:node/2994
  $menu_links['main-menu_secretariat:node/2994'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2994',
    'router_path' => 'node/%',
    'link_title' => 'Secretariat',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_secretariat:node/2994',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about',
  );
  // Exported menu link: main-menu_top-stories-and-news:newscenter/news
  $menu_links['main-menu_top-stories-and-news:newscenter/news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newscenter/news',
    'router_path' => 'newscenter/news',
    'link_title' => 'Top Stories and News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_top-stories-and-news:newscenter/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newscenter:newscenter',
  );
  // Exported menu link: main-menu_topics-in-focus:newscenter/focus
  $menu_links['main-menu_topics-in-focus:newscenter/focus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newscenter/focus',
    'router_path' => 'newscenter/focus',
    'link_title' => 'Topics in Focus',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_topics-in-focus:newscenter/focus',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_newscenter:newscenter',
  );
  // Exported menu link: main-menu_video-menu-position-rule:menu-position/6
  $menu_links['main-menu_video-menu-position-rule:menu-position/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'menu-position/6',
    'router_path' => 'menu-position/%',
    'link_title' => 'Video (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
      'identifier' => 'main-menu_video-menu-position-rule:menu-position/6',
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_videos:newscenter/multimedia/videos',
  );
  // Exported menu link: main-menu_videos:newscenter/multimedia/videos
  $menu_links['main-menu_videos:newscenter/multimedia/videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newscenter/multimedia/videos',
    'router_path' => 'newscenter/multimedia/videos',
    'link_title' => 'Videos',
    'options' => array(
      'identifier' => 'main-menu_videos:newscenter/multimedia/videos',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_multimedia:newscenter/multimedia',
  );
  // Exported menu link: main-menu_who-we-are:about
  $menu_links['main-menu_who-we-are:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'Who We Are',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_who-we-are:about',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:about',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Biography');
  t('Board of Governors');
  t('Business Opportunities');
  t('DG\'s Statement (menu position rule)');
  t('DG\'s Statements');
  t('DIVIDER');
  t('Focus Page (menu position rule)');
  t('General Conference');
  t('HEADING Multimedia');
  t('IAEA Director General');
  t('Latest From IAEA');
  t('Media Advisories');
  t('Media Advisory (menu position rule)');
  t('Member States');
  t('Multimedia');
  t('News Story (menu position rule)');
  t('Newscenter');
  t('Nucleus');
  t('Our Work');
  t('Photo Essays');
  t('Photo Essays (menu position rule)');
  t('Photo Gallery (menu position rule)');
  t('Policy Bodies');
  t('Press Release (menu position rule)');
  t('Press Releases');
  t('Publications');
  t('Secretariat');
  t('Top Stories and News');
  t('Topics in Focus');
  t('Video (menu position rule)');
  t('Videos');
  t('Who We Are');


  return $menu_links;
}
