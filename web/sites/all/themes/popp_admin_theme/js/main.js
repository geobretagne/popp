/**
 * Created by lbodiguel on 27/05/2015.
 */
jQuery(document).ready(function(){
    jQuery("#edit-field-popp-serie-refdoc-und-actions-ief-add").attr('value', 'Ajouter un document référence');
    jQuery("#edit-field-popp-serie-testimonies-und-actions-ief-add").attr('value', 'Ajouter un témoignage');
    jQuery("#edit-field-popp-serie-documentation-und-actions-ief-add").attr('value', 'Ajouter une documentation');
    jQuery("input[id^='edit-field-popp-serie-photo-list-und-actions-ief-add']").attr('value', 'Ajouter une photographie');
    jQuery("#edit-field-popp-serie-refdoc-und-form-actions-ief-add-save, #edit-field-popp-serie-photo-list-und-form-actions-ief-add-save").attr('value', 'Valider');
    jQuery('#edit-field-popp-serie-identifier-und-0-value').attr('readonly','true');
});