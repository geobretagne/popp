/**
 * Created by lbodiguel on 20/11/2014.
 */

(function ($) {
    $(document).ready(function () {
        /**
         * Remove attributes that forces logos height & width
         */
        $("#block-views-logos-partenaires-block .views-field-field-logo-partenaire-solo img,.node-type-photo .field-name-field-photo img").each(function(i,elt){
            $(this).removeAttr("height");
            $(this).removeAttr("width");
        });
    });
})(jQuery);