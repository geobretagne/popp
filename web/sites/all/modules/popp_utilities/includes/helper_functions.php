<?php
/**
 * Created by PhpStorm.
 * User: lbodiguel
 * Date: 17/02/2015
 * Time: 17:22
 */

function getInfosFromSeries()
{
    $nodes        = node_load_multiple([], ['type' => 'popp_photo_serie']);
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

function wrapThesaurusIntoHtml($fields)
{
    $html = '<div><h2>Thésaurus général</h2>
</div>';

    $html .= '<div><h2>Thésaurus spécifique POPP Breizh</h2></div>';

    return $html;
}

function getThesaurusFromSeries()
{
    $nodes             = node_load_multiple([], ['type' => 'popp_photo_serie']);
    $thesaurusElements = [];
    $result            = [];
    $resultNonReq      = [];
    foreach ($nodes as $node) {
        fetchThesaurusFields($result, $resultNonReq, $node);
    }

    return ['required' => $result, 'non_required' => $resultNonReq];
}

function getTermsList($data, $level = 3)
{
    $result = '<table style="table-layout:fixed;" class="table table-striped"><thead></thead><tbody>';
    if (count($data) == 0) {
        return "";
    }
    foreach ($data as $category) {
        $result .= '<tr class="collapseChilds" data-target=".' . sanitizeForClassName($category['name']) . '"><td colspan="3"><span class="glyphicon glyphicon-plus"></span> ' . $category['name'] . '</td></tr>';
        $result .= '<tr style="display:none;" class="' . sanitizeForClassName($category['name']) . '"><th>Thème</th><th>Éléments</th><th>Variations</th></tr>';
        foreach ($category['child'] as $child) {
            $result .= '<tr style="display:none;" class="' . sanitizeForClassName($category['name']) . '"><td>' . $child['name'] . '</td><td colspan="2">' . getTermsWithInputs($child['child']) . '</td></tr>';
        }
    }

    return $result . '</tbody></table>';
}

function getTermsWithInputs($terms)
{
    $result = '';
    foreach ($terms as $term) {
        $result .= '<div class="row"><div class="col-md-4"><input type="checkbox" class="advancedSearchThesaurus" presenton="' . implode(',', array_unique($term['global'])) . '"/> ' . $term['name'] . '</div><div class="col-md-8">' . generateSelectWithChanges($term['changes']) . '</div></div>';
    }

    return $result . '';
}

function generateSelectWithChanges($changes)
{
    $result = '<select multiple="multiple" class="changesSelect">';
    foreach ($changes as $key => $values) {
        $result .= '<option presenton="' . implode(',', $values) . '">' . getLocalizedChangeLabel($key) . '</option>';
    }

    return $result . '</select>';
}

function getLocalizedChangeLabel($change)
{
    $changes = ['stability' => t('Stabilité'), 'appeared' => t('Apparition'), 'disappeared' => t('Disparition'), 'increase' => t('Augmentation'), 'decrease' => t('Diminution'), 'appearance_change' => t('Changement d\'apparence')];

    return (isset($changes[$change]) ? $changes[$change] : 'Erreur');
}

function fetchThesaurusFields(&$result, &$resultNonReq, $serie)
{
    $changes = ['stability', 'appreared', 'disappeared', 'increase', 'decrease', 'appearance_change'];
    foreach ($serie->field_popp_serie_photo_list[LANGUAGE_NONE] as $photoNid) {
        $photo = node_load($photoNid['target_id']);
        if (isset($photo->field_popp_photo_thesaurus[LANGUAGE_NONE])) {
            foreach ($photo->field_popp_photo_thesaurus[LANGUAGE_NONE] as $thesElt) {
                $set    = [];
                $entity = entity_load('field_collection_item', [$thesElt['value']]);
                $entity = $entity[$thesElt['value']];
                $tid    = $entity->field_popp_thes_elt[LANGUAGE_NONE][0]['tid'];
                foreach ($entity->field_popp_thes_evol[LANGUAGE_NONE] as $change) {
                    $set[$tid]['changes'][$change['value']][] = $serie->nid;
                }
                $taxo                  = taxonomy_term_load($tid);
                $set[$tid]['name']     = $taxo->name;
                $set[$tid]['global'][] = $serie->nid;
                $parents               = taxonomy_get_parents_all($tid);
                if (count($parents) <= 2) {
                    continue;
                }
                array_shift($parents); // Avoid getting current element as parent
                $result = merge($result, putInParent($parents, $set, $set[$tid], $changes), true);
            }
        }
        if (isset($photo->field_popp_photo_nonreq_thes[LANGUAGE_NONE])) {
            foreach ($photo->field_popp_photo_nonreq_thes[LANGUAGE_NONE] as $thesElt) {
                $set    = [];
                $entity = entity_load('field_collection_item', [$thesElt['value']]);
                $entity = $entity[$thesElt['value']];
                $tid    = $entity->field_popp_nonreqthes_elt[LANGUAGE_NONE][0]['tid'];
                foreach ($entity->field_field_popp_nonreqthes_evol[LANGUAGE_NONE] as $change) {
                    $set[$tid]['changes'][$change['value']][] = $serie->nid;
                }
                $taxo                  = taxonomy_term_load($tid);
                $set[$tid]['name']     = $taxo->name;
                $set[$tid]['global'][] = $serie->nid;
                $parents               = taxonomy_get_parents_all($tid);
                if (count($parents) <= 2) {
                    continue;
                }
                array_shift($parents);
                $resultNonReq = merge(putInParent($parents, $set, $set[$tid], $changes), $resultNonReq, true);
            }
        }
    }
}


function putInParent($parents, $result, $baseResult, $changes)
{
    if (count($parents) == 0) {
        return $result;
    }
    $parent               = array_shift($parents);
    $actual[$parent->tid] = [
        'name'   => $parent->name,
        'global' => $baseResult['global'],
    ];
    foreach ($changes as $change) {
        $actual[$parent->tid]['changes'][$change] = (isset($baseResult['changes'][$change]) ? $baseResult['changes'][$change] : []);
    }
    $actual[$parent->tid]['child'] = $result;

    return putInParent($parents, $actual, $baseResult, $changes);
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
    $searchFields[$label]['dates']['type']  = 'select';
    $searchFields[$label]['dates']['label'] = t('Années');
}

function fetchClassicalField(&$resultArray, $node, $label, $category, $readableName, $fieldName)
{
    $results = [];
    if (isset($node->{$fieldName}['und'][0]['value'])) {
        $val                                                                      = $node->{$fieldName}['und'][0]['value'];
        $resultArray[$category][$readableName]['values'][$val]['presentOnNode'][] = $node->nid;
        $resultArray[$category][$readableName]['values'][$val]['label']           = $val;
    }
    $resultArray[$category][$readableName]['type']  = 'select';
    $resultArray[$category][$readableName]['label'] = $label;
}

function fetchTaxonomyField(&$resultArray, $node, $label, $category, $readableName, $fieldName)
{
    $results = [];
    if (! isset($node->{$fieldName}['und'][0]['tid'])) {
        return;
    }
    if (isset($node->{$fieldName}['und'][0]['tid'])) {
        $term = taxonomy_term_load($node->{$fieldName}['und'][0]['tid']);
        if (isset($term->name)) {
            if (! isset($resultArray[$category][$readableName]['values'][$node->{$fieldName}['und'][0]['tid']]['presentOnNode'])) {
                $resultArray[$category][$readableName]['values'][$node->{$fieldName}['und'][0]['tid']]['presentOnNode'] = [];
            }
            $resultArray[$category][$readableName]['values'][$node->{$fieldName}['und'][0]['tid']]['presentOnNode'][] = $node->nid;
            $resultArray[$category][$readableName]['values'][$node->{$fieldName}['und'][0]['tid']]['label']           = $term->name;
        }
    }
    $resultArray[$category][$readableName]['type']  = 'select';
    $resultArray[$category][$readableName]['label'] = $label;
}

function fetchPhotoYears(&$resultArray, $label, $nid, $items)
{
    $years = [];
    foreach ($items as $item) {
        $photo                                                                             = node_load($item['target_id']);
        $dateTime                                                                          = new DateTime($photo->field_popp_photo_date['und'][0]['value']);
        $resultArray[$label]['dates']['values'][$dateTime->format('Y')]['label']           = $dateTime->format('Y');
        $resultArray[$label]['dates']['values'][$dateTime->format('Y')]['presentOnNode'][] = $nid;
        $resultArray[$label]['dates']['values'][$dateTime->format('Y')]['presentOnNode']   = array_unique($resultArray[$label]['dates']['values'][$dateTime->format('Y')]['presentOnNode']);
    }

    return $years;
}

function merge(array $a, array $b, $preserveNumericKeys = true)
{
    foreach ($b as $key => $value) {
        if (isset($a[$key]) || array_key_exists($key, $a)) {
            if (! $preserveNumericKeys && is_int($key)) {
                $a[] = $value;
            } elseif (is_array($value) && is_array($a[$key])) {
                if ($key == 'global') {
                    $preserveNumericKeys = false;
                } else {
                    $preserveNumericKeys = true;
                }
                $a[$key] = merge($a[$key], $value, $preserveNumericKeys);
            } else {
                $a[$key] = $value;
            }
        } else {
            $a[$key] = $value;
        }
    }

    return $a;
}

function sanitizeForClassName($str)
{
    $unwanted_array = ['Š' => 'S', 'š' => 's', 'Ž' => 'Z', 'ž' => 'z', 'À' => 'A', 'Á' => 'A', 'Â' => 'A', 'Ã' => 'A', 'Ä' => 'A', 'Å' => 'A', 'Æ' => 'A', 'Ç' => 'C', 'È' => 'E', 'É' => 'E',
                       'Ê' => 'E', 'Ë' => 'E', 'Ì' => 'I', 'Í' => 'I', 'Î' => 'I', 'Ï' => 'I', 'Ñ' => 'N', 'Ò' => 'O', 'Ó' => 'O', 'Ô' => 'O', 'Õ' => 'O', 'Ö' => 'O', 'Ø' => 'O', 'Ù' => 'U',
                       'Ú' => 'U', 'Û' => 'U', 'Ü' => 'U', 'Ý' => 'Y', 'Þ' => 'B', 'ß' => 'Ss', 'à' => 'a', 'á' => 'a', 'â' => 'a', 'ã' => 'a', 'ä' => 'a', 'å' => 'a', 'æ' => 'a', 'ç' => 'c',
                       'è' => 'e', 'é' => 'e', 'ê' => 'e', 'ë' => 'e', 'ì' => 'i', 'í' => 'i', 'î' => 'i', 'ï' => 'i', 'ð' => 'o', 'ñ' => 'n', 'ò' => 'o', 'ó' => 'o', 'ô' => 'o', 'õ' => 'o',
                       'ö' => 'o', 'ø' => 'o', 'ù' => 'u', 'ú' => 'u', 'û' => 'u', 'ý' => 'y', 'y', 'þ' => 'b', 'ÿ' => 'y', ' ' => '_'];

    return strtolower(strtr($str, $unwanted_array));
}