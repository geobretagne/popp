<?php
/**
 * @file
 * admin_structure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function admin_structure_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer faq'.
  $permissions['administer faq'] = array(
    'name' => 'administer faq',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'faq',
  );

  // Exported permission: 'administer faq order'.
  $permissions['administer faq order'] = array(
    'name' => 'administer faq order',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'faq',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer import'.
  $permissions['administer import'] = array(
    'name' => 'administer import',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'popp_mass_import',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer lightbox2'.
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer openlayers'.
  $permissions['administer openlayers'] = array(
    'name' => 'administer openlayers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'openlayers_ui',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer theme assignments'.
  $permissions['administer theme assignments'] = array(
    'name' => 'administer theme assignments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'themekey',
  );

  // Exported permission: 'administer themekey settings'.
  $permissions['administer themekey settings'] = array(
    'name' => 'administer themekey settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'themekey',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'assign node themes'.
  $permissions['assign node themes'] = array(
    'name' => 'assign node themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'themekey_ui',
  );

  // Exported permission: 'assign path alias themes'.
  $permissions['assign path alias themes'] = array(
    'name' => 'assign path alias themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'themekey_ui',
  );

  // Exported permission: 'assign theme to own nodes'.
  $permissions['assign theme to own nodes'] = array(
    'name' => 'assign theme to own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'themekey_ui',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create faq content'.
  $permissions['create faq content'] = array(
    'name' => 'create faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_popp_serie_identifier'.
  $permissions['create field_popp_serie_identifier'] = array(
    'name' => 'create field_popp_serie_identifier',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create opp content'.
  $permissions['create opp content'] = array(
    'name' => 'create opp content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create opp_takepart content'.
  $permissions['create opp_takepart content'] = array(
    'name' => 'create opp_takepart content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create partner_logo content'.
  $permissions['create partner_logo content'] = array(
    'name' => 'create partner_logo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create popp_documentation content'.
  $permissions['create popp_documentation content'] = array(
    'name' => 'create popp_documentation content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create popp_page content'.
  $permissions['create popp_page content'] = array(
    'name' => 'create popp_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create popp_photo content'.
  $permissions['create popp_photo content'] = array(
    'name' => 'create popp_photo content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create popp_photo_serie content'.
  $permissions['create popp_photo_serie content'] = array(
    'name' => 'create popp_photo_serie content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create popp_record_field content'.
  $permissions['create popp_record_field content'] = array(
    'name' => 'create popp_record_field content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create popp_reference_document content'.
  $permissions['create popp_reference_document content'] = array(
    'name' => 'create popp_reference_document content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create popp_testimony_sheet content'.
  $permissions['create popp_testimony_sheet content'] = array(
    'name' => 'create popp_testimony_sheet content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create supporting_structure content'.
  $permissions['create supporting_structure content'] = array(
    'name' => 'create supporting_structure content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faq content'.
  $permissions['delete any faq content'] = array(
    'name' => 'delete any faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any opp content'.
  $permissions['delete any opp content'] = array(
    'name' => 'delete any opp content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any opp_takepart content'.
  $permissions['delete any opp_takepart content'] = array(
    'name' => 'delete any opp_takepart content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any partner_logo content'.
  $permissions['delete any partner_logo content'] = array(
    'name' => 'delete any partner_logo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any popp_documentation content'.
  $permissions['delete any popp_documentation content'] = array(
    'name' => 'delete any popp_documentation content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any popp_page content'.
  $permissions['delete any popp_page content'] = array(
    'name' => 'delete any popp_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any popp_photo content'.
  $permissions['delete any popp_photo content'] = array(
    'name' => 'delete any popp_photo content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any popp_photo_serie content'.
  $permissions['delete any popp_photo_serie content'] = array(
    'name' => 'delete any popp_photo_serie content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any popp_record_field content'.
  $permissions['delete any popp_record_field content'] = array(
    'name' => 'delete any popp_record_field content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any popp_reference_document content'.
  $permissions['delete any popp_reference_document content'] = array(
    'name' => 'delete any popp_reference_document content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any popp_testimony_sheet content'.
  $permissions['delete any popp_testimony_sheet content'] = array(
    'name' => 'delete any popp_testimony_sheet content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any supporting_structure content'.
  $permissions['delete any supporting_structure content'] = array(
    'name' => 'delete any supporting_structure content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faq content'.
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own opp content'.
  $permissions['delete own opp content'] = array(
    'name' => 'delete own opp content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own opp_takepart content'.
  $permissions['delete own opp_takepart content'] = array(
    'name' => 'delete own opp_takepart content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own partner_logo content'.
  $permissions['delete own partner_logo content'] = array(
    'name' => 'delete own partner_logo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own popp_documentation content'.
  $permissions['delete own popp_documentation content'] = array(
    'name' => 'delete own popp_documentation content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own popp_page content'.
  $permissions['delete own popp_page content'] = array(
    'name' => 'delete own popp_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own popp_photo content'.
  $permissions['delete own popp_photo content'] = array(
    'name' => 'delete own popp_photo content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own popp_photo_serie content'.
  $permissions['delete own popp_photo_serie content'] = array(
    'name' => 'delete own popp_photo_serie content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own popp_record_field content'.
  $permissions['delete own popp_record_field content'] = array(
    'name' => 'delete own popp_record_field content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own popp_reference_document content'.
  $permissions['delete own popp_reference_document content'] = array(
    'name' => 'delete own popp_reference_document content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own popp_testimony_sheet content'.
  $permissions['delete own popp_testimony_sheet content'] = array(
    'name' => 'delete own popp_testimony_sheet content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own supporting_structure content'.
  $permissions['delete own supporting_structure content'] = array(
    'name' => 'delete own supporting_structure content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in county'.
  $permissions['delete terms in county'] = array(
    'name' => 'delete terms in county',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in landscape_set'.
  $permissions['delete terms in landscape_set'] = array(
    'name' => 'delete terms in landscape_set',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in landscape_typologies'.
  $permissions['delete terms in landscape_typologies'] = array(
    'name' => 'delete terms in landscape_typologies',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in landscape_units'.
  $permissions['delete terms in landscape_units'] = array(
    'name' => 'delete terms in landscape_units',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_countries'.
  $permissions['delete terms in popp_countries'] = array(
    'name' => 'delete terms in popp_countries',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_nonreq_thesaurus'.
  $permissions['delete terms in popp_nonreq_thesaurus'] = array(
    'name' => 'delete terms in popp_nonreq_thesaurus',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_refdoc_type'.
  $permissions['delete terms in popp_refdoc_type'] = array(
    'name' => 'delete terms in popp_refdoc_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_tax_content_type'.
  $permissions['delete terms in popp_tax_content_type'] = array(
    'name' => 'delete terms in popp_tax_content_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_tax_family_struc'.
  $permissions['delete terms in popp_tax_family_struc'] = array(
    'name' => 'delete terms in popp_tax_family_struc',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_tax_format'.
  $permissions['delete terms in popp_tax_format'] = array(
    'name' => 'delete terms in popp_tax_format',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_tax_language'.
  $permissions['delete terms in popp_tax_language'] = array(
    'name' => 'delete terms in popp_tax_language',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_tax_right'.
  $permissions['delete terms in popp_tax_right'] = array(
    'name' => 'delete terms in popp_tax_right',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_tax_sociopro'.
  $permissions['delete terms in popp_tax_sociopro'] = array(
    'name' => 'delete terms in popp_tax_sociopro',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_tax_thepopp'.
  $permissions['delete terms in popp_tax_thepopp'] = array(
    'name' => 'delete terms in popp_tax_thepopp',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_tax_thesaurus'.
  $permissions['delete terms in popp_tax_thesaurus'] = array(
    'name' => 'delete terms in popp_tax_thesaurus',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_thematic_axes'.
  $permissions['delete terms in popp_thematic_axes'] = array(
    'name' => 'delete terms in popp_thematic_axes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_thematic_local_axes'.
  $permissions['delete terms in popp_thematic_local_axes'] = array(
    'name' => 'delete terms in popp_thematic_local_axes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in popp_towns'.
  $permissions['delete terms in popp_towns'] = array(
    'name' => 'delete terms in popp_towns',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in region'.
  $permissions['delete terms in region'] = array(
    'name' => 'delete terms in region',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download original image'.
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any contact_information profile'.
  $permissions['edit any contact_information profile'] = array(
    'name' => 'edit any contact_information profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any faq content'.
  $permissions['edit any faq content'] = array(
    'name' => 'edit any faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any identification profile'.
  $permissions['edit any identification profile'] = array(
    'name' => 'edit any identification profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any my_commitments profile'.
  $permissions['edit any my_commitments profile'] = array(
    'name' => 'edit any my_commitments profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any opp content'.
  $permissions['edit any opp content'] = array(
    'name' => 'edit any opp content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any opp_takepart content'.
  $permissions['edit any opp_takepart content'] = array(
    'name' => 'edit any opp_takepart content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any partner_logo content'.
  $permissions['edit any partner_logo content'] = array(
    'name' => 'edit any partner_logo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any popp_documentation content'.
  $permissions['edit any popp_documentation content'] = array(
    'name' => 'edit any popp_documentation content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any popp_page content'.
  $permissions['edit any popp_page content'] = array(
    'name' => 'edit any popp_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any popp_photo content'.
  $permissions['edit any popp_photo content'] = array(
    'name' => 'edit any popp_photo content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any popp_photo_serie content'.
  $permissions['edit any popp_photo_serie content'] = array(
    'name' => 'edit any popp_photo_serie content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any popp_record_field content'.
  $permissions['edit any popp_record_field content'] = array(
    'name' => 'edit any popp_record_field content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any popp_reference_document content'.
  $permissions['edit any popp_reference_document content'] = array(
    'name' => 'edit any popp_reference_document content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any popp_testimony_sheet content'.
  $permissions['edit any popp_testimony_sheet content'] = array(
    'name' => 'edit any popp_testimony_sheet content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any supporting_structure content'.
  $permissions['edit any supporting_structure content'] = array(
    'name' => 'edit any supporting_structure content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_popp_serie_identifier'.
  $permissions['edit field_popp_serie_identifier'] = array(
    'name' => 'edit field_popp_serie_identifier',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own contact_information profile'.
  $permissions['edit own contact_information profile'] = array(
    'name' => 'edit own contact_information profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own faq content'.
  $permissions['edit own faq content'] = array(
    'name' => 'edit own faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_popp_serie_identifier'.
  $permissions['edit own field_popp_serie_identifier'] = array(
    'name' => 'edit own field_popp_serie_identifier',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own identification profile'.
  $permissions['edit own identification profile'] = array(
    'name' => 'edit own identification profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own my_commitments profile'.
  $permissions['edit own my_commitments profile'] = array(
    'name' => 'edit own my_commitments profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own opp content'.
  $permissions['edit own opp content'] = array(
    'name' => 'edit own opp content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own opp_takepart content'.
  $permissions['edit own opp_takepart content'] = array(
    'name' => 'edit own opp_takepart content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own partner_logo content'.
  $permissions['edit own partner_logo content'] = array(
    'name' => 'edit own partner_logo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own popp_documentation content'.
  $permissions['edit own popp_documentation content'] = array(
    'name' => 'edit own popp_documentation content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own popp_page content'.
  $permissions['edit own popp_page content'] = array(
    'name' => 'edit own popp_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own popp_photo content'.
  $permissions['edit own popp_photo content'] = array(
    'name' => 'edit own popp_photo content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own popp_photo_serie content'.
  $permissions['edit own popp_photo_serie content'] = array(
    'name' => 'edit own popp_photo_serie content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own popp_record_field content'.
  $permissions['edit own popp_record_field content'] = array(
    'name' => 'edit own popp_record_field content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own popp_reference_document content'.
  $permissions['edit own popp_reference_document content'] = array(
    'name' => 'edit own popp_reference_document content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own popp_testimony_sheet content'.
  $permissions['edit own popp_testimony_sheet content'] = array(
    'name' => 'edit own popp_testimony_sheet content',
    'roles' => array(
      'Import de masse' => 'Import de masse',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own supporting_structure content'.
  $permissions['edit own supporting_structure content'] = array(
    'name' => 'edit own supporting_structure content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in county'.
  $permissions['edit terms in county'] = array(
    'name' => 'edit terms in county',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in landscape_set'.
  $permissions['edit terms in landscape_set'] = array(
    'name' => 'edit terms in landscape_set',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in landscape_typologies'.
  $permissions['edit terms in landscape_typologies'] = array(
    'name' => 'edit terms in landscape_typologies',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in landscape_units'.
  $permissions['edit terms in landscape_units'] = array(
    'name' => 'edit terms in landscape_units',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_countries'.
  $permissions['edit terms in popp_countries'] = array(
    'name' => 'edit terms in popp_countries',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_nonreq_thesaurus'.
  $permissions['edit terms in popp_nonreq_thesaurus'] = array(
    'name' => 'edit terms in popp_nonreq_thesaurus',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_refdoc_type'.
  $permissions['edit terms in popp_refdoc_type'] = array(
    'name' => 'edit terms in popp_refdoc_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_tax_content_type'.
  $permissions['edit terms in popp_tax_content_type'] = array(
    'name' => 'edit terms in popp_tax_content_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_tax_family_struc'.
  $permissions['edit terms in popp_tax_family_struc'] = array(
    'name' => 'edit terms in popp_tax_family_struc',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_tax_format'.
  $permissions['edit terms in popp_tax_format'] = array(
    'name' => 'edit terms in popp_tax_format',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_tax_language'.
  $permissions['edit terms in popp_tax_language'] = array(
    'name' => 'edit terms in popp_tax_language',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_tax_right'.
  $permissions['edit terms in popp_tax_right'] = array(
    'name' => 'edit terms in popp_tax_right',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_tax_sociopro'.
  $permissions['edit terms in popp_tax_sociopro'] = array(
    'name' => 'edit terms in popp_tax_sociopro',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_tax_thepopp'.
  $permissions['edit terms in popp_tax_thepopp'] = array(
    'name' => 'edit terms in popp_tax_thepopp',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_tax_thesaurus'.
  $permissions['edit terms in popp_tax_thesaurus'] = array(
    'name' => 'edit terms in popp_tax_thesaurus',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_thematic_axes'.
  $permissions['edit terms in popp_thematic_axes'] = array(
    'name' => 'edit terms in popp_thematic_axes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_thematic_local_axes'.
  $permissions['edit terms in popp_thematic_local_axes'] = array(
    'name' => 'edit terms in popp_thematic_local_axes',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in popp_towns'.
  $permissions['edit terms in popp_towns'] = array(
    'name' => 'edit terms in popp_towns',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in region'.
  $permissions['edit terms in region'] = array(
    'name' => 'edit terms in region',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export taxonomy by csv'.
  $permissions['export taxonomy by csv'] = array(
    'name' => 'export taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'flag add_serie_caddy'.
  $permissions['flag add_serie_caddy'] = array(
    'name' => 'flag add_serie_caddy',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import taxonomy by csv'.
  $permissions['import taxonomy by csv'] = array(
    'name' => 'import taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print_ui',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'unflag add_serie_caddy'.
  $permissions['unflag add_serie_caddy'] = array(
    'name' => 'unflag add_serie_caddy',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use bulk exporter'.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'use text format editeur'.
  $permissions['use text format editeur'] = array(
    'name' => 'use text format editeur',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any contact_information profile'.
  $permissions['view any contact_information profile'] = array(
    'name' => 'view any contact_information profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any identification profile'.
  $permissions['view any identification profile'] = array(
    'name' => 'view any identification profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any my_commitments profile'.
  $permissions['view any my_commitments profile'] = array(
    'name' => 'view any my_commitments profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view faq page'.
  $permissions['view faq page'] = array(
    'name' => 'view faq page',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'faq',
  );

  // Exported permission: 'view field_popp_serie_identifier'.
  $permissions['view field_popp_serie_identifier'] = array(
    'name' => 'view field_popp_serie_identifier',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own contact_information profile'.
  $permissions['view own contact_information profile'] = array(
    'name' => 'view own contact_information profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own field_popp_serie_identifier'.
  $permissions['view own field_popp_serie_identifier'] = array(
    'name' => 'view own field_popp_serie_identifier',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own identification profile'.
  $permissions['view own identification profile'] = array(
    'name' => 'view own identification profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own my_commitments profile'.
  $permissions['view own my_commitments profile'] = array(
    'name' => 'view own my_commitments profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  return $permissions;
}
