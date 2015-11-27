(function ($) {
    $(document).ready(function () {
        $(".advancedSearchThesaurus").parent().next().children("select").hide();
        $(".advancedSearchThesaurus").click(function () {
            if ($(this).prop('checked')) {
                $(this).parent().next().children("select").show('');
            } else {
                $(this).parent().next().children("select").hide('');
                $(this).parent().next().children("select").children('option').prop('selected', false);
            }
        });
        $(".collapseChilds").click(function () {
            var className = $(this).attr('popp-target');
            $(className).toggle('slow');
            $(this).find("span").toggleClass('glyphicon-plus glyphicon-minus');
        })
    });
})(jQuery);