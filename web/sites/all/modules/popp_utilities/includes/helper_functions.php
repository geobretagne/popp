<?php
/**
 * Created by PhpStorm.
 * User: lbodiguel
 * Date: 17/02/2015
 * Time: 17:22
 */


function getInfosFromSeries()
{
    $nodes = node_load_multiple(array(), array('type' => 'popp_photo_serie'));
    $searchFields = [];
    foreach ($nodes as $node) {
        fetchTaxonomyField($searchFields, $node, t('Typologie de paysage'), t('Paysage'), 'landcape_typology', 'field_popp_serie_landscape_typo');
        fetchTaxonomyField($searchFields, $node, t('Ensemble paysager'), t('Paysage'), 'landcape_set', 'field_popp_serie_landscape_set');
        fetchTaxonomyField($searchFields, $node, t('Unité paysagère'), t('Paysage'), 'landscape_units', 'field_popp_serie_landscape_unit');
        fetchTaxonomyField($searchFields, $node, t('Pays'), t('Localisation'), 'popp_countries', 'field_popp_serie_country');
        fetchTaxonomyField($searchFields, $node, t('Région'), t('Localisation'), 'region', 'field_popp_serie_district');
        fetchTaxonomyField($searchFields, $node, t('Département'), t('Localisation'), 'counties', 'field_popp_serie_county');
        fetchTaxonomyField($searchFields, $node, t('Commune'), t('Localisation'), 'towns', 'field_popp_serie_town');
        fetchClassicalField($searchFields, $node, t('Identifiant de la série'), t('Avancée'), 'years', 'field_popp_serie_identifier');
        getDatesFromPhotoSerie($searchFields, t('Avancée'), $node);
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
    $items = $nodeSerie->field_popp_serie_photo_list[LANGUAGE_NONE];
    fetchPhotoYears($searchFields, $label, $nodeSerie->nid, $items);
    $searchFields[$label]['dates']['type'] = 'select';
    $searchFields[$label]['dates']['label'] = t('Années');
}

function fetchClassicalField(&$resultArray, $node,  $label, $category, $readableName, $fieldName)
{
    $results = [];
    if (isset($node->{$fieldName}['und'][0]['value'])) {
        $val = $node->{$fieldName}['und'][0]['value'];
        $resultArray[$category][$readableName]['values'][$val]['presentOnNode'][] = $node->nid;
        $resultArray[$category][$readableName]['values'][$val]['label'] = $val;
    }
    $resultArray[$category][$readableName]['type'] = 'select';
    $resultArray[$category][$readableName]['label'] = $label;
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

function fetchPhotoYears(&$resultArray, $label, $nid, $items)
{
    $years = [];
    foreach ($items as $item) {
        $photo = node_load($item['target_id']);
        $dateTime = new DateTime($photo->field_popp_photo_date['und'][0]['value']);
        $resultArray[$label]['dates']['values'][$dateTime->format('Y')]['label'] = $dateTime->format('Y');
        $resultArray[$label]['dates']['values'][$dateTime->format('Y')]['presentOnNode'][] = $nid;
        $resultArray[$label]['dates']['values'][$dateTime->format('Y')]['presentOnNode'] = array_unique($resultArray[$label]['dates']['values'][$dateTime->format('Y')]['presentOnNode']);
    }
    return $years;
}