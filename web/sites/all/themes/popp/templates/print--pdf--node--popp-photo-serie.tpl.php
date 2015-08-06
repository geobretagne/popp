<?php
global $user;
$photoN = count($node->field_popp_serie_photo_list[LANGUAGE_NONE]) - 1;

/**
 * @file
 * Default theme implementation to display a printer-friendly version page.
 * This file is akin to Drupal's page.tpl.php template. The contents being
 * displayed are all included in the $content variable, while the rest of the
 * template focuses on positioning and theming the other page elements.
 * All the variables available in the page.tpl.php template should also be
 * available in this template. In addition to those, the following variables
 * defined by the print module(s) are available:
 * Arguments to the theme call:
 * - $node: The node object. For node content, this is a normal node object.
 *   For system-generated pages, this contains usually only the title, path
 *   and content elements.
 * - $format: The output format being used ('html' for the Web version, 'mail'
 *   for the send by email, 'pdf' for the PDF version, etc.).
 * - $expand_css: TRUE if the CSS used in the file should be provided as text
 *   instead of a list of @include directives.
 * - $message: The message included in the send by email version with the
 *   text provided by the sender of the email.
 * Variables created in the preprocess stage:
 * - $print_logo: the image tag with the configured logo image.
 * - $content: the rendered HTML of the node content.
 * - $scripts: the HTML used to include the JavaScript files in the page head.
 * - $footer_scripts: the HTML  to include the JavaScript files in the page
 *   footer.
 * - $sourceurl_enabled: TRUE if the source URL infromation should be
 *   displayed.
 * - $url: absolute URL of the original source page.
 * - $source_url: absolute URL of the original source page, either as an alias
 *   or as a system path, as configured by the user.
 * - $cid: comment ID of the node being displayed.
 * - $print_title: the title of the page.
 * - $head: HTML contents of the head tag, provided by drupal_get_html_head().
 * - $robots_meta: meta tag with the configured robots directives.
 * - $css: the syle tags contaning the list of include directives or the full
 *   text of the files for inline CSS use.
 * - $sendtoprinter: depending on configuration, this is the script tag
 *   including the JavaScript to send the page to the printer and to close the
 *   window afterwards.
 * print[--format][--node--content-type[--nodeid]].tpl.php
 * The following suggestions can be used:
 * 1. print--format--node--content-type--nodeid.tpl.php
 * 2. print--format--node--content-type.tpl.php
 * 3. print--format.tpl.php
 * 4. print--node--content-type--nodeid.tpl.php
 * 5. print--node--content-type.tpl.php
 * 6. print.tpl.php
 * Where format is the ouput format being used, content-type is the node's
 * content type and nodeid is the node's identifier (nid).
 * @see     print_preprocess_print()
 * @see     theme_print_published
 * @see     theme_print_breadcrumb
 * @see     theme_print_footer
 * @see     theme_print_sourceurl
 * @see     theme_print_url_list
 * @see     page.tpl.php
 * @ingroup print
 */
?>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?= $language->language; ?>" version="XHTML+RDFa 1.0"
      dir="<?= $language->dir; ?>">
<head>
</head>
<body style="width:100%;font-family:sans-serif;">
<style type="text/css">
    h1 {
        font-size: 15px;
    }

    h2 {
        font-size: 13px;
    }

    td {
        font-size: 11px;
    }

    th {
        font-size: 12px;
        padding: 5px 0;
        text-align: center;
    }

    table {
        border-collapse: collapse;
        border-color: black;
        width: 100%;
    }
