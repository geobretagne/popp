<?php global $user; ?>
<div id="comments" class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php if ($content['comments'] && $node->type != 'forum'): ?>
        <?php print render($title_suffix); ?>
    <?php endif; ?>
    <div id="currentPhotoComments"></div>
    <div id="otherPhotoComments"></div>
    <?php print render($content['comments']); ?>
    <?php if ($content['comment_form']): ?>
        <h2 class="title comment-form"><?php print t('Add new comment'); ?></h2>
        <?php print render($content['comment_form']); ?>
    <?php endif; ?>
    <?php if(!$user->uid) print '<a href="/user/login">Connectez-vous</a> ou <a href="/user/register">inscrivez-vous</a> pour déposer un commentaire'; ?>
</div>
