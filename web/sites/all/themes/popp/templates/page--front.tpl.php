<?php //POPP
$block = module_invoke('menu', 'block_view', 'menu-popp-principal');
global $user;
if(null === og_get_groups_by_user($user) && !in_array('administrator', $user->roles) && !in_array('Import de masse', $user->roles)){
    print '<div style="display:none;" id="cacherMenu"></div>';
}
if (in_array('administrator', $user->roles) && variable_get('is_popp_install_done') !== true && current_path() != "admin/popp-installation") {
    ?>
    <div id="greyBackground">
    </div>
    <div class="well" id="installAlert">
        <?php
        $request = drupal_http_request($GLOBALS['base_url'] . '/admin/config/search/clean-urls/check');
        // If the request returns HTTP 200, clean URLs are available.
        if (isset($request->code) && $request->code == 200) {
            $available = true;
            ?>
            <p><?= t('Warning ! In order to finish POPP installation, please click on') ?> <a
                    id="removeInstallModal" href="#overlay=admin/popp-installation"><?= t('this link !') ?></a></p>
            <?php
        } else {
            // If the user started the clean URL test, provide explicit feedback. ?>
            <p><?= t('Warning ! In order to finish POPP installation, please activate Apache URL rewriting') ?></a></p> <?php
        }

        ?>
    </div>
<?php
}
?>
<header id="navbar" role="banner" class="navbar navbar-default border-bottom">
    <div class="container">
        <div class="navbar-header">
            <?php if ($logo): ?>
                <a id="mainLogo" class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                    <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
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
                        <?= render($block['content'])?>
                                   
                    </div>
                    </section>
            </nav>
        </div>
    </div>
    <?php //if($is_front): ?>
    <div id="landscape">
    </div>
    <?php //endif; ?>
</header>

<div class="main-container container">

    <header role="banner" id="page-header">
        <?php if (!empty($site_slogan)): ?>
            <p class="lead"><?php print $site_slogan; ?></p>
        <?php endif; ?>

        <?php print render($page['header']); ?>
    </header> <!-- /#page-header -->

    <div class="row">

        <?php if (!empty($page['sidebar_first'])): ?>
            <aside class="col-sm-3" role="complementary">
                <?php print render($page['sidebar_first']); ?>
            </aside>  <!-- /#sidebar-first -->
        <?php endif; ?>

        <section<?php print $content_column_class; ?>>
            <?php if (!empty($tabs)): ?>
                <?php print render($tabs); ?>
            <?php endif; ?>
            <div id="mapDiv" class="well relativePos">
                <?php print $messages; ?>
                <?php print render($page['content']); ?>
            </div>
        </section>

        <?php if (!empty($page['sidebar_second'])): ?>
            <aside class="col-sm-3" role="complementary">
                <?php print render($page['sidebar_second']); ?>
            </aside>  <!-- /#sidebar-second -->
        <?php endif; ?>

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
            <img src="/<?php print path_to_theme(); ?>/img/facebook.jpg" class="socialLogo" alt="Retrouvez-nous sur Facebook" title="Retrouvez-nous sur Facebook"/>
            <img src="/<?php print path_to_theme(); ?>/img/twitter.jpg" class="socialLogo" alt="Retrouvez-nous sur Twitter" title="Retrouvez-nous sur Twitter"/>
            <img src="/<?php print path_to_theme(); ?>/img/contact.jpg" class="socialLogo" alt="Contactez-nous" title="Contactez-nous"/>
        </div>
    </div>
    <div class="row">
        <div class="col-xs-12">
            <?php print render($page['partners_footer']); ?>
            <p id="europeFooter">
                <img height="50px" src="/<?=path_to_theme()?>/img/Logo-UE.jpg" alt="Union Européenne"/> <img height="50px" src="/<?=path_to_theme()?>/img/feder.jpg" alt="FEDER"/>La POPP Breizh est cofinancée par l'Union européenne.
            </p>
        </div>
    </div>
</footer>