</style>
<div style="font-family:sans-serif;height:26.7cm;">
    <?php if ($print_logo): ?>
        <div style="font-size:13px; font-style:italic;"><img alt="logo" src="<?= theme_get_setting('logo') ?>"
                                                             height="50px"/><span
                style="position:absolute;top:16px;left:70px;">Plateforme des
            Observatoires Photographiques du Paysage de
            Bretagne</span>
        </div>
    <?php endif; ?>

    <h1 class="print-title">Fiche terrain</h1>
    <table border="1">
        <thead>
        <tr>
            <th colspan="2">Série: <?= $node->title; ?></th>
        </tr>
        </thead>
        <tbody>
        <tr>
            <td style="width:49%;">
                Identifiant: <?= $node->field_popp_serie_identifier[LANGUAGE_NONE][0]["value"]; ?> </td>
            <td style="width:50%;">Identifiant photo
                initiale: <?= $node->field_popp_serie_identifier[LANGUAGE_NONE][0]["value"]; ?>
                01
            </td>
        </tr>
        <tr>
            <th colspan="2">Localisation</th>
        </tr>
        <tr>
            <td style="width:49%;">
                Pays: <?= $node->field_popp_serie_country[LANGUAGE_NONE][0]["taxonomy_term"]->name; ?> </td>
            <td style="width:50%;">
                Région: <?= $node->field_popp_serie_district[LANGUAGE_NONE][0]["taxonomy_term"]->name; ?> </td>
        </tr>
        <tr>
            <td style="width:49%;">
                Département: <?= $node->field_popp_serie_county[LANGUAGE_NONE][0]["taxonomy_term"]->name; ?>  </td>
            <td style="width:50%;">
                Commune: <?= $node->field_popp_serie_town[LANGUAGE_NONE][0]["taxonomy_term"]->name; ?>  </td>
        </tr>
        <tr>
            <td colspan="2">Adresse / lieu de la prise de
                vue: <?= $node->field_popp_serie_address[LANGUAGE_NONE][0]["value"]; ?>  </td>
        </tr>
        <tr>
            <td colspan="2">Coordonnées GPS:
                <?php
                $coordinates = new PostgisGeometrySet("GEOMETRYCOLLECTION", "4326");
                $tab         = $node->field_popp_serie_place[LANGUAGE_NONE];
                $coordinates->fromGeometry($tab);
                $wkt = $coordinates->getText(); //WKT
                ?>
            </td>
        </tr>
        <tr>
            <td style="width:49%;">WGS
                84:<br/><?= str_replace("))", "", (str_replace("GEOMETRYCOLLECTION(POINT(", "", $wkt))) ?>
            </td>
            <td style="width:49%;">Lambert93:<br/>
                <?php
                $coordinates->transform("2154");
                $lambert = $coordinates->getText();
                print(str_replace("))", "", (str_replace("GEOMETRYCOLLECTION(POINT(", "", $lambert))));
                ?>
            </td>
        </tr>
        <tr>
            <td colspan="2">Observations pour la
                re-photographie: <?= $node->field_popp_serie_observ[LANGUAGE_NONE][0]["value"] ?>  </td>
        </tr>
        <?php
        $firstPhoto  = $node->field_popp_serie_photo_list[LANGUAGE_NONE][0]['entity'];
        $url_first   = file_create_url($firstPhoto->field_popp_photo_file[LANGUAGE_NONE][0]['uri']);
        $url_sketch  = empty($node->field_popp_serie_sketch) ? false : file_create_url($node->field_popp_serie_sketch[LANGUAGE_NONE][0]["uri"]);
        $url_trip    = empty($node->field_popp_serie_tripod) ? false : file_create_url($node->field_popp_serie_tripod[LANGUAGE_NONE][0]["uri"]);
        $url_ign     = empty($node->field_popp_serie_ign) ? false : file_create_url($node->field_popp_serie_ign[LANGUAGE_NONE][0]["uri"]);
        $url_aerial  = empty($node->field_popp_serie_aerial) ? false : file_create_url($node->field_popp_serie_aerial[LANGUAGE_NONE][0]["uri"]);
        $url_context = empty($node->field_popp_serie_context_photo) ? false : file_create_url($node->field_popp_serie_context_photo[LANGUAGE_NONE][0]["uri"]);
        ?>

        <tr>
            <th colspan="2">
                Documents connexes
            </th>
        </tr>
        <tr>
            <td colspan="2">
                Photo initiale de la série
            </td>
        </tr>
        <tr>
            <td colspan="2">
                <img style="width:100%;" width="700" src="<?= $url_first ?>" alt="Non-renseignée"/>
            </td>
        </tr>
        </tbody>
    </table>

</div>
<div style="font-family:sans-serif;height:26.7cm;">
    <table border="1">
        <tbody>
        <tr>
            <th style="width:49%;">Croquis</th>
            <th style="width:50%;">Photo du trépied</th>
        </tr>
        <tr>
            <td style="width:49%;"> <?= false !== $url_sketch ? '<img src="' . $url_sketch . '" alt="" style="width:100%;" width="350">' : 'Non-renseigné'; ?>  </td>
            <td style="width:50%;"> <?= false !== $url_trip ? '<img src="' . $url_trip . '" alt="" style="width:100%;" width="350">' : 'Non-renseignée'; ?></td>
        </tr>
        <tr>
            <th style="width:49%;">Carte IGN</th>
            <th style="width:50%;">Photo aérienne</th>
        </tr>
        <tr>
            <td style="width:49%;"> <?= false !== $url_ign ? '<img src="' . $url_ign . '" alt="" style="width:100%;" width="350">' : 'Non-renseignée' ?> </td>
            <td style="width:50%;"><?= false !== $url_aerial ? '<img src="' . $url_aerial . '" alt="" style="width:100%;" width="350">' : 'Non-renseignée' ?> </td>
        </tr>
        </tbody>
    </table>
</div>
<div style="font-family:sans-serif;height:26.7cm;">
    <table border="1">
        <tbody>
        <tr>
            <th colspan="2">Photo contextuelle</th>
        </tr>
        <tr>
            <td colspan="2"> <?= false !== $url_context ? '<img src="' . $url_context . '" alt="" width="100%">' : 'Non-renseignée' ?> </td>
        </tr>
        </tbody>
    </table>
