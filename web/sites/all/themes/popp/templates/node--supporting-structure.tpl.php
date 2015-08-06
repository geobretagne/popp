<?php

/**
 * @file
 * Default theme implementation to display a node.
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 * @see     template_preprocess()
 * @see     template_preprocess_node()
 * @see     template_process()
 * @ingroup themeable
 */
$view = views_get_view('popp_supp_struct_infos');
$view->set_display('master');
$view->set_arguments([$node->nid]);
$view->pre_execute();
$view->execute('master');

$opps = [];
$oppBlock = '';
if(!empty($view->result)){
    foreach($view->result as $result){
        $serie = node_load($result->field_popp_serie_supp_struct_node_nid);
        if(!empty($result->field_field_popp_serie_opp)){
            foreach($result->field_field_popp_serie_opp as $opp){
                if(!isset($opps[$opp['raw']['tid']])){
                    $opps[$opp['raw']['tid']] = [];
                }
                if(!empty($result->field_field_popp_serie_thematic_axis)){
                    foreach($result->field_field_popp_serie_thematic_axis as $ta){
                        $ta = taxonomy_term_load($ta['raw']['tid']);
                        $opps[$opp['raw']['tid']][$ta->tid] = $ta->name;
                    }
                }
            }
        }
    }
}
foreach($opps as $oppId => $tids){
    $opp = taxonomy_term_load($oppId);
    $oppBlock .= '<div>';
    $oppBlock .= '<h3>'.$opp->name.'</h3>';
    $oppBlock .= '<p><strong>Objectif : </strong>'.$opp->description.'</p>';
    if(!empty($tids)){
        $oppBlock .= '<h4>Axes thématiques</h4>';
    }
    foreach($tids as $tid => $name){
        $oppBlock .= '<p><strong>'.$name.'</strong>';
        $oppBlock .= getThematicSeries($tid);
    }
    $oppBlock .= '<p><strong>Technicité de l\'observatoire : </strong>'.$opp->field_popp_opp_technicity[LANGUAGE_NONE][0]['value'].'</p>';
    $oppBlock .= '<p><strong>Année de création : </strong>'.$opp->field_popp_opp_creation_year[LANGUAGE_NONE][0]['value'].'</p>';
    $oppBlock .= '<p><strong>Niveau territorial concerné : </strong>'.$opp->field_popp_opp_area[LANGUAGE_NONE][0]['value'].'</p>';
    $oppBlock .= '<p><strong>Valorisation et diffusion : </strong>'.$opp->field_popp_opp_valuation[LANGUAGE_NONE][0]['value'].'</p>';
    $oppBlock.='</div>';
}
//og_get_group_members_properties($yourGroupNode, array(), 'members', 'node');
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php print $user_picture; ?>

    <?php print render($title_prefix); ?>
    <?php if (! $page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>

    <div class="content"<?php print $content_attributes; ?>>
        <div class="row">
            <div class="col-sm-8">
                <div>
                    <strong>Description</strong>
                    <?=drupal_render($content['field_popp_supp_struc_shortdesc'])?>
                </div>
                <div>
                    <?=drupal_render($content['field_popp_supp_struc_goal'])?>
                </div>
                <div>
                    <?=drupal_render($content['field_popp_supp_struct_mail'])?>
                </div>
                <div>
                    <?=drupal_render($content['field_popp_supp_struct_address'])?>
                </div>
                <div>
                    <?=drupal_render($content['field_popp_supp_struct_phone'])?>
                </div>
                <div>
                    <?=drupal_render($content['field_popp_supp_struc_website'])?>
                </div>
            </div>
            <div class="col-sm-4">
                <div class="pull-right" style="margin-bottom:10px;"><?php print drupal_render($content['field_popp_supp_struct_logo']) ?></div>
                <div class="pull-right">
                    <?=drupal_render($content['field_popp_supp_struct_ref_conta'])?>
                </div>
            </div>
        </div>
        <hr/>
        <?php if($oppBlock !== ''): ?>
        <div class="row">
            <div class="col-sm-12">
            <h2>Les OPP auxquels nous participons :</h2>
            <?=$oppBlock?>
            </div>
        </div>
        <?php endif; ?>
    </div>
</div>
