<?php

/**
 * @file
 * template.php
 */
function popp_preprocess_page(&$variables)
{
    if (! empty($variables['page']['sidebar_second'])) {
        foreach ($variables['page']['sidebar_second'] as $block => &$content) {
            if ($block == "user_login") {
                $content['#block']->subject                             = 'Se connecter';
                $content['actions']['submit']['#value']                 = 'Connexion';
                $content['actions']['submit']['#prefix']                = '<div class="marginTop">';
                $content['actions']['submit']['#suffix']                = '<a class="btn btn-danger" href="/user/register">S\'inscrire</a></div>';
                $content['actions']['submit']['#attributes']['class'][] = 'btn-success';
                unset($content['links']);
            }
        }
    }
    if (isset($variables['node']->type) && $variables['node']->type == "popp_photo_serie") {
        $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    }
}

function popp_menu_link(array $variables)
{
    $element                                              = $variables['element'];
    $sub_menu                                             = '';
    $element['#localized_options']['attributes']['title'] = $element['#title'];
    if ($element['#below']) {
        // Prevent dropdown functions from being added to management menu so it
        // does not affect the navbar module.
        if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
            $sub_menu = drupal_render($element['#below']);
        } elseif ((! empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
            // Add our own wrapper.
            unset($element['#below']['#theme_wrappers']);
            $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
            // Generate as standard dropdown.
            $element['#title'] .= ' <span class="caret"></span>';
            $element['#attributes']['class'][]     = 'dropdown';
            $element['#localized_options']['html'] = true;

            // Set dropdown trigger element to # to prevent inadvertant page loading
            // when a submenu link is clicked.
            $element['#localized_options']['attributes']['data-target'] = '#';
            $element['#localized_options']['attributes']['class'][]     = 'dropdown-toggle';
            $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
        }
    }
    // On primary navigation menu, class 'active' is not set on active menu item.
    // @see https://drupal.org/node/1896674
    if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
        $element['#attributes']['class'][] = 'active';
    }
    switch ($element['#title']) {
        case '<span class="glyphicon glyphicon-log-out"></span>':
            $element['#localized_options']['html']                = true;
            $element['#localized_options']['attributes']['title'] = t("Déconnexion");
            break;
        case '<span class="glyphicon glyphicon-log-in"></span>':
            $element['#localized_options']['html']                = true;
            $element['#localized_options']['attributes']['title'] = t("Connexion");
            break;
        case  '<span class="glyphicon glyphicon-folder-open"></span>' :
            $element['#localized_options']['html']                = true;
            $element['#localized_options']['attributes']['title'] = t("Mon Panier");
    }
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);

    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}


function popp_preprocess_print(&$vars)
{

    // add support for template files for PDF and Views

    $cpath  = current_path();
    $crumbs = explode('/', $cpath);

    // if first crumb is "print" remove it

    if ($crumbs[0] == "print") {
        array_shift($crumbs);
    }

    $vars['theme_hook_suggestions'][] = "print__path_${crumbs[0]}";
    $vars['theme_hook_suggestions'][] = "print__${vars['format']}__path_${crumbs[0]}";

    // if there is more than one crumb
    if (count($crumbs) > 1) {

        // remove crumb already used
        array_shift($crumbs);

        foreach ($crumbs as $key => $crumb) {

            // get number of current theme suggestions
            $size = count($vars['theme_hook_suggestions']);

            // add crumb to theme suggestions
            $vars['theme_hook_suggestions'][] = $vars['theme_hook_suggestions'][$size - 2] . "_${crumbs[$key]}";
            $vars['theme_hook_suggestions'][] = $vars['theme_hook_suggestions'][$size - 1] . "_${crumbs[$key]}";
        }
    }
}

function popp_file_link($variables) {
    $file = $variables['file'];
    $icon_directory = $variables['icon_directory'];

    $url = file_create_url($file->uri);
    $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

    // Set options as per anchor format described at
    // http://microformats.org/wiki/file-format-examples
    $options = array(
        'attributes' => array(
            'type' => $file->filemime . '; length=' . $file->filesize,
        ),
    );

    // Use the description as the link text if available.
    if (empty($file->description)) {
        $link_text = $file->filename;
    }
    else {
        $link_text = $file->description;
        $options['attributes']['title'] = check_plain($file->filename);
    }

    //open files of particular mime types in new window
    $new_window_mimetypes = array('application/pdf','text/plain');
    if (in_array($file->filemime, $new_window_mimetypes)) {
        $options['attributes']['target'] = '_blank';
    }

    return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
}