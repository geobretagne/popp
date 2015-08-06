<?php
/**
 * @file
 * carto.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function carto_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'popp_marker_focus';
  $openlayers_styles->title = 'POPP Marker focus';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/all/themes/popp/img/camera_focus.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 30,
    'graphicHeight' => 30,
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['popp_marker_focus'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'popp_marker_hover';
  $openlayers_styles->title = 'POPP Marker hover';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/all/themes/popp/img/camera_hover.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 30,
    'graphicHeight' => 30,
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['popp_marker_hover'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'popp_markers';
  $openlayers_styles->title = 'POPP Marker static';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/all/themes/popp/img/camera_icon.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 30,
    'graphicHeight' => 30,
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['popp_markers'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'popp_markers_pa';
  $openlayers_styles->title = 'popp_markers_pa';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/all/themes/popp/img/camera_icon_pa.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 30,
    'graphicHeight' => 30,
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['popp_markers_pa'] = $openlayers_styles;

  return $export;
}
