/**
 * Created by lbodiguel on 20/01/2015.
 */
(function ($) {
    var checkedPhoto = 0;
    var nid = 0;
    var actualUnd = 0;
    var photos = {};
    var first = true;
    $(document).ready(function () {
        $(".confirmLicences").click(function(e){
            if(!confirm('En cliquant sur OK, vous vous engagez à respecter les licences d\'utilisation inhérentes aux fichiers téléchargés')){
                return false;
            }
        });
        $("#sons table").addClass('table-bordered');
        photos = JSON.parse(jQuery("#photoList").attr('data'));
        prepareComments();
        if (Drupal.arg(3) == "pa") {
            $('.region-sidebar-second > .well').css('border-top', '2px solid #ff7109');
        }
        $(".breadcrumb").css('margin', '0 -15px 15px -15px');
        nid = getNodeId();
        // Change photo on click on a thumbnail
        $("#thumbnailsViewPlaceHolder").on('click', '.toZoom', function (e) {
            loadPhoto($(this).attr('linkedphoto'));
            e.preventDefault();
            e.stopImmediatePropagation();
            return false;
        });
        var defaultId = getPhotoId();
        if (!defaultId) {
            defaultId = $("a[linkedphoto]").first().attr("linkedphoto");
        }
        changeSerieNumber(defaultId);
        getSameThematicSeries(nid);
        getPhotoLicences(nid);
        setCheckedPhoto(defaultId);
        loadPhoto(defaultId);
    });
    function getPhotoId() {
        return Drupal.arg(2);
    }

    function getSameThematicSeries(nid){
        $.get(Drupal.settings.basePath + 'utilities/ajax_them_axes/' + nid, function (data) {
                $("#sameThematicAxis").html(data);
            }
        );
    }

    function getPhotoLicences(nid){
        $.get(Drupal.settings.basePath + 'utilities/ajax_photo_licences/' + nid, function (data) {
                $("#photoLicences").html(data);
            }
        );
    }

    function changeSerieNumber(toFindId) {
        var found = false;
        for (var i in photos) {
            if (photos[i].nid == toFindId) {
                actualUnd = i;
                jQuery('#typeCurrentPhoto').text('Photo ');
                jQuery("#idCurrentPhoto").text(pad(parseInt(i) + 1, 2));
                $("#thesExport").attr('href', '/serie/'+Drupal.arg(1)+'/'+actualUnd+'/export');
                found = true;
                break;
            }
        }
        if (!found) {
            actualUnd = false;
            $("#thesExport").attr('href', '/serie/'+Drupal.arg(1)+'/-1/export');
            jQuery('#typeCurrentPhoto').text('Document référence ');
            jQuery("#idCurrentPhoto").text('00');
        }
    }

    function getNodeId() {
        return Drupal.arg(1);
    }

    function setCheckedPhoto(photo) {
        $(document).off('ajaxSuccess');
        if (photo == null || typeof(photo) == "object") {
            photo = checkedPhoto;
        }
        changeSerieNumber(photo);
        $(".toZoom").each(function (i, elt) {
            $(this).removeClass("activePhoto");
            $(this).find('span').remove();
            if ($(this).attr('linkedphoto') == photo) {
                checkedPhoto = photo;
                $(this).addClass("activePhoto");
                $(this).append('<span class="checkSelected glyphicon glyphicon-ok-circle"></span>');
                sortComments();
            }
        });
    }

    function replacePhoto(response) {
        if (response[1] !== undefined) {
            var viewHtml = response[1].data;
            $("#photoPh").html(viewHtml);
            changeLightBoxUrl();
        }
    }

    function replaceInfos(response) {
        if (response[1] !== undefined) {
            var viewHtml = response[1].data;
            $("#photoDataPlaceHolder").html(viewHtml);
            Drupal.attachBehaviors();
        }
    }

    function loadPhoto(id) {
        setCheckedPhoto(id);
        $.get(Drupal.settings.basePath + 'utilities/ajax/' + nid + '/' + (actualUnd === false ? getFirst(photos).nid : id), function (data) {
                $("#tabThesaurus").html(data);
            }
        );

        $.get(Drupal.settings.basePath + 'utilities/ajax_table_desc/' + nid + '/' + (actualUnd === false ? -1 : actualUnd), function (data) {
                if(actualUnd === false){
                    $("#ifNotRefDoc").hide();
                    $("#descriptionsTable").css('margin-top','0px');
                    $("#descriptionsTable").css('padding-top','0px');
                    $("#descriptionsTable").css('border-color','transparent');
                }else{
                    $("#descriptionsTable").css('border-color','#333');
                    $("#descriptionsTable").css('margin-top','20px');
                    $("#descriptionsTable").css('padding-top','20px');
                    $("#ifNotRefDoc").show();
                }
                $("#descriptionsTable").html(data);
            }
        );
        $.post(
            // Display first element of entity collection on load
            Drupal.settings.basePath + 'views/ajax',
            {
                view_name: 'popp_search_result_view', view_display_id: 'block_2', view_args: id
            },
            replacePhoto
        );
        if (actualUnd === false) {
            $.post(
                Drupal.settings.basePath + 'views/ajax',
                {
                    view_name: 'popp_refdoc_display', view_display_id: 'block_1', view_args: nid
                },
                replaceInfos
            );
        } else {
            $.post(
                Drupal.settings.basePath + 'views/ajax',
                {
                    view_name: 'popp_search_result_view', view_display_id: 'block_3', view_args: nid + '/' + id
                },
                replaceInfos
            );
        }
    }

    function changeLightBoxUrl() {
		var src = $("#photoPh").find("img").attr("src");
		src = src.replace('styles/photo_sheet_display/public', '');
        $("#showInBox").attr("href", src);
    }

    function prepareComments() {
        $("#edit-subject--2").remove();
        var serieId = $("#serieId").text();
        var select = $("<select name='subject' class='form-control'></select>");
        if ($("a[referencedoc='true']").size() > 0) {
            select.append('<option value="false">Document référence</option>');
        }
        for (var i in photos) {
            select.append('<option value="' + i + '">Photo n°' + ( parseInt(i) + 1 ) + ' - ' + serieId + ' ' + pad((parseInt(i) + 1), 2) + '</option>');
        }
        $("#comment-form--2 label[for='edit-subject--2']").text('Photo concernée par votre commentaire');
        $("#comment-form--2 label[for='edit-subject--2']").after(select);
    }

    function sortComments() {
        var commentsToSort = [];
        $("#comments .comment").each(function (i, elt) {
            var photoNumber = parseInt($(elt).find(".photoCommentNumber").text()) - 1;
            var photoFalse = $(elt).find(".photoCommentNumber").text() == "false";
            var $elt = $(elt).detach();
            $elt.find("h3.current").remove();
            if (photoFalse && actualUnd === false) {
                $elt.find("h3.notCurrent").before($("<h3 class='current'>Document référence</h3>"));
                $("#currentPhotoComments").append($elt);
            } else if (photoNumber === parseInt(actualUnd)) {
                $elt.find("h3.notCurrent").before($("<h3 class='current'>Photo courante</h3>"));
                $("#currentPhotoComments").append($elt);
            } else {
                commentsToSort.push($elt);
            }
        });
        commentsToSort.sort(function($a, $b){
           return parseInt($a.find('.photoCommentNumber').text()) > parseInt($b.find('.photoCommentNumber').text());
        });
        for (var i in commentsToSort){
            $("#otherPhotoComments").append(commentsToSort[i]);
        }

    }

})(jQuery);

var Drupal = Drupal || {'settings': {}, 'behaviors': {}, 'locale': {}};

Drupal.arg = Drupal.arg || function (index, path) {
    if (path === undefined) {
        path = window.location.pathname;
    }
    if (path.substr(0, 1) === '/') {
        path = path.substr(1);
    }
    path = path.split('?');
    var args = path[0].split('/');
    if (index === null) {
        return args;
    }
    if (args[index]) {
        return args[index];
    }
    return false;
};

function pad(num, size) {
    var s = num + "";
    while (s.length < size) s = "0" + s;
    return s;
}

function getFirst(obj) {
    for (var a in obj) return obj[a];
}