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
      'openlayers_behavior_cluster_popp' => array(
        'clusterlayer' => array(
          'popp_views_home_layer_openlayers_2' => 'popp_views_home_layer_openlayers_2',
          'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
        ),
        'distance' => '20',
        'threshold' => '2',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'low_stroke_color' => 'rgb(141, 203, 61)',
        'low_opacity' => '0.8',
        'low_point_radius' => '10',
        'low_label_color' => '#000000',
        'low_label_opacity' => '0.8',
        'low_label_outline' => '1',
        'low_label_outline_color' => '#ffffff',
        'middle_color' => 'rgb(49, 190, 145)',
        'middle_stroke_color' => 'rgb(49, 190, 145)',
        'middle_opacity' => '0.8',
        'middle_point_radius' => '16',
        'middle_label_color' => '#000000',
        'middle_label_opacity' => '0.8',
        'middle_label_outline' => '1',
        'middle_label_outline_color' => '#ffffff',
        'high_color' => 'rgb(35, 59, 177)',
        'high_stroke_color' => 'rgb(35, 59, 177)',
        'high_opacity' => '0.8',
        'high_point_radius' => '22',
        'high_label_color' => '#000000',
        'high_label_opacity' => '0.8',
        'high_label_outline' => '1',
        'high_label_outline_color' => '#ffffff',
        'externalGraphic' => '/sites/all/themes/popp/img/camera_cluster.png',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
        'div' => '',
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_popp_series_display' => array(
        'layers' => array(
          'popp_views_home_layer_openlayers_2' => 'popp_views_home_layer_openlayers_2',
          'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
        ),
      ),
      'openlayers_behavior_popp_popup' => array(
        'layers' => array(
          'popp_views_home_layer_openlayers_2' => 'popp_views_home_layer_openlayers_2',
          'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
        ),
        'popupAtPosition' => 'mouse',
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_search_behavior_popp' => array(
        'layers' => array(
          'popp_views_home_layer_openlayers_2' => 'popp_views_home_layer_openlayers_2',
          'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
        ),
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'ortho_ancienne' => 'ortho_ancienne',
      'ortho' => 'ortho',
      'osm_mapnik' => 'osm_mapnik',
      'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
      'popp_views_home_layer_openlayers_2' => 'popp_views_home_layer_openlayers_2',
    ),
    'layer_weight' => array(
      'popp_views_home_layer_openlayers_1' => '0',
      'popp_views_home_layer_openlayers_2' => '0',
      'postgis_formatter_layer' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
    ),
    'layer_styles' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'postgis_formatter_layer' => '0',
      'popp_views_home_layer_openlayers_2' => 'popp_markers_pa',
      'popp_views_home_layer_openlayers_1' => 'popp_markers',
    ),
    'layer_styles_select' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'postgis_formatter_layer' => '0',
      'popp_views_home_layer_openlayers_2' => 'popp_marker_focus',
      'popp_views_home_layer_openlayers_1' => 'popp_marker_focus',
    ),
    'layer_styles_temporary' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'postgis_formatter_layer' => '0',
      'popp_views_home_layer_openlayers_2' => 'popp_marker_hover',
      'popp_views_home_layer_openlayers_1' => 'popp_marker_hover',
    ),
    'layer_activated' => array(
      'popp_views_home_layer_openlayers_2' => 'popp_views_home_layer_openlayers_2',
      'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'layer_switcher' => array(
      'popp_views_home_layer_openlayers_2' => 'popp_views_home_layer_openlayers_2',
      'popp_views_home_layer_openlayers_1' => 'popp_views_home_layer_openlayers_1',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'popp_markers',
      'select' => 'popp_marker_focus',
      'temporary' => 'popp_marker_hover',
    ),
  );
  $export['popp_home_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'popp_serie_edit_map';
  $openlayers_maps->title = 'Carte édition série';
  $openlayers_maps->description = 'This map is only used while editing or creating a photo serie';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-2.109375006808678, 48.224672647766155',
        'zoom' => '0',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
        'div' => '',
      ),
      'openlayers_behavior_mouseposition' => array(
        'prefix' => '',
        'separator' => ', ',
        'suffix' => '',
        'numDigits' => '8',
        'emptyString' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_ole' => array(
        'processing_controls' => array(
          'MergeFeature' => 0,
          'SplitFeature' => 0,
          'CleanFeature' => 0,
          'DeleteFeature' => 0,
          'ImportFeature' => 0,
        ),
        'editing_controls' => array(
          'DragFeature' => 0,
          'DrawHole' => 0,
          'ModifyFeature' => 0,
        ),
        'other_controls' => array(
          'Navigation' => 'Navigation',
          'UndoRedo' => 0,
          'LayerSettings' => 0,
          'SnappingSettings' => 0,
        ),
        'feature_types' => array(
          'point' => 0,
          'path' => 0,
          'polygon' => 0,
        ),
        'feature_limit' => '0',
        'element_id' => '',
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'openlayers_kml_example' => 'openlayers_kml_example',
    ),
    'layer_weight' => array(
      'postgis_formatter_layer' => '0',
      'popp_views_home_layer_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
    ),
    'layer_styles' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'popp_views_home_layer_openlayers_1' => '0',
      'postgis_formatter_layer' => '0',
    ),
    'layer_styles_select' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'popp_views_home_layer_openlayers_1' => '0',
      'postgis_formatter_layer' => '0',
    ),
    'layer_styles_temporary' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'popp_views_home_layer_openlayers_1' => '0',
      'postgis_formatter_layer' => '0',
    ),
    'layer_activated' => array(
      'openlayers_kml_example' => 'openlayers_kml_example',
      'openlayers_geojson_picture_this' => 0,
      'popp_views_home_layer_openlayers_1' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'layer_switcher' => array(
      'openlayers_kml_example' => 'openlayers_kml_example',
      'openlayers_geojson_picture_this' => 0,
      'popp_views_home_layer_openlayers_1' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['popp_serie_edit_map'] = $openlayers_maps;

  return $export;
}
