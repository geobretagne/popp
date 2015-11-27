<?php
/**
 * Created by PhpStorm.
 * User: lbodiguel
 * Date: 20/11/2014
 * Time: 14:51
 */

global $user;
$nodeToDisplay = array_shift($page['content']['system_main']['nodes']);
$node          = node_load($nodeToDisplay['#node']->nid);
$listePhotos   = [];
foreach ($node->field_popp_serie_photo_list[LANGUAGE_NONE] as $photo) {
    $listePhotos[] = ['nid' => $photo['target_id']];
}
$listePhotos = json_encode($listePhotos);
$output      = '';
$town        = $node->field_popp_serie_town[LANGUAGE_NONE][0]['tid'];
$town        = taxonomy_term_load($town);
$town        = $town ? $town->name : '';
$firstShot   = new DateTime($node->field_popp_serie_photo_list[LANGUAGE_NONE][0]['entity']->field_popp_photo_date[LANGUAGE_NONE][0]['value']);
$firstShot   = $firstShot->format('d/m/Y');
$lastShot    = new DateTime($node->field_popp_serie_photo_list[LANGUAGE_NONE][count($node->field_popp_serie_photo_list[LANGUAGE_NONE]) - 1]['entity']->field_popp_photo_date[LANGUAGE_NONE][0]['value']);
$lastShot    = $lastShot->format('d/m/Y');
$dateDescr   = '';
if (isset($node->field_popp_serie_first_desc_date[LANGUAGE_NONE][0]['value'])) {
    $tmp       = new DateTime($node->field_popp_serie_first_desc_date[LANGUAGE_NONE][0]['value']);
    $dateDescr = '<i>Le ' . $tmp->format('d/m/Y') . '</i>';
}
$isPa = false;
$opp  = (isset($node->og_group_ref[LANGUAGE_NONE][0]['target_id']) ? node_load($node->og_group_ref[LANGUAGE_NONE][0]['target_id']) : false);
if (false !== $opp) {
    if ($opp->type == 'opp_takepart') {
        $isPa = true;
    }
}
$pgs = new PostgisGeometrySet('GEOMETRYCOLLECTION', 4326);
$pgs->fromGeometry($node->field_popp_serie_place[LANGUAGE_NONE]);
$geom = 'Long : ' . str_replace(' ', '<br/>Lat : ', str_replace('))', '', str_replace('GEOMETRYCOLLECTION(POINT(', '', $pgs->getText())));

$commentsCount = isset($nodeToDisplay['comments']['comments']) ? count($nodeToDisplay['comments']['comments']) - 2 : 0;
if ($commentsCount < 0) {
    $commentsCount = 0;
}
if (isset($node->field_popp_serie_supp_struct[LANGUAGE_NONE][0])) {
    $image  = field_get_items('node', $node->field_popp_serie_supp_struct[LANGUAGE_NONE][0]['entity'], 'field_popp_supp_struct_logo');
    $output = field_view_value('node', $node->field_popp_serie_supp_struct[LANGUAGE_NONE][0]['entity'], 'field_popp_supp_struct_logo', $image[0], [
        'type'     => 'image',
        'settings' => [
            'image_style' => 'sidebar_image',
            'image_link'  => '',
        ],
    ]);
}

$docsView = views_get_view('popp_serie_documentation_display');
$docsView->set_display('block');
$docsView->set_arguments([$nodeToDisplay['#node']->nid]);
$docsView->pre_execute();
$docsView->execute('block');

$serieLinks = '';
if(!empty($node->field_popp_serie_external_links[LANGUAGE_NONE])){
    foreach($node->field_popp_serie_external_links[LANGUAGE_NONE] as $link){
        $serieLinks .= '<div class="field-item even"><a target="_blank" href="'.$link['value'].'">'.$link['value'].'</a></div>';
    }
}

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 * Available variables:
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 * @see     bootstrap_preprocess_page()
 * @see     template_preprocess()
 * @see     template_preprocess_page()
 * @see     bootstrap_process_page()
 * @see     template_process()
 * @see     html.tpl.php
 * @ingroup themeable
 */
