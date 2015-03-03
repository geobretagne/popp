<?php
/**
 * Created by PhpStorm.
 * User: lbodiguel
 * Date: 17/02/2015
 * Time: 17:22
 */


function getInfosFromSeries()
{
    $nodes = node_load_multiple(array(), array('type' => 'opp_photo'));
    $searchFields = [];
    foreach ($nodes as $node) {
        fetchTaxonomyField($searchFields, $node, t('Ensemble paysager'), t('Paysage'), 'landcape_set', 'field_popp_landscape_set');
        fetchTaxonomyField($searchFields, $node, t('Unité paysagère'), t('Paysage'), 'landscape_units', 'field_landscape_unit');
        fetchTaxonomyField($searchFields, $node, t('Pays'), t('Localisation'), 'popp_countries', 'field_popp_photo_country');
        fetchTaxonomyField($searchFields, $node, t('Région'), t('Localisation'), 'region', 'field_popp_photo_region');
        fetchTaxonomyField($searchFields, $node, t('Département'), t('Localisation'), 'counties', 'field_popp_photo_county');
        fetchTaxonomyField($searchFields, $node, t('Ville'), t('Localisation'), 'towns', 'field_popp_photo_town');
        getDatesFromPhotoSerie($searchFields, t('Dates'), $node);
    }
    setInfosUnique($searchFields);
    return $searchFields;
}

function setInfosUnique(&$searchFields)
{
    foreach ($searchFields as &$searchField) {
        foreach ($searchField as &$result) {
            if (isset($result['presentOnNode'])) {
                $result['presentOnNode'] = array_unique($result['presentOnNode']);
            }
        }
    }
}

function getDatesFromPhotoSerie(&$searchFields, $label, $nodeSerie)
{
    $items = field_get_items('node', $nodeSerie, 'field_popp_collection_photo');
    fetchPhotoYears($searchFields, $label, $nodeSerie->nid, $items);
    $searchFields[$label]['dates']['type'] = 'select';
    $searchFields[$label]['dates']['label'] = t('Années');
}

function fetchTaxonomyField(&$resultArray, $node,  $label, $category, $readableName, $fieldName)
{
    $results = [];
    if (isset($node->{$fieldName}['und'][0]['tid'])) {
        $term = taxonomy_term_load($node->{$fieldName}['und'][0]['tid']);
        $resultArray[$category][$readableName]['values'][$node->{$fieldName}['und'][0]['tid']]['presentOnNode'][] = $node->nid;
        $resultArray[$category][$readableName]['values'][$node->{$fieldName}['und'][0]['tid']]['label'] = $term->name;
    }
    $resultArray[$category][$readableName]['type'] = 'select';
    $resultArray[$category][$readableName]['label'] = $label;
}

function fetchPhotoYears(&$searchFields, $label, $nid, $items)
{
    $years = [];
    foreach ($items as $item) {
        $fc = field_collection_field_get_entity($item);
        $dateTime = new DateTime($fc->field_popp_photo_collection_date['und'][0]['value']);
        $searchFields[$label]['dates']['values'][$fc->field_popp_photo_collection_date['und'][0]['value']]['label'] = $dateTime->format('Y');
        $searchFields[$label]['dates']['values'][$fc->field_popp_photo_collection_date['und'][0]['value']]['presentOnNode'][] = $nid;
    }
    return $years;
}