<?php
/**
 * Created by PhpStorm.
 * User: lbodiguel
 * Date: 17/02/2015
 * Time: 17:22
 */
require_once('sites/all/libraries/Carbon/Carbon.php');
use Carbon\Carbon;

function getInfosFromSeries()
{
    $nodes        = node_load_multiple([], ['type' => 'popp_photo_serie']);
    $searchFields = [];
    foreach ($nodes as $node) {
        if ($node->status != "1") {
            continue; // Avoid getting search fields about non-published series
        }
        fetchTaxonomyField($searchFields, $node, t('Typologie de paysage'), t('Paysage'), 'landcape_typology', 'field_popp_serie_landscape_typo');
        fetchTaxonomyField($searchFields, $node, t('Ensemble paysager'), t('Paysage'), 'landcape_set', 'field_popp_serie_landscape_set');
        fetchTaxonomyField($searchFields, $node, t('Unité paysagère'), t('Paysage'), 'landscape_units', 'field_popp_serie_landscape_unit');
        fetchTaxonomyField($searchFields, $node, t('Pays'), t('Localisation'), 'popp_countries', 'field_popp_serie_country');
        fetchTaxonomyField($searchFields, $node, t('Région'), t('Localisation'), 'region', 'field_popp_serie_district');
        fetchTaxonomyField($searchFields, $node, t('Département'), t('Localisation'), 'counties', 'field_popp_serie_county');
        fetchTaxonomyField($searchFields, $node, t('Commune'), t('Localisation'), 'towns', 'field_popp_serie_town');
        fetchClassicalField($searchFields, $node, t('Identifiant de la série'), t('Avancée'), 'years', 'field_popp_serie_identifier');
        fetchOppField($searchFields, $node, t('Porteur OPP'), t('Avancée'), 'opp_struct', 'field_popp_serie_supp_struct');
        getDatesFromPhotoSerie($searchFields, t('Avancée'), $node);
    }
    setInfosUnique($searchFields);
    krsort($searchFields[t('Avancée')]['dates']['values']);

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
        if ($node->status != "1") {
            continue; // Avoid getting search fields about non-published series
        }
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
        $result .= '<tr class="collapseChilds" popp-target=".' . sanitizeForClassName($category['name']) . '"><td colspan="3"><span class="glyphicon glyphicon-plus"></span> ' . $category['name'] . '</td></tr>';
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
    $changes = getChanges();
    foreach ($serie->field_popp_serie_photo_list[LANGUAGE_NONE] as $photoNid) {
        $photo = node_load($photoNid['target_id']);
        if (isset($photo->field_popp_photo_thesaurus[LANGUAGE_NONE])) {
            foreach ($photo->field_popp_photo_thesaurus[LANGUAGE_NONE] as $thesElt) {
                $set    = [];
                $entity = entity_load('field_collection_item', [$thesElt['value']]);
                $entity = $entity[$thesElt['value']];
                if (! isset($entity->field_popp_thes_evol[LANGUAGE_NONE])) {
                    continue;
                }
                $tid = $entity->field_popp_thes_elt[LANGUAGE_NONE][0]['tid'];
                foreach ($entity->field_popp_thes_evol[LANGUAGE_NONE] as $change) {
                    $set[$tid]['changes'][$change['value']][] = $serie->nid;
                }
                $taxo                  = taxonomy_term_load($tid);
                if(!$taxo){
                    continue;
                }
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

function fetchOppField(&$resultArray, $node, $label, $category, $readableName, $fieldName)
{
    $results = [];
    if (isset($node->{$fieldName}['und'][0]['target_id'])) {
        $val                                                                      = $node->{$fieldName}['und'][0]['target_id'];
        $resultArray[$category][$readableName]['values'][$val]['presentOnNode'][] = $node->nid;
        $nodeOpp = node_load($val);
        $resultArray[$category][$readableName]['values'][$val]['label']           = $nodeOpp->title;
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
    uasort($resultArray[$category][$readableName]['values'], 'sortSelectFields');
    $resultArray[$category][$readableName]['type']  = 'select';
    $resultArray[$category][$readableName]['label'] = $label;
}

function sortSelectFields($a, $b)
{
    return strcmp($a['label'], $b['label']);
}

function fetchPhotoYears(&$resultArray, $label, $nid, $items)
{
    $years = [];
    if(!is_array($items)){
        return $years;
    }
    foreach ($items as $item) {
        $photo                                                                             = node_load($item['target_id']);
        if(!$photo){
            continue;
        }
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

function getChangesTable($node)
{
    $changes = getChanges();

    $result       = '<table style="width:100%;text-align:center;" class="table table-striped table-bordered">
                    <thead>
                        <tr>
                            <th style="text-align:center;">' . t('Éléments') . '</th>
                            <th style="text-align:center;">' . t('Stabilité') . '</th>
                            <th style="text-align:center;">' . t('Apparition') . '</th>
                            <th style="text-align:center;">' . t('Disparition') . '</th>
                            <th style="text-align:center;">' . t('Augmentation') . '</th>
                            <th style="text-align:center;">' . t('Diminution') . '</th>
                            <th style="text-align:center;">' . t('Chgt d\'apparence') . '</th>
                        </tr>
                    </thead>
                    <tbody>';
    $tableContent = getChangesAsArray($node, $changes);
    $oneChange = false;
    foreach ($tableContent as $line) {
        $result .= '<tr><td>' . $line['name'] . '</td>';
        foreach ($changes as $change) {
            $result .= '<td>' . (isset($line['changes'][$change]) && count($line['changes'][$change]) > 0 ? '<span class="presentChanges" title="Photo(s) concernée(s) : ' . implode(', ', $line['unds'][$change]) . '">' . count($line['changes'][$change]) . '</span>' : "0") . '</td>';
        }
        $result .= '</tr>';
        $oneChange = true;
    }

    if(!$oneChange){
        $result .= '<tr><td colspan="7">N/A</td></tr>';
    }
    return $result .= '</tbody></table>';
}

function getChangesArray($node)
{
    $changes      = getChanges();
    $result       = [['Éléments', 'Stabilité', 'Apparition', 'Disparition', 'Augmentation', 'Diminution', 'Changement d\'apparence']];
    $tableContent = getChangesAsArray($node, $changes);
    foreach ($tableContent as $line) {
        $newLine = [$line['name']];
        foreach ($changes as $change) {
            $newLine[] = (isset($line['changes'][$change]) && count($line['changes'][$change]) > 0 ? count($line['changes'][$change]) : "0");
        }
        $result[] = $newLine;
    }

    return $result;
}

function getChangesSinceLastPhotoTable($serieNid, $actualNid, $print = true)
{
    $node         = node_load($serieNid);
    $changes      = getChanges();
    $result       = '<table style="width:100%;text-align:center;" class="table table-striped table-bordered">
                    <thead>
                        <tr>
                            <th style="text-align:center;">' . t('Éléments') . '</th>
                            <th style="text-align:center;">' . t('Stabilité') . '</th>
                            <th style="text-align:center;">' . t('Apparition') . '</th>
                            <th style="text-align:center;">' . t('Disparition') . <<<'TAG'
</th>
                            <th style="text-align:center;">
TAG
        . t('Augmentation') . '</th>
                            <th style="text-align:center;">' . t('Diminution') . '</th>
                            <th style="text-align:center;">' . t('Chgt d\'apparence') . '</th>
                        </tr>
                    </thead>
                    <tbody>';
    $tableContent = getChangesSincePreviousAsArray($node, $changes, $actualNid);
    if (false === $tableContent) {
        if($print){
            print 'N/A';
            drupal_exit();
        }else{
            return 'N/A';
        }

    }
    foreach ($tableContent as $line) {
        $result .= '<tr><td>' . $line['name'] . '</td>';
        foreach ($changes as $change) {
            $result .= '<td>' . (count($line['changes'][$change]) > 0 ? 'X' : '') . '</td>';
        }
        $result .= '</tr>';
    }
    if (empty($tableContent)) {
        $result .= '<tr><td colspan="7">Aucun changement</td>';
    }
    if($print){
        print ($result .= '</tbody></table>');
    }else{
        return ($result .= '</tbody></table>');
    }

}

function getChangesAsArray($node, $changes)
{

    $set = [];
    foreach ($node->field_popp_serie_photo_list[LANGUAGE_NONE] as $und => $photoNid) {
        $photo = node_load($photoNid['target_id']);
        if (isset($photo->field_popp_photo_thesaurus[LANGUAGE_NONE])) {
            foreach ($photo->field_popp_photo_thesaurus[LANGUAGE_NONE] as $thesElt) {
                $entity = entity_load('field_collection_item', [$thesElt['value']]);
                $entity = $entity[$thesElt['value']];
                if (! isset($entity->field_popp_thes_evol[LANGUAGE_NONE])) {
                    continue;
                }
                $tid = $entity->field_popp_thes_elt[LANGUAGE_NONE][0]['tid'];
                foreach ($entity->field_popp_thes_evol[LANGUAGE_NONE] as $change) {
                    if (! isset($set[$tid]['changes'])) {
                        $set[$tid]['unds']    = array_fill_keys(array_values($changes), []);
                        $set[$tid]['changes'] = array_fill_keys(array_values($changes), []);
                    }
                    $set[$tid]['changes'][$change['value']][] = $photo->nid;
                    $set[$tid]['unds'][$change['value']][]    = $und + 1;
                    $set[$tid]['unds'][$change['value']]      = array_unique($set[$tid]['unds'][$change['value']]);
                }
                $taxo              = taxonomy_term_load($tid);
                $set[$tid]['name'] = $taxo->name;
            }
        }
        if (isset($photo->field_popp_photo_nonreq_thes[LANGUAGE_NONE])) {
            foreach ($photo->field_popp_photo_nonreq_thes[LANGUAGE_NONE] as $thesElt) {
                $entity = entity_load('field_collection_item', [$thesElt['value']]);
                $entity = $entity[$thesElt['value']];
                $tid    = $entity->field_popp_nonreqthes_elt[LANGUAGE_NONE][0]['tid'];
                foreach ($entity->field_field_popp_nonreqthes_evol[LANGUAGE_NONE] as $change) {
                    if (! isset($set[$tid]['changes'])) {
                        $set[$tid]['unds']    = array_fill_keys(array_values($changes), []);
                        $set[$tid]['changes'] = array_fill_keys(array_values($changes), []);
                    }
                    $set[$tid]['changes'][$change['value']][] = $photo->nid;
                    $set[$tid]['unds'][$change['value']][]    = $und + 1;
                    $set[$tid]['unds'][$change['value']]      = array_unique($set[$tid]['unds'][$change['value']]);
                }
                $taxo              = taxonomy_term_load($tid);
                $set[$tid]['name'] = $taxo->name;
            }
        }
    }

    return $set;
}

function getChangesSincePreviousAsArray($node, $changes, $target = null, $targetUnd = null)
{
    $set   = [];
    $first = true;
    foreach ($node->field_popp_serie_photo_list[LANGUAGE_NONE] as $und => $photoNid) {
        if ((null !== $target && $photoNid['target_id'] != $target) || (null !== $targetUnd && $und != $targetUnd)) {
            if ($first) {
                $first = false;
            }
            continue;
        } else {
            if ($first) {
                return false;
            }
        }
        $photo = node_load($photoNid['target_id']);
        if (isset($photo->field_popp_photo_thesaurus[LANGUAGE_NONE])) {
            foreach ($photo->field_popp_photo_thesaurus[LANGUAGE_NONE] as $thesElt) {
                $entity = entity_load('field_collection_item', [$thesElt['value']]);
                $entity = $entity[$thesElt['value']];
                $tid    = $entity->field_popp_thes_elt[LANGUAGE_NONE][0]['tid'];
                foreach ($entity->field_popp_thes_evol[LANGUAGE_NONE] as $change) {
                    if (! isset($set[$tid]['changes'])) {
                        $set[$tid]['changes'] = array_fill_keys(array_values($changes), []);
                    }
                    $set[$tid]['changes'][$change['value']][] = $photo->nid;
                }
                $taxo              = taxonomy_term_load($tid);
                $set[$tid]['name'] = $taxo->name;
            }
        }
        if (isset($photo->field_popp_photo_nonreq_thes[LANGUAGE_NONE])) {
            foreach ($photo->field_popp_photo_nonreq_thes[LANGUAGE_NONE] as $thesElt) {
                $entity = entity_load('field_collection_item', [$thesElt['value']]);
                $entity = $entity[$thesElt['value']];
                $tid    = $entity->field_popp_nonreqthes_elt[LANGUAGE_NONE][0]['tid'];
                foreach ($entity->field_field_popp_nonreqthes_evol[LANGUAGE_NONE] as $change) {
                    if (! isset($set[$tid]['changes'])) {
                        $set[$tid]['changes'] = array_fill_keys(array_values($changes), []);
                    }
                    $set[$tid]['changes'][$change['value']][] = $photo->nid;
                }
                $taxo              = taxonomy_term_load($tid);
                $set[$tid]['name'] = $taxo->name;
            }
        }
    }

    return $set;
}

function exportFromCaddy($nodes)
{
    if($nodes == ''){
        drupal_set_message('Vous devez choisir au moins une série à exporter', 'error');
        drupal_goto('mon-panier');
        drupal_exit();
    }
    $nodes = explode(',', $nodes);
    $nodes = array_slice($nodes, 0, 4);
    require_once('sites/all/libraries/PHPExcel/Classes/PHPExcel.php');
    $traductions = ['year' => 'année(s)', 'month' => 'mois', 'day' => 'jour(s)', 'minute' => 'minute(s)', 'hour' => 'heure(s)', 'week' => 'semaine(s)'];
    $caddy       = views_get_view('caddy');
    $caddy->set_display('page');
    $caddy->pre_execute();
    $caddy->execute('page');
    $periodAndInterval   = getPeriodAndIntervalForExport($caddy, $nodes);
    $boundariesAndPhotos = getBoundariesAndPhotos($caddy, $nodes);
    $start               = $boundariesAndPhotos['start'];
    $end                 = $boundariesAndPhotos['end'];
    $photos              = $boundariesAndPhotos['photos'];
    foreach ($photos as $serie => &$photoList) {
        uasort($photoList, 'sortPhotosByDate');
    }
    $photosByInterval = getPhotosBetweenInterval($photos, $start->copy(), $end->copy(), $periodAndInterval['interval'] . ' ' . $periodAndInterval['period']);
    $excel            = new PHPExcel();
    $headers          = ['Porteur OPP', 'N° de série', 'Commune', 'Code INSEE', 'Coordonnées GPS', 'Éléments de paysage', 'Stabilité', 'Apparition', 'Disparition', 'Augmentation', 'Diminution', 'Changement d\'aspect'];
    $excel->getActiveSheet()->mergeCells('A6:F6')->setCellValue('A6', 'Pas de reconduction : ' . $periodAndInterval['interval'] . ' ' . $traductions[$periodAndInterval['period']]);
    $excel->getActiveSheet()->fromArray($headers, '', 'A5');
    $excel->getActiveSheet()->fromArray($photosByInterval['resultTable'], '', 'A7');
    mergeAndDisplayChanges($excel, $photosByInterval['count']);
    header('Content-Type:  	application/vnd.openxmlformats-officedocument.spreadsheetml.sheet ');
    header('Content-Disposition: attachment;filename="export_thesaurus_panier.xlsx"');
    header('Cache-Control: max-age=0');
    PHPExcel_Shared_Font::setAutoSizeMethod(PHPExcel_Shared_Font::AUTOSIZE_METHOD_EXACT);
    $writer = PHPExcel_IOFactory::createWriter($excel, 'Excel2007');
    $writer->save('php://output');
}

function mergeAndDisplayChanges($excel, $count)
{
    $globalStyle = [
        'font' => [
            'name' => 'Arial',
        ],
    ];

    $headerStyle = [
        'font'      => [
            'name' => 'Arial',
            'bold' => true
        ],
        'alignment' => [
            'horizontal' => PHPExcel_Style_Alignment::HORIZONTAL_CENTER,
        ]
    ];

    $borderStyle = [
        'borders' => [
            'allborders' => [
                'style' => PHPExcel_Style_Border::BORDER_THIN
            ]
        ],
    ];

    $changesBorder = [
        'borders' => [
            'outline' => [
                'style' => PHPExcel_Style_Border::BORDER_THIN
            ],
        ],
    ];

    $sumStyle = [
        'font'      => [
            'name' => 'Arial',
            'size' => 10,
            'bold' => false
        ],
        'alignment' => [
            'vertical'   => PHPExcel_Style_Alignment::VERTICAL_CENTER,
            'horizontal' => PHPExcel_Style_Alignment::HORIZONTAL_CENTER,
        ],
        'borders'   => [
            'allborders' => [
                'style' => PHPExcel_Style_Border::BORDER_THIN
            ]
        ],
    ];

    $changes = ['Stabilité', 'Apparition', 'Disparition', 'Augmentation', 'Diminution', 'Changement d\'aspect'];
    foreach ($changes as $order => $change) {
        $firstLetter = PHPExcel_Cell::stringFromColumnIndex(6 + ($order * $count));
        $numbers     = range(1, $count);
        $excel->getActiveSheet()->fromArray($numbers, '', $firstLetter . '6');
        $lastLetter = PHPExcel_Cell::stringFromColumnIndex(6 + $count + ($order * $count) - 1);
        $excel->getActiveSheet()->mergeCells($firstLetter . '5:' . $lastLetter . '5');
        $excel->getActiveSheet()->setCellValue($firstLetter . '5', $change);
    }
    $maxColumn = $excel->getActiveSheet()->getHighestColumn();
    $maxRow    = $excel->getActiveSheet()->getHighestRow();
    $excel->getActiveSheet()->getStyle('A1:' . $maxColumn . $maxRow)->applyFromArray($globalStyle);
    $excel->getActiveSheet()->getStyle('A1:' . $maxColumn . '5')->applyFromArray($headerStyle);
    $excel->getActiveSheet()->getStyle('A5:F' . $maxRow)->applyFromArray($borderStyle);
    $excel->getActiveSheet()->getStyle('G5:' . $maxColumn . '6')->applyFromArray($borderStyle);
    $excel->getActiveSheet()->getStyle('G7:' . $maxColumn . $maxRow)->applyFromArray($changesBorder);
    $excel->getActiveSheet()->getStyle('A1')->applyFromArray([
        'font' => [
            'size' => '14',
        ],
    ]);
    $txt = [
        'Somme des stabilités',
        'Somme des apparitions',
        'Somme des disparitions',
        'Somme des augmentations',
        'Somme des diminutions',
        'Somme des changements d\'aspect',
        'Somme des changements'
    ];
    for ($i = 7; $i > 0; $i--) {
        $totalLetter = PHPExcel_Cell::stringFromColumnIndex(PHPExcel_Cell::columnIndexFromString($excel->getActiveSheet()->getHighestColumn()) - $i);
        $excel->getActiveSheet()->mergeCells($totalLetter . '5:' . $totalLetter . '6');
        $excel->getActiveSheet()->setCellValue($totalLetter . '5', $txt[$i - 1]);
        $excel->getActiveSheet()->getStyle($totalLetter . '5')->applyFromArray($sumStyle);
        $excel->getActiveSheet()->getStyle($totalLetter . '5')
            ->getAlignment()->setWrapText(true);
        $excel->getActiveSheet()->getColumnDimension($totalLetter)->setWidth(20);
    }
    foreach (range('A', 'F') as $letter) {
        $excel->getActiveSheet()
            ->getColumnDimension($letter)->setAutoSize(true);
    }
    $firstTotalLetter = PHPExcel_Cell::stringFromColumnIndex(PHPExcel_Cell::columnIndexFromString($excel->getActiveSheet()->getHighestColumn()) - 7);
    $excel->getActiveSheet()->getStyle($firstTotalLetter . '5:' . $maxColumn . $maxRow)->applyFromArray($sumStyle);
    $excel->getActiveSheet()->setCellValue('A1', 'Export des changements paysagers (' . date('d/m/Y') . ')');
}

function prepareAllIntervals($start, $end, $periodAndInterval)
{
    $interval  = $periodAndInterval['interval'] . ' ' . $periodAndInterval['period'];
    $intervals = [];
    $i         = 0;
    while ($start < $end) {
        $intervals[] = $start->copy()->setTime(0, 0, 0);
        $start->modify('+' . $interval);
        $i++;
    }

    return $intervals;
}

function sortPhotosByDate($a, $b)
{
    $dateA = new Carbon($a->field_popp_photo_date[LANGUAGE_NONE][0]['value']);
    $dateB = new Carbon($b->field_popp_photo_date[LANGUAGE_NONE][0]['value']);
    if ($dateA === $dateB) {
        return 0;
    }

    return $dateA > $dateB ? 1 : -1;
}

function getBoundariesAndPhotos($caddy, $allowed)
{
    $start  = null;
    $end    = null;
    $photos = [];
    foreach ($caddy->result as $serie) {
        if(!in_array($serie->_field_data['nid']['entity']->nid, $allowed)){
            continue;
        }
        foreach ($serie->_field_data['nid']['entity']->field_popp_serie_photo_list[LANGUAGE_NONE] as $photoId) {
            $photo                                               = node_load($photoId['target_id']);
            $photos[$serie->_field_data['nid']['entity']->nid][] = $photo;
            $photoDate                                           = new Carbon($photo->field_popp_photo_date[LANGUAGE_NONE][0]['value']);
            $photoDate->setTime(0, 0, 0);
            if (null == $start || $photoDate < $start) {
                $start = $photoDate;
            }
            if (null == $end || $photoDate > $end) {
                $end = $photoDate;
            }
        }
    }

    return ['start' => $start, 'end' => $end, 'photos' => $photos];
}

function getPeriodAndIntervalForExport($caddy, $allowed)
{
    $period            = null;
    $interval          = null;
    $periodAndInterval = null;
    foreach ($caddy->result as $serie) {
        if(!in_array($serie->_field_data['nid']['entity']->nid, $allowed)){
            continue;
        }
        if (null == $period) {
            $period            = $serie->_field_data['nid']['entity']->field_popp_serie_per[LANGUAGE_NONE][0]['period'];
            $periodAndInterval = $serie->_field_data['nid']['entity']->field_popp_serie_per[LANGUAGE_NONE][0];
        } else {
            if ($periodAndInterval['interval'] > $serie->_field_data['nid']['entity']->field_popp_serie_per[LANGUAGE_NONE][0]['interval']) {
                $periodAndInterval['interval'] = $serie->_field_data['nid']['entity']->field_popp_serie_per[LANGUAGE_NONE][0]['interval'];
            }
            if ($period !== $serie->_field_data['nid']['entity']->field_popp_serie_per[LANGUAGE_NONE][0]['period']) {
                drupal_set_message(t('Les exports ne sont autorisés que pour les séries dont le pas de reconduction est le même (ex : le thésaurus d\'une série à reconduction mensuelle ne peut être exportée avec celui d\'une série à reconduction annuelle)'), 'error');
                drupal_goto('mon-panier');
            }
        }
    }

    return $periodAndInterval;
}

function getPhotosBetweenInterval($series, $start, $end, $interval)
{
    $result    = [];
    $changes   = getChanges();
    $countDone = false;
    $count     = 0;
    foreach ($series as $nid => $photos) {
        $serie      = node_load($nid);
        $suppStruct = 'N/A';
        if (isset($serie->field_popp_serie_supp_struct[LANGUAGE_NONE][0]['target_id'])) {
            $ss         = node_load($serie->field_popp_serie_supp_struct[LANGUAGE_NONE][0]['target_id']);
            $suppStruct = $ss->title;
        }
        $town = taxonomy_term_load($serie->field_popp_serie_town[LANGUAGE_NONE][0]['tid']);
        $tids = fetchTaxosFromPhotos($photos);
        $pgs  = new PostgisGeometrySet('GEOMETRYCOLLECTION', 4326);
        $pgs->fromGeometry($serie->field_popp_serie_place[LANGUAGE_NONE]);

        foreach ($tids as $photoId => $taxo) {
            $photo     = node_load($photoId);
            $photoDate = new Carbon($photo->field_popp_photo_date[LANGUAGE_NONE][0]['value']);
            foreach ($taxo as $tid => $changesAndName) {
                $sums    = array_fill_keys($changes, "0");
                $thesElt = taxonomy_term_load($tid);
                $tmp     = [
                    $suppStruct,
                    !empty($serie->field_popp_serie_identifier[LANGUAGE_NONE])?$serie->field_popp_serie_identifier[LANGUAGE_NONE][0]['value']:'',
                    $town->name,
                    isset($town->field_insee_code[LANGUAGE_NONE][0]['value']) ? $town->field_insee_code[LANGUAGE_NONE][0]['value'] : 'N/A',
                    str_replace('))', '', str_replace('GEOMETRYCOLLECTION(POINT(', '', $pgs->getText()))
                ];
                $tmp[]   = $thesElt->name;
                foreach ($changes as $change) {
                    $begin = $start->copy();
                    do {
                        if (! $countDone) {
                            $count++;
                        }
                        if ($photoDate >= $begin && $photoDate <= $begin->copy()->modify('+' . $interval) && isset($changesAndName[$change])) {
                            $tmp[] = 'X';
                            $sums[$change]++;
                        } else {
                            $tmp[] = '';
                        }
                    } while ($begin->modify('+' . $interval) <= $end);
                    $countDone = true;
                }
                $tmp += $sums;
                $tmp[]    = array_sum($sums);
                $result[] = $tmp;
            }
        }
    }

    return ['count' => $count, 'resultTable' => $result];
}

function fetchTaxosFromPhotos($photos)
{
    $set = [];
    foreach ($photos as $photo) {
        if (isset($photo->field_popp_photo_thesaurus[LANGUAGE_NONE])) {
            foreach ($photo->field_popp_photo_thesaurus[LANGUAGE_NONE] as $thesElt) {
                $entity = entity_load('field_collection_item', [$thesElt['value']]);
                $entity = $entity[$thesElt['value']];
                if (! isset($entity->field_popp_thes_evol[LANGUAGE_NONE])) {
                    continue;
                }
                $tid  = $entity->field_popp_thes_elt[LANGUAGE_NONE][0]['tid'];
                $taxo = taxonomy_term_load($tid);
                foreach ($entity->field_popp_thes_evol[LANGUAGE_NONE] as $change) {
                    $set[$photo->nid][$tid][$change['value']] = $taxo->name;
                }
            }
        }
    }

    return $set;
}

function getChanges()
{
    return ['stability', 'appeared', 'disappeared', 'increase', 'decrease', 'appearance_change'];
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