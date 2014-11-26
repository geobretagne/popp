<?php
?>
<header id="navbar" role="banner" class="navbar navbar-default">
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

        <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
            <div class="navbar-collapse collapse">
                <nav id="topMenu" role="navigation">
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
            <div class="well">
                <img class="image" src="/<?=path_to_theme()?>/img/carte.png" alt="Carte des OPP" title="Carte des OPP"/>
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
            <img src="/<?php print path_to_theme(); ?>/img/logo_footer.jpg" alt="<?php print t('Home'); ?>" />
        </div>
        <div class="col-xs-7">
            <?php print render($page['footer_bottom']); ?>
        </div>
        <div class="col-xs-3">
            <img src="/<?php print path_to_theme(); ?>/img/facebook.jpg" class="socialLogo" alt="Retrouvez-nous sur Facebook" title="Retrouvez-nous sur Facebook"/>
            <img src="/<?php print path_to_theme(); ?>/img/twitter.jpg" class="socialLogo" alt="Retrouvez-nous sur Twitter" title="Retrouvez-nous sur Twitter"/>
            <img src="/<?php print path_to_theme(); ?>/img/contact.jpg" class="socialLogo" alt="Contactez-nous" title="Contactez-nous"/>
        </div>
    </div>
</footer>

