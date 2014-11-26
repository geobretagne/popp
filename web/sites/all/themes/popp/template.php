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
    if (isset($variables['node']->type) && $variables['node']->type == "photo") {
        $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    }
}
//
//function popp_breadcrumb($variables) {
//    $sep = ' &gt; ';
//    if (count($variables['breadcrumb']) > 1) {
//        if(is_array($variables['breadcrumb']))
//            return implode($sep, $variables['breadcrumb']) . $sep;
//    }
//    else {
//        return t("Home");
//    }
//}