drupal_add_js(drupal_get_path('theme', 'popp') . '/js/photo_display.js');
?>
<div style="display:none;" id="photoList" data='<?= $listePhotos ?>'></div>
<div style="display:none;" id="currentPhoto" data='0'></div>
<header id="navbar" role="banner" class="navbar navbar-default no-landscape">
    <div class="container">
        <div class="navbar-header">
            <?php if ($logo): ?>
                <a id="mainLogo" class="logo navbar-btn pull-left" href="<?php print $front_page; ?>"
                   title="<?php print t('Home'); ?>">
                    <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
                </a>
            <?php endif; ?>

            <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
                <span class="sr-only">Toggle navigation</span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
            </button>
        </div>
        <div class="navbar-collapse collapse">
            <p id="textLogo">Plateforme des Observatoires Photographiques du Paysage de Bretagne</p>
            <nav id="topMenu" role="navigation">
                <section>
                    <div class="noRadius">
                        <?= render($page['navigation']) ?>

                    </div>

                </section>
            </nav>
        </div>


</header>

<div class="main-container container no-landscape">

    <header role="banner" id="page-header">
        <?php if (! empty($site_slogan)): ?>
            <p class="lead"><?php print $site_slogan; ?></p>
        <?php endif; ?>

        <?php print render($page['header']); ?>

    </header>
    <!-- /#page-header -->
    <a id="main-content"></a>
    <?php print $messages; ?>
    <div class="row">
        <section class="col-sm-9">
            <?php if (! empty($page['highlighted'])): ?>
                <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
            <?php endif; ?>

            <?php if (! empty($tabs)): ?>
                <?php print render($tabs); ?>
            <?php endif; ?>
            <?php if (! empty($page['help'])): ?>
                <?php print render($page['help']); ?>
            <?php endif; ?>
            <?php if (! empty($action_links)): ?>
                <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            <div class="well relPosition">
                <p style="margin-bottom: 5px;"><?= $node->title ?> - <?= $town ?><span
                        class="badge pull-right <?= $isPa ? 'badgePa' : 'badgeClassic' ?>"><?= $isPa ? 'OPP Participatif' : 'OPP' ?></span>
                </p>
                <a class="showInBox" id="showInBox" rel="lightbox" data-title="" data-toggle="lightbox"
                   href="">
                <span title="Plein écran" class="glyphicon glyphicon-fullscreen topRight"></span>
                </a>

                <div id="photoPh" class="<?= ($isPa ? 'pa' : '') ?>"></div>
            </div>
        </section>
        <aside class="col-sm-3" role="complementary" style="padding-right:0;">
            <div class="region region-sidebar-second">
                <div class="well noPadding">
                    <div class="row" style="margin:0 0;padding:5px;background:#333;">
                        <div class="col-xs-12 noPadding">
                            <?= drupal_render($output) ?>
                            <div class="pull-right dropdown">
                                <button class="btn btn-default dropdown-toggle" type="button" id="dropdownMenu1"
                                        data-toggle="dropdown" aria-expanded="true">
                                    Actions
                                    <span class="caret"></span>
                                </button>
                                <ul class="dropdown-menu" role="menu" aria-labelledby="dropdownMenu1">
                                   <li role="presentation"><a role="menuitem" tabindex="-1"
                                                               href="<?php print "/printpdf/node/" . $node->nid ?>">Télécharger la fiche terrain</a></li>
                                    <li role="presentation"><a class="confirmLicences" role="menuitem" tabindex="-1"
                                                               href="/serie/pdfexport/<?=$node->nid?>">Exporter la série</a></li>

                                    <li role="presentation"><?= flag_create_link('add_serie_caddy', $node->nid) ?></li>

                                </ul>
                            </div>
                        </div>
                    </div>
                    <div class="panel-group" id="accordion" role="tablist" aria-multiselectable="true">
                        <div class="panel panel-default">
                            <div>
                                <div class="panel-body">
                                    <div class="field">
                                        <?= drupal_render($nodeToDisplay['field_popp_serie_supp_struct']) ?>
                                        <?= drupal_render($nodeToDisplay['field_popp_serie_opp']) ?>
                                    </div>
                                </div>
                            </div>
                        </div>
                        <div class="panel panel-default">
                            <div class="panel-heading" role="tab" id="headingTwo">
                                <h4 class="panel-title">
                                    <a class="collapsed" data-toggle="collapse" data-parent="#accordion"
                                       href="#collapseTwo" aria-expanded="false" aria-controls="collapseTwo">
                                        Série <span
                                            id="serieId"><?= empty($nodeToDisplay['#node']->field_popp_serie_identifier[LANGUAGE_NONE][0]['value'])?'':$nodeToDisplay['#node']->field_popp_serie_identifier[LANGUAGE_NONE][0]['value'] ?></span>
                                    </a>
                                </h4>
                            </div>
                            <div id="collapseTwo" class="panel-collapse collapse" role="tabpanel"
                                 aria-labelledby="headingTwo">
                                <div class="panel-body">
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_per']) ?>
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_thematic_axis']) ?>
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_loc_axes']) ?>
                                    <div id="sameThematicAxis">
                                    </div>
                                    <div id="photoLicences">
                                    </div>
                                </div>
                            </div>
                        </div>
                        <div class="panel panel-default">
                            <div class="panel-heading" role="tab" id="headingThree">
                                <h4 class="panel-title">
                                    <a class="collapsed" data-toggle="collapse" data-parent="#accordion"
                                       href="#collapseThree" aria-expanded="false" aria-controls="collapseThree">
                                        <span
                                            id="typeCurrentPhoto">Photo</span> <?= $nodeToDisplay['#node']->field_popp_serie_identifier[LANGUAGE_NONE][0]['value'] ?>
                                        <span id="idCurrentPhoto"></span>
                                    </a>
                                </h4>
                            </div>
                            <div id="collapseThree" class="panel-collapse collapse" role="tabpanel"
                                 aria-labelledby="headingThree">
                                <div class="panel-body">
                                    <div id="photoDataPlaceHolder">

                                    </div>
                                </div>
                            </div>
                        </div>
                        <div class="panel panel-default">
                            <div class="panel-heading" role="tab" id="headingOne">
                                <h4 class="panel-title">
                                    <a data-toggle="collapse" data-parent="#accordion" href="#collapseOne"
                                       aria-expanded="true" aria-controls="collapseOne">
                                        Territoire
                                    </a>
                                </h4>
                            </div>
                            <div id="collapseOne" class="panel-collapse collapse in" role="tabpanel"
                                 aria-labelledby="headingOne">
                                <div class="panel-body">
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_region']) ?>
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_county']) ?>
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_town']) ?>
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_address']) ?>
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_landscape_set']) ?>
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_landscape_unit']) ?>
                                    <?= drupal_render($nodeToDisplay['field_popp_serie_landscape_per']) ?>
                                    <div
                                        class="field field-name-field-popp-serie-landscape-unit field-type-taxonomy-term-reference field-label-above">
                                        <div class="field-label">Emplacement de la série:&nbsp;</div>
                                        <div class="field-item even"><?= $geom ?></div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </aside>
        <!-- /#sidebar-second -->
    </div>
    <div class="row" style="margin:0 -30px;">
        <div class="col-xs-12">
            <div class="well">
                <div id="thumbnailsViewPlaceHolder">
                    <?php
                    // Render firstly reference document
                    $refdocView = views_get_view('popp_refdoc_display');
                    $refdocView->set_display('block');
                    $refdocView->set_arguments([$nodeToDisplay['#node']->nid]);
                    $refdocView->pre_execute();
                    $refdocView->execute('block');
                    print $refdocView->render();
                    // And then photo thumbnails
                    $thumbs = views_get_view('popp_search_result_view');
                    $thumbs->set_display('block_1');
                    $thumbs->set_arguments([$nodeToDisplay['#node']->nid]);
                    $thumbs->pre_execute();
                    $thumbs->execute('block_1');
                    print $thumbs->render();
                    ?>
                </div>
            </div>
        </div>
    </div>
    <div class="row" style="margin:0 -30px;">
        <div class="col-xs-12">
            <div role="tabpanel">
                <!-- Nav tabs -->
                <ul class="nav nav-tabs photoTabs" role="tablist">
                    <li role="presentation" class="active"><a href="#descriptions" aria-controls="descriptions"
                                                              role="tab"
                                                              data-toggle="tab">Descriptions</a></li>
                    <li role="presentation"><a href="#changements" aria-controls="changements" role="tab"
                                               data-toggle="tab">Changements</a></li>
                    <li role="presentation"><a href="#commentaires" aria-controls="commentaires" role="tab"
                                               data-toggle="tab">Commentaires (<?= $commentsCount ?>)</a></li>
                    <li role="presentation"><a href="#sons" aria-controls="sons" role="tab"
                                               data-toggle="tab">Sons</a>
                        <?php if ($docsView->total_rows > 0 || $serieLinks != ''): ?>
                    <li role="presentation"><a href="#documentation" aria-controls="sons" role="tab"
                                               data-toggle="tab">Documentations</a> <?php endif; ?>
                </ul>

                <!-- Tab panes -->
                <div class="tab-content">
                    <div role="tabpanel" class="tab-pane active highlight" id="descriptions">
                        <div id="ifNotRefDoc">
                            <?= drupal_render($nodeToDisplay['field_popp_serie_author_intent']) ?>
                            <?= drupal_render($nodeToDisplay['field_popp_serie_first_desc']) ?>
                            <?= $dateDescr ?>
                        </div>
                        <div style="padding-top:20px;margin-top:20px;border-top:1px solid #333;"
                             id="descriptionsTable"></div>
                    </div>
                    <div role="tabpanel" class="tab-pane highlight" id="sons">
                        <?php
                        $testimonies = views_get_view('popp_testimonies_display');
                        $testimonies->set_display('block');
                        $testimonies->set_arguments([$nodeToDisplay['#node']->nid]);
                        $testimonies->pre_execute();
                        $testimonies->execute('block');
                        print $testimonies->render();
                        ?>
                    </div>
                    <div role="tabpanel" class="tab-pane highlight" id="commentaires">
                        <?= (! isset($nodeToDisplay['comments']['comments']) ? '<h3>' . t('Aucun commentaire pour le moment') . '</h3>' . ($user->uid != 0 ? '' : theme('comment_post_forbidden', ['node' => $node])) : '') ?>
                        <?php
                        $form = comment_node_page_additions($node);
                        ?>
                        <?= drupal_render($form) ?>
                    </div>
                    <div role="tabpanel" class="tab-pane highlight" id="changements">
                        <a class="btn btn-default pull-right" href="/serie/338/-1/export" id="thesExport">Exporter</a>
                        <h4>Changements par rapport à la photo précédente</h4>

                        <div id="tabThesaurus"></div>
                        <h4>Changements intervenus sur la durée de la série</h4>
                        <?= getChangesTable($node) ?>
                    </div>
                    <div role="tabpanel" class="tab-pane highlight" id="documentation">
                     <?php if ($docsView->total_rows > 0): ?>
                     <h4>Documents associés à la série</h4>
                        <?= $docsView->render() ?>
                        <br/>
                         <?php endif; ?>
                         <?php if ($serieLinks != ''): ?>
                     <h4>Liens associés à la série</h4>
                        <?= $serieLinks ?>
                         <?php endif; ?>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>
