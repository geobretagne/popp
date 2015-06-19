<?php

  global $user;
  $photoN=count($node->field_popp_serie_photo_list["und"])-1;


?>

<?php

/**
 * @file
 * Default theme implementation to display a printer-friendly version page.
 *
 * This file is akin to Drupal's page.tpl.php template. The contents being
 * displayed are all included in the $content variable, while the rest of the
 * template focuses on positioning and theming the other page elements.
 *
 * All the variables available in the page.tpl.php template should also be
 * available in this template. In addition to those, the following variables
 * defined by the print module(s) are available:
 *
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
 *
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
 *
 * print[--format][--node--content-type[--nodeid]].tpl.php
 *
 * The following suggestions can be used:
 * 1. print--format--node--content-type--nodeid.tpl.php
 * 2. print--format--node--content-type.tpl.php
 * 3. print--format.tpl.php
 * 4. print--node--content-type--nodeid.tpl.php
 * 5. print--node--content-type.tpl.php
 * 6. print.tpl.php
 *
 * Where format is the ouput format being used, content-type is the node's
 * content type and nodeid is the node's identifier (nid).
 *
 * @see print_preprocess_print()
 * @see theme_print_published
 * @see theme_print_breadcrumb
 * @see theme_print_footer
 * @see theme_print_sourceurl
 * @see theme_print_url_list
 * @see page.tpl.php
 * @ingroup print
 */
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>">
  <head>
    <?php print $head; ?>
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <?php print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>' type='image/x-icon' />
    <?php endif; ?>
    <?php print $css; ?>
  </head>
  <body>
    <?php if ($print_logo): ?>
      <div class="print-logo"><?php print $print_logo; ?>   Plateforme des Observatoires Photographiques du Paysage de Bretagne</div>
    <?php endif; ?>

      <h1 class="print-title">Fiche terrain</h1>
      
              <h2>Série: <?php print $node->title;?></h2>
              <table width=100% border=1>
                  <tbody>
                    <tr>
                      <td width=50%>Identifiant: <?php print $node->field_popp_serie_identifier["und"][0]["value"];?> </td>
                      <td width=50%>Identifiant photo initiale: <?php print $node->field_popp_serie_identifier["und"][0]["value"];?> 01 </td>
                    </tr>
                  </tbody>
              </table>

              <h2>Localisation</h2>
              <table width=100% border=1>
                  <tbody>
                      <tr>
                        <td width=50%>Pays: <?php print $node->field_popp_serie_country["und"][0]["taxonomy_term"]->name;?> </td>
                        <td width=50%>Région: <?php print $node->field_popp_serie_district["und"][0]["taxonomy_term"]->name;?> </td>
                      </tr>   
                      <tr>
                        <td width=50%>Département: <?php print $node->field_popp_serie_county["und"][0]["taxonomy_term"]->name;?>  </td>
                        <td width=50%>Commune: <?php print $node->field_popp_serie_town["und"][0]["taxonomy_term"]->name;?>  </td>
                      </tr>  
                      <tr>
                        <td colspan=2>Adresse / lieu de la prise de vue: <?php print $node->field_popp_serie_address["und"][0]["value"]; ?>  </td>
                      </tr> 
                      <tr>
                        <td colspan=2>Coordonnées GPS: 
                        <?php 
                          $obj  = new PostgisGeometrySet("GEOMETRYCOLLECTION", "4326");
                          $tab = $node->field_popp_serie_place["und"];
                          $obj->fromGeometry($tab);
                          //$obj->transform("4326");
                          //var_dump ($obj->transform("2154")); //Lambert93
                          $gsp=$obj->getText(); //WKT
                          print(str_replace("))","", (str_replace("GEOMETRYCOLLECTION(POINT(","",$gsp)))); 
                        ?> 
                        </td>
                      </tr>
                      <tr>
                        <td width=50%>WGS 84:  </td>
                        <td width=50%>Lambert93:  

                        <?php 
                            $obj2  = new PostgisGeometrySet("GEOMETRYCOLLECTION", "2154");
                            $tab2 = $node->field_popp_serie_place["und"];
                            $obj2->fromGeometry($tab2);
                            //$obj->transform("4326");
                            //var_dump ($obj->transform("2154")); //Lambert93
                            $lamb=$obj2->getText(); //WKT
                            //print ($lamb);
                            print(str_replace("))","", (str_replace("GEOMETRYCOLLECTION(POINT(","",$lamb)))); 
                        ?> 


                        </td>
                      </tr>
                      <tr>
                        <td colspan=2>Observations pour la re-photographie: <?php print $node->field_popp_serie_observ["und"][0]["value"]; ?>  </td>
                      </tr>
                  </tbody>
              </table>

              <h2> Documents connexes</h2>
              <table  width=100% border=1>
                <tbody>
                        <tr>
                          <th colspan=2>Photo initiale de la série</th>
                        </tr> 
                        <tr>
                            <td colspan=2>

                            <?php
                             $url_ref=file_create_url($node->field_popp_serie_refdoc["und"][0]["entity"]->field_popp_refdoc_file["und"][0]["uri"]);
                             echo '<img src="'.$url_ref.'" alt="" width="100%">';
                            ?>

                            </td>
                        </tr>
                        <tr>
                          <th width=50%>Croquis</th>
                          <th width=50%>Photo du trépied </th>
                        </tr>  
                        <tr>
                            <td width=50%>
                            <?php 
                             $url_sketch = file_create_url($node->field_popp_serie_sketch["und"][0]["uri"]);
                             echo '<img src="'.$url_sketch.'" alt="" width="100%">';
                            ?>
                            </td>
                            <td width=50%>
                            <?php 
                             $url_sketch = file_create_url($node->field_popp_serie_tripod["und"][0]["uri"]);
                             echo '<img src="'.$url_sketch.'" alt="" width="100%">';
                            ?>
                            </td>

                        <tr>
                          <th width=50%>Carte IGN  </th>
                          <th width=50%>Photo aérienne </th>
                        </tr>  
                        <tr>
                            <td width=50%>
                            <?php 
                             $url_sketch = file_create_url($node->field_popp_serie_ign["und"][0]["uri"]);
                             echo '<img src="'.$url_sketch.'" alt="" width="100%">';
                            ?>
                            </td>
                            <td width=50%>
                            <?php 
                             $url_sketch = file_create_url($node->field_popp_serie_ign["und"][0]["uri"]);
                             echo '<img src="'.$url_sketch.'" alt="" width="100%">';
                            ?>
                            </td>
                        </tr>  
                            <th colspan=2>Photo contextuelle  </th>
                        </tr>  
                        <tr>
                            <td colspan=2>
                            <?php 
                             $url_sketch = file_create_url($node->field_popp_serie_context_photo["und"][0]["uri"]);
                             echo '<img src="'.$url_sketch.'" alt="" width="100%">';
                            ?>
                            </td>
                        </tr>      
                </tbody>
              </table>

              <h2>Description des éléments de la photographie</h2>
              <table width=100% border=1>
                    <tbody>
                        <tr>
                          <td>Axe(s) thématique(s): <?php print $node->field_popp_serie_thematic_axis["und"][0]["taxonomy_term"]->name; ?></td>
                        </tr> 
                        <tr>
                            <td>Axe(s) thématique(s) locaux: <?php print $node->field_popp_serie_loc_axes["und"][0]["taxonomy_term"]->name; ?></td>
                        </tr>
                        <tr>
                            <td>Description précide des éléments / des changements: <?php print $node->field_popp_serie_landscape_typo["und"][0]["taxonomy_term"]->name; ?></td>
                        </tr>
     
                    </tbody>
               </table>


              <h2>Données à comparer pour la reconduction</h2>
              <table width=100% border=1>
                    <tbody>
                        <tr>
                          <th colspan=2>Les métadonnées et données de référence de la photo N</th>
                          <th colspan=2>Les métadonnées et données à vérifier ou à modifier sur le terrain pour la photo N+1 en comparaison avec le tableau de gauche</th>
                        </tr>
                        <tr> 
                          <td width=25%>Heure  </td>
                          <td width=25%>

                          <?php 
                          $hour = $node->field_popp_serie_photo_list["und"][$photoN]["entity"]->field_popp_photo_hour["und"][0]["value"];
                          $hour=date("H:i:s", $hour);
                          print $hour;
                          ?>

                          </td>
                          <td width=25%>Heure </td>
                          <td width=25%> </td>
                        </tr>
                        <tr> 
                          <td width=25%>Date </td>
                          <td width=25%>
                            <?php  
                            $lastShot = new DateTime($node->field_popp_serie_photo_list["und"][$photoN]["entity"]->field_popp_photo_date["und"][0]["value"]);
                            $lastShot = $lastShot->format('d/m/Y');
                            print $lastShot;
                            ?> 
                          </td>
                          <td width=25%>Date </td>
                          <td width=25%> </td>
                        </tr>
                        <tr> 
                          <td width=25%>Coordonnées GPS </td>
                          <td width=25%>Todo </td>
                          <td width=25%>Coordonnées GPS  </td>
                          <td width=25%> </td>
                        </tr>
                        <tr> 
                          <td width=25%>Orienation de la photo </td>
                          <td width=25%><?php print $node->field_popp_serie_photo_list["und"][$photoN]["entity"]->field_popp_photo_orientation["und"][0]["value"]; ?> </td>
                          <td width=25%>Orienation de la photo </td>
                          <td width=25%> </td>
                        </tr>
                        <tr> 
                          <td width=25%>Hauteur du trépied </td>
                          <td width=25%><?php print $node->field_popp_serie_photo_list["und"][$photoN]["entity"]->field_popp_photo_tripod_height["und"][0]["value"]; ?> </td>
                          <td width=25%>Hauteur du trépied  </td>
                          <td width=25%> </td>
                        </tr>
                        <tr> 
                          <td width=25%>Type d'appareil photo </td>
                          <td width=25%><?php print $node->field_popp_serie_photo_list["und"][$photoN]["entity"]->field_popp_photo_camera_type["und"][0]["value"]; ?> </td>
                          <td width=25%>Type d'appareil photo  </td>
                          <td width=25%> </td>
                        </tr>
                        <tr> 
                          <td width=25%>focale (en mm) </td>
                          <td width=25%><?php print $node->field_popp_serie_photo_list["und"][$photoN]["entity"]->field_popp_photo_focal["und"][0]["value"]; ?> </td>
                          <td width=25%>focale (en mm) </td>
                          <td width=25%> </td>
                        </tr>
                        <tr> 
                          <td width=25%>Ouverture du diaphragme </td>
                          <td width=25%><?php print $node->field_popp_serie_photo_list["und"][$photoN]["entity"]->field_popp_photo_aperture["und"][0]["value"]; ?> </td>
                          <td width=25%>Ouverture du diaphragme </td>
                          <td width=25%> </td>
                        </tr>
                        <tr> 
                          <td width=25%>Type de film </td>
                          <td width=25%><?php print $node->field_popp_serie_photo_list["und"][$photoN]["entity"]->field_popp_photo_film_type["und"][0]["value"]; ?> </td>
                          <td width=25%>Type de film  </td>
                          <td width=25%> </td>
                        </tr>
                        <tr> 
                          <td width=25%>Commentaire technique sur la reconduction </td>
                          <td colspan=3> </td>
                        </tr>
  
     
                    </tbody>
                </table>
                       
        
       
    <div class="print-footer"><?php print theme('print_footer'); ?></div>
    <hr class="print-hr" />
    <?php if ($sourceurl_enabled): ?>
      <div class="print-source_url">        <?php //print theme('print_sourceurl', array('url' => $source_url, 'node' => $node, 'cid' => $cid)); ?>
      </div>
    <?php endif; ?>
    <div class="print-links"> Denière mise à jour: 
      <?php 
      print $lastShot; 
      ?>
    </div>
    <?php print $footer_scripts; ?>
  </body>
</html>
