<?php

/**
 * @file
 * template.php
 */
function popp_preprocess_page(&$variables){
    if (!empty($variables['page']['sidebar_second'])){
        foreach($variables['page']['sidebar_second'] as $block=>&$content){
            if($block == "user_login"){
                $content['#block']->subject = 'Se connecter';
                $content['actions']['submit']['#value'] = 'Connexion';
                $content['actions']['submit']['#prefix'] = '<div class="marginTop">';
                $content['actions']['submit']['#suffix'] = '<a class="btn btn-danger" href="/user/register">S\'inscrire</a></div>';
                $content['actions']['submit']['#attributes']['class'][] = 'btn-success';
                unset($content['links']);
            }
        }
    }
    if (isset($variables['node']->type) && $variables['node']->type == "popp_photo_serie") {
        $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    }
}
function popp_menu_link(array $variables) {
    $element = $variables['element'];
    $sub_menu = '';
    $element['#localized_options']['attributes']['title'] = $element['#title'];
    if ($element['#below']) {
        // Prevent dropdown functions from being added to management menu so it
        // does not affect the navbar module.
        if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
            $sub_menu = drupal_render($element['#below']);
        }
        elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
            // Add our own wrapper.
            unset($element['#below']['#theme_wrappers']);
            $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
            // Generate as standard dropdown.
            $element['#title'] .= ' <span class="caret"></span>';
            $element['#attributes']['class'][] = 'dropdown';
            $element['#localized_options']['html'] = TRUE;

            // Set dropdown trigger element to # to prevent inadvertant page loading
            // when a submenu link is clicked.
            $element['#localized_options']['attributes']['data-target'] = '#';
            $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
            $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
        }
    }
    // On primary navigation menu, class 'active' is not set on active menu item.
    // @see https://drupal.org/node/1896674
    if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
        $element['#attributes']['class'][] = 'active';
    }
    if ($element['#title'] == '<span class="glyphicon glyphicon-log-in"></span>') {
        $element['#localized_options']['html'] = TRUE;
        $element['#localized_options']['attributes']['title'] = t("Connexion");
    }
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