<footer class="footer container first">
    <?php print render($page['footer_top']); ?>
</footer>
<footer class="footer container">
    <div class="row">
        <div class="col-xs-2">
        </div>
        <div class="col-xs-8">
            <?php print render($page['footer_bottom']); ?>
        </div>
        <div class="col-xs-2">
            <img src="/<?php print path_to_theme(); ?>/img/facebook.jpg" class="socialLogo"
                 alt="Retrouvez-nous sur Facebook" title="Retrouvez-nous sur Facebook"/>
            <img src="/<?php print path_to_theme(); ?>/img/twitter.jpg" class="socialLogo"
                 alt="Retrouvez-nous sur Twitter" title="Retrouvez-nous sur Twitter"/>
            <img src="/<?php print path_to_theme(); ?>/img/contact.jpg" class="socialLogo" alt="Contactez-nous"
                 title="Contactez-nous"/>
        </div>
    </div>
    <div class="row">
        <div class="col-xs-12">
            <?php print render($page['partners_footer']); ?>
            <p id="europeFooter">
                <img height="50px" src="/<?= path_to_theme() ?>/img/Logo-UE.jpg" alt="Union Européenne"/> <img
                    height="50px" src="/<?= path_to_theme() ?>/img/feder.jpg" alt="FEDER"/>La POPP Breizh est cofinancée
                par l'Union européenne.
            </p>
        </div>
    </div>
</footer>

