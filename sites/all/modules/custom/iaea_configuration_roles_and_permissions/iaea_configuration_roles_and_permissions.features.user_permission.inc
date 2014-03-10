<?php
/**
 * @file
 * iaea_configuration_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iaea_configuration_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access broken links report'.
  $permissions['access broken links report'] = array(
    'name' => 'access broken links report',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'access own broken links report'.
  $permissions['access own broken links report'] = array(
    'name' => 'access own broken links report',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access service links'.
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'service_links',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer @font-your-face'.
  $permissions['administer @font-your-face'] = array(
    'name' => 'administer @font-your-face',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'fontyourface',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean usage'.
  $permissions['administer bean usage'] = array(
    'name' => 'administer bean usage',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'bean_usage',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer linkchecker'.
  $permissions['administer linkchecker'] = array(
    'name' => 'administer linkchecker',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer page titles'.
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'page_title',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panel-nodes'.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer widgets sets'.
  $permissions['administer widgets sets'] = array(
    'name' => 'administer widgets sets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'widgets',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear iaea_vimeo_import feeds'.
  $permissions['clear iaea_vimeo_import feeds'] = array(
    'name' => 'clear iaea_vimeo_import feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create any jumbotron bean'.
  $permissions['create any jumbotron bean'] = array(
    'name' => 'create any jumbotron bean',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any media_block bean'.
  $permissions['create any media_block bean'] = array(
    'name' => 'create any media_block bean',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any page_block bean'.
  $permissions['create any page_block bean'] = array(
    'name' => 'create any page_block bean',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any resources_block bean'.
  $permissions['create any resources_block bean'] = array(
    'name' => 'create any resources_block bean',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create basic_page content'.
  $permissions['create basic_page content'] = array(
    'name' => 'create basic_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create bootstrap_carousel content'.
  $permissions['create bootstrap_carousel content'] = array(
    'name' => 'create bootstrap_carousel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create bulletin_article content'.
  $permissions['create bulletin_article content'] = array(
    'name' => 'create bulletin_article content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dg_statement content'.
  $permissions['create dg_statement content'] = array(
    'name' => 'create dg_statement content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create focus_page content'.
  $permissions['create focus_page content'] = array(
    'name' => 'create focus_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create iaea_video content'.
  $permissions['create iaea_video content'] = array(
    'name' => 'create iaea_video content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create information_circular content'.
  $permissions['create information_circular content'] = array(
    'name' => 'create information_circular content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create media_advisory content'.
  $permissions['create media_advisory content'] = array(
    'name' => 'create media_advisory content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create meeting content'.
  $permissions['create meeting content'] = array(
    'name' => 'create meeting content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create news_story content'.
  $permissions['create news_story content'] = array(
    'name' => 'create news_story content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel-nodes'.
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'create photo_essay content'.
  $permissions['create photo_essay content'] = array(
    'name' => 'create photo_essay content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create photo_gallery content'.
  $permissions['create photo_gallery content'] = array(
    'name' => 'create photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create press_release content'.
  $permissions['create press_release content'] = array(
    'name' => 'create press_release content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any basic_page content'.
  $permissions['delete any basic_page content'] = array(
    'name' => 'delete any basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any bootstrap_carousel content'.
  $permissions['delete any bootstrap_carousel content'] = array(
    'name' => 'delete any bootstrap_carousel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any bulletin_article content'.
  $permissions['delete any bulletin_article content'] = array(
    'name' => 'delete any bulletin_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dg_statement content'.
  $permissions['delete any dg_statement content'] = array(
    'name' => 'delete any dg_statement content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any focus_page content'.
  $permissions['delete any focus_page content'] = array(
    'name' => 'delete any focus_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any iaea_video content'.
  $permissions['delete any iaea_video content'] = array(
    'name' => 'delete any iaea_video content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any information_circular content'.
  $permissions['delete any information_circular content'] = array(
    'name' => 'delete any information_circular content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any jumbotron bean'.
  $permissions['delete any jumbotron bean'] = array(
    'name' => 'delete any jumbotron bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any media_advisory content'.
  $permissions['delete any media_advisory content'] = array(
    'name' => 'delete any media_advisory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any media_block bean'.
  $permissions['delete any media_block bean'] = array(
    'name' => 'delete any media_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any meeting content'.
  $permissions['delete any meeting content'] = array(
    'name' => 'delete any meeting content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_story content'.
  $permissions['delete any news_story content'] = array(
    'name' => 'delete any news_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_block bean'.
  $permissions['delete any page_block bean'] = array(
    'name' => 'delete any page_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel-nodes'.
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'delete any photo_essay content'.
  $permissions['delete any photo_essay content'] = array(
    'name' => 'delete any photo_essay content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any photo_gallery content'.
  $permissions['delete any photo_gallery content'] = array(
    'name' => 'delete any photo_gallery content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any press_release content'.
  $permissions['delete any press_release content'] = array(
    'name' => 'delete any press_release content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resources_block bean'.
  $permissions['delete any resources_block bean'] = array(
    'name' => 'delete any resources_block bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own basic_page content'.
  $permissions['delete own basic_page content'] = array(
    'name' => 'delete own basic_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own bootstrap_carousel content'.
  $permissions['delete own bootstrap_carousel content'] = array(
    'name' => 'delete own bootstrap_carousel content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own bulletin_article content'.
  $permissions['delete own bulletin_article content'] = array(
    'name' => 'delete own bulletin_article content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dg_statement content'.
  $permissions['delete own dg_statement content'] = array(
    'name' => 'delete own dg_statement content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own focus_page content'.
  $permissions['delete own focus_page content'] = array(
    'name' => 'delete own focus_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own iaea_video content'.
  $permissions['delete own iaea_video content'] = array(
    'name' => 'delete own iaea_video content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Editor in chief' => 'Editor in chief',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own information_circular content'.
  $permissions['delete own information_circular content'] = array(
    'name' => 'delete own information_circular content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own media_advisory content'.
  $permissions['delete own media_advisory content'] = array(
    'name' => 'delete own media_advisory content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own meeting content'.
  $permissions['delete own meeting content'] = array(
    'name' => 'delete own meeting content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_story content'.
  $permissions['delete own news_story content'] = array(
    'name' => 'delete own news_story content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel-nodes'.
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'delete own photo_essay content'.
  $permissions['delete own photo_essay content'] = array(
    'name' => 'delete own photo_essay content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own photo_gallery content'.
  $permissions['delete own photo_gallery content'] = array(
    'name' => 'delete own photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own press_release content'.
  $permissions['delete own press_release content'] = array(
    'name' => 'delete own press_release content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in bulletin_authors'.
  $permissions['delete terms in bulletin_authors'] = array(
    'name' => 'delete terms in bulletin_authors',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in bulletin_issue'.
  $permissions['delete terms in bulletin_issue'] = array(
    'name' => 'delete terms in bulletin_issue',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in content_type'.
  $permissions['delete terms in content_type'] = array(
    'name' => 'delete terms in content_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in country'.
  $permissions['delete terms in country'] = array(
    'name' => 'delete terms in country',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in focus_page'.
  $permissions['delete terms in focus_page'] = array(
    'name' => 'delete terms in focus_page',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in infcirc_category'.
  $permissions['delete terms in infcirc_category'] = array(
    'name' => 'delete terms in infcirc_category',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in language'.
  $permissions['delete terms in language'] = array(
    'name' => 'delete terms in language',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_folders'.
  $permissions['delete terms in media_folders'] = array(
    'name' => 'delete terms in media_folders',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in photo_gallery_type'.
  $permissions['delete terms in photo_gallery_type'] = array(
    'name' => 'delete terms in photo_gallery_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in site_section'.
  $permissions['delete terms in site_section'] = array(
    'name' => 'delete terms in site_section',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in story_resource_type'.
  $permissions['delete terms in story_resource_type'] = array(
    'name' => 'delete terms in story_resource_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any basic_page content'.
  $permissions['edit any basic_page content'] = array(
    'name' => 'edit any basic_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any bootstrap_carousel content'.
  $permissions['edit any bootstrap_carousel content'] = array(
    'name' => 'edit any bootstrap_carousel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any bulletin_article content'.
  $permissions['edit any bulletin_article content'] = array(
    'name' => 'edit any bulletin_article content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dg_statement content'.
  $permissions['edit any dg_statement content'] = array(
    'name' => 'edit any dg_statement content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any focus_page content'.
  $permissions['edit any focus_page content'] = array(
    'name' => 'edit any focus_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any iaea_video content'.
  $permissions['edit any iaea_video content'] = array(
    'name' => 'edit any iaea_video content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any information_circular content'.
  $permissions['edit any information_circular content'] = array(
    'name' => 'edit any information_circular content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any jumbotron bean'.
  $permissions['edit any jumbotron bean'] = array(
    'name' => 'edit any jumbotron bean',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any media_advisory content'.
  $permissions['edit any media_advisory content'] = array(
    'name' => 'edit any media_advisory content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any media_block bean'.
  $permissions['edit any media_block bean'] = array(
    'name' => 'edit any media_block bean',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any meeting content'.
  $permissions['edit any meeting content'] = array(
    'name' => 'edit any meeting content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_story content'.
  $permissions['edit any news_story content'] = array(
    'name' => 'edit any news_story content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_block bean'.
  $permissions['edit any page_block bean'] = array(
    'name' => 'edit any page_block bean',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel-nodes'.
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'edit any photo_essay content'.
  $permissions['edit any photo_essay content'] = array(
    'name' => 'edit any photo_essay content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any photo_gallery content'.
  $permissions['edit any photo_gallery content'] = array(
    'name' => 'edit any photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any press_release content'.
  $permissions['edit any press_release content'] = array(
    'name' => 'edit any press_release content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any resources_block bean'.
  $permissions['edit any resources_block bean'] = array(
    'name' => 'edit any resources_block bean',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit link settings'.
  $permissions['edit link settings'] = array(
    'name' => 'edit link settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkchecker',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own basic_page content'.
  $permissions['edit own basic_page content'] = array(
    'name' => 'edit own basic_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own bootstrap_carousel content'.
  $permissions['edit own bootstrap_carousel content'] = array(
    'name' => 'edit own bootstrap_carousel content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own bulletin_article content'.
  $permissions['edit own bulletin_article content'] = array(
    'name' => 'edit own bulletin_article content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own dg_statement content'.
  $permissions['edit own dg_statement content'] = array(
    'name' => 'edit own dg_statement content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own focus_page content'.
  $permissions['edit own focus_page content'] = array(
    'name' => 'edit own focus_page content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own iaea_video content'.
  $permissions['edit own iaea_video content'] = array(
    'name' => 'edit own iaea_video content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own information_circular content'.
  $permissions['edit own information_circular content'] = array(
    'name' => 'edit own information_circular content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own media_advisory content'.
  $permissions['edit own media_advisory content'] = array(
    'name' => 'edit own media_advisory content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own meeting content'.
  $permissions['edit own meeting content'] = array(
    'name' => 'edit own meeting content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_story content'.
  $permissions['edit own news_story content'] = array(
    'name' => 'edit own news_story content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel-nodes'.
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'edit own photo_essay content'.
  $permissions['edit own photo_essay content'] = array(
    'name' => 'edit own photo_essay content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own photo_gallery content'.
  $permissions['edit own photo_gallery content'] = array(
    'name' => 'edit own photo_gallery content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own press_release content'.
  $permissions['edit own press_release content'] = array(
    'name' => 'edit own press_release content',
    'roles' => array(
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in bulletin_authors'.
  $permissions['edit terms in bulletin_authors'] = array(
    'name' => 'edit terms in bulletin_authors',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in bulletin_issue'.
  $permissions['edit terms in bulletin_issue'] = array(
    'name' => 'edit terms in bulletin_issue',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in content_type'.
  $permissions['edit terms in content_type'] = array(
    'name' => 'edit terms in content_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in country'.
  $permissions['edit terms in country'] = array(
    'name' => 'edit terms in country',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in focus_page'.
  $permissions['edit terms in focus_page'] = array(
    'name' => 'edit terms in focus_page',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in infcirc_category'.
  $permissions['edit terms in infcirc_category'] = array(
    'name' => 'edit terms in infcirc_category',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in language'.
  $permissions['edit terms in language'] = array(
    'name' => 'edit terms in language',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_folders'.
  $permissions['edit terms in media_folders'] = array(
    'name' => 'edit terms in media_folders',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in photo_gallery_type'.
  $permissions['edit terms in photo_gallery_type'] = array(
    'name' => 'edit terms in photo_gallery_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in site_section'.
  $permissions['edit terms in site_section'] = array(
    'name' => 'edit terms in site_section',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in story_resource_type'.
  $permissions['edit terms in story_resource_type'] = array(
    'name' => 'edit terms in story_resource_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import iaea_vimeo_import feeds'.
  $permissions['import iaea_vimeo_import feeds'] = array(
    'name' => 'import iaea_vimeo_import feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'moderate content from draft to needs_qa'.
  $permissions['moderate content from draft to needs_qa'] = array(
    'name' => 'moderate content from draft to needs_qa',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to needs_review'.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to published'.
  $permissions['moderate content from draft to published'] = array(
    'name' => 'moderate content from draft to published',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_qa to draft'.
  $permissions['moderate content from needs_qa to draft'] = array(
    'name' => 'moderate content from needs_qa to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_qa to published'.
  $permissions['moderate content from needs_qa to published'] = array(
    'name' => 'moderate content from needs_qa to published',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to draft'.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to needs_qa'.
  $permissions['moderate content from needs_review to needs_qa'] = array(
    'name' => 'moderate content from needs_review to needs_qa',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to published'.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to draft'.
  $permissions['moderate content from published to draft'] = array(
    'name' => 'moderate content from published to draft',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set page title'.
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'page_title',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'tamper iaea_vimeo_import'.
  $permissions['tamper iaea_vimeo_import'] = array(
    'name' => 'tamper iaea_vimeo_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock iaea_vimeo_import feeds'.
  $permissions['unlock iaea_vimeo_import feeds'] = array(
    'name' => 'unlock iaea_vimeo_import feeds',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for service visibility'.
  $permissions['use PHP for service visibility'] = array(
    'name' => 'use PHP for service visibility',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'service_links',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use workbench_moderation my drafts tab'.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'use workbench_moderation needs qa tab'.
  $permissions['use workbench_moderation needs qa tab'] = array(
    'name' => 'use workbench_moderation needs qa tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Tech QA' => 'Tech QA',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'iaea_workbench_alter',
  );

  // Exported permission: 'use workbench_moderation needs review tab'.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view advanced help index'.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help popup'.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help topic'.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view all unpublished content'.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view any jumbotron bean'.
  $permissions['view any jumbotron bean'] = array(
    'name' => 'view any jumbotron bean',
    'roles' => array(
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any media_block bean'.
  $permissions['view any media_block bean'] = array(
    'name' => 'view any media_block bean',
    'roles' => array(
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any page_block bean'.
  $permissions['view any page_block bean'] = array(
    'name' => 'view any page_block bean',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any resources_block bean'.
  $permissions['view any resources_block bean'] = array(
    'name' => 'view any resources_block bean',
    'roles' => array(
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean usage'.
  $permissions['view bean usage'] = array(
    'name' => 'view bean usage',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean_usage',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view moderation history'.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view moderation messages'.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Editor in chief' => 'Editor in chief',
      'Tech QA' => 'Tech QA',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  return $permissions;
}
