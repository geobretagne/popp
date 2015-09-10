/**
 * Created by lbodiguel on 20/11/2014.
 */

(function ($) {
    $(document).ready(function () {
        /**
         * Stylizing supporting structures table
         */

        if($("#cacherMenu").size() > 0){
            $("#block-menu-menu-administration-contenu").remove();
        }
        $(".view-popp-view-page-structures table").attr("class", '');
        $(".view-popp-view-page-structures table").addClass('table table-striped');
        $(".page-popp-structure .col-sm-9 .well").css('padding', '0');
        /**
         * Remove attributes that forces logos height & width
         */
        $("#block-views-logos-partenaires-block .views-field-field-logo-partenaire-solo img,.node-type-opp-photo .field-name-field-photo img").each(function (i, elt) {
            $(this).removeAttr("height");
            $(this).removeAttr("width");
        });
        $("a#removeInstallModal").click(function () {
            $("#greyBackground, #installAlert").remove("");
        });
    });
})(jQuery);