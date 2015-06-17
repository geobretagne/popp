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
            var className = $(this).attr('data-target');
            $(className).toggle('slow');
            var classes = $(this).find("span").attr('class');
            if (classes == 'glyphicon glyphicon-plus') {
                classes = 'glyphicon glyphicon-minus';
            } else {
                classes = 'glyphicon glyphicon-plus';
            }
            $(this).find("span").attr('class', classes);
        })
    });
})(jQuery);