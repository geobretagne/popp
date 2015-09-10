(function ($) {
    var originalZipHref = '';
    var originalThesHref = '';
    $(document).ready(function () {
        originalZipHref = $("#photoExport").attr('href');
        originalThesHref = $('#thesExport').attr('href');
        changeExportLink();
        $("input[name='export[]']").click(changeExportLink)
    });

    function changeExportLink() {
        var series = [];
        $("input[name='export[]']:checked").each(function (i, elt) {
            series.push($(elt).val());
        });
        $("#photoExport").attr('href', originalZipHref + '/' + series.join(','));
        $("#thesExport").attr('href', originalThesHref + '/' + series.join(','));
    }

})(jQuery);