</div>
<div style="font-family:sans-serif;height:26.7cm;">
    <table border="1">
        <thead>
        <tr>
            <th colspan="4">Description des éléments de la photographie</th>
        </tr>
        </thead>
        <tbody>
        <tr>
            <td colspan="4">Axe(s)
                thématique(s): <?= $node->field_popp_serie_thematic_axis[LANGUAGE_NONE][0]["taxonomy_term"]->name; ?></td>
        </tr>
        <tr>
            <td colspan="4">Description précide des éléments / des
                changements: <?= $node->field_popp_serie_landscape_typo[LANGUAGE_NONE][0]["taxonomy_term"]->name; ?></td>
        </tr>

        <tr>
            <th colspan="4">Données à comparer pour la reconduction</th>
        </tr>
        <tr>
            <th colspan="2">Les métadonnées et données de référence de la photo N</th>
            <th colspan="2">Les métadonnées et données à vérifier ou à modifier sur le terrain pour la photo N+1 en
                comparaison avec le tableau de gauche
            </th>
        </tr>
        <tr>
            <td width="25%">Heure</td>
            <td width="25%">

                <?php
                if (! empty($node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_hour[LANGUAGE_NONE])) {
                    $hour = $node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_hour[LANGUAGE_NONE][0]["value"];
                    $hour = date("H:i:s", $hour);
                    print $hour;
                } else {
                    print 'Non-renseignée';
                }
                ?>

            </td>
            <td width="25%">Heure</td>
            <td width="25%"></td>
        </tr>
        <tr>
            <td width="25%">Date</td>
            <td width="25%">
                <?php
                $lastShot = new DateTime($node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_date[LANGUAGE_NONE][0]["value"]);
                $lastShot = $lastShot->format('d/m/Y');
                print $lastShot;
                ?>
            </td>
            <td width="25%">Date</td>
            <td width="25%"></td>
        </tr>
        <tr>
            <td width="25%">Coordonnées GPS (WGS84)</td>
            <td width="25%">
                <?php
                $coordinates = new PostgisGeometrySet("GEOMETRYCOLLECTION", "4326");
                $tab         = $node->field_popp_serie_place[LANGUAGE_NONE];
                $coordinates->fromGeometry($tab);
                $gsp = $coordinates->getText();
                print('<br/>' . str_replace("))", "", (str_replace("GEOMETRYCOLLECTION(POINT(", "", $gsp))));
                ?>
            </td>
            <td width="25%">Coordonnées GPS</td>
            <td width="25%"></td>
        </tr>
        <tr>
            <td width="25%">Orientation de la photo</td>
            <td width="25%"><?= ! empty($node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_orientation) ? $node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_orientation[LANGUAGE_NONE][0]["value"] : ''; ?> </td>
            <td width="25%">Orientation de la photo</td>
            <td width="25%"></td>
        </tr>
        <tr>
            <td width="25%">Hauteur du trépied</td>
            <td width="25%"><?= ! empty($node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_tripod_height) ? $node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_tripod_height[LANGUAGE_NONE][0]["value"] : ''; ?> </td>
            <td width="25%">Hauteur du trépied</td>
            <td width="25%"></td>
        </tr>
        <tr>
            <td width="25%">Type d'appareil photo</td>
            <td width="25%"><?= ! empty($node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_camera_type) ? $node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_camera_type[LANGUAGE_NONE][0]["value"] : ''; ?> </td>
            <td width="25%">Type d'appareil photo</td>
            <td width="25%"></td>
        </tr>
        <tr>
            <td width="25%">focale (en mm)</td>
            <td width="25%"><?= ! empty($node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_focal) ? $node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_focal[LANGUAGE_NONE][0]["value"] : ''; ?> </td>
            <td width="25%">focale (en mm)</td>
            <td width="25%"></td>
        </tr>
        <tr>
            <td width="25%">Ouverture du diaphragme</td>
            <td width="25%"><?= ! empty($node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_aperture) ? $node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_aperture[LANGUAGE_NONE][0]["value"] : ''; ?> </td>
            <td width="25%">Ouverture du diaphragme</td>
            <td width="25%"></td>
        </tr>
        <tr>
            <td width="25%">Type de film</td>
            <td width="25%"><?= ! empty($node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_film_type) ? $node->field_popp_serie_photo_list[LANGUAGE_NONE][$photoN]["entity"]->field_popp_photo_film_type[LANGUAGE_NONE][0]["value"] : ''; ?> </td>
            <td width="25%">Type de film</td>
            <td width="25%"></td>
        </tr>
        <tr>
            <td width="25%">Commentaire technique sur la reconduction</td>
            <td colspan=3>&nbsp;</td>
        </tr>

        </tbody>
    </table>
    <div style="font-size:12px;"><br/>&nbsp;<br/>Denière mise à jour:
        <?php
        print format_date($node->changed, 'short');
        ?>
    </div>
</div>
</body>
</html>