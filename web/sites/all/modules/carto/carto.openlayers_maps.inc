<?php
/**
 * @file
 * carto.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function carto_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'popp_home_map';
  $openlayers_maps->title = 'POPP Home Map';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '450px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-2.109375006808678, 48.224672647766155',
        'zoom' => '7',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_popp' => array(
        'layers' => array(
          'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
        'zoomToPoint' => 0,
        'zoomToCluster' => 0,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
    ),
    'layer_weight' => array(
      'popp_views_home_layer_openlayers_1' => '0',
      'postgis_formatter_layer' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
    ),
    'layer_styles' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'postgis_formatter_layer' => '0',
      'popp_views_home_layer_openlayers_1' => 'default',
    ),
    'layer_styles_select' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'postgis_formatter_layer' => '0',
      'popp_views_home_layer_openlayers_1' => 'default_select',
    ),
    'layer_styles_temporary' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'postgis_formatter_layer' => '0',
      'popp_views_home_layer_openlayers_1' => 'default_marker_red',
    ),
    'layer_activated' => array(
      'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'layer_switcher' => array(
      'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default_marker_gold',
    ),
  );
  $export['popp_home_map'] = $openlayers_maps;

  return $export;
}
