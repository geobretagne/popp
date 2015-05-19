/**
 * Created by lbodiguel on 20/01/2015.
 */
(function($) {
    var checkedPhoto = 0;
    var nid = 0;
    var cpt =0;
    var first = true;
    $(document).ready(function(){

        nid = getNodeId();
        // Change photo on click on a thumbnail
        $("#thumbnailsViewPlaceHolder").on('click', '.toZoom', function(e){
            loadPhoto($(this).attr('linkedphoto'));
            e.preventDefault();
            e.stopImmediatePropagation();
            return false;
        });
        var defaultId = getPhotoId();
        if(!defaultId){
            defaultId = $("a[linkedphoto]").first().attr("linkedphoto");
        }
        setCheckedPhoto(defaultId);
        loadPhoto(defaultId);
    });
    function getPhotoId () {
        return Drupal.arg(2);
    }

    function getNodeId () {
        return Drupal.arg(1);
    }

    function setCheckedPhoto(photo){
        $(document).off('ajaxSuccess');
        if(photo == null || typeof(photo) == "object"){
            photo = checkedPhoto;
            if(cpt == 2){
                cpt = 0;
            }
        }
        $(".toZoom").each(function(i,elt){
            $(this).removeClass("activePhoto");
            $(this).find('span').remove();
            if($(this).attr('linkedphoto') == photo){
                checkedPhoto = photo;
                $(this).addClass("activePhoto");
                $(this).append('<span class="checkSelected glyphicon glyphicon-ok-circle"></span>');
            }
        });

    }

    function replacePhoto(response)
    {
        if (response[1] !== undefined)
        {
            var viewHtml = response[1].data;
            $("#photoPh").html(viewHtml);
            changeLightBoxUrl();
        }
    }

    function replaceInfos(response){
        if(response[1] !== undefined){
            var viewHtml = response[1].data;
            $("#photoDataPlaceHolder").html(viewHtml);
            Drupal.attachBehaviors();
        }
    }

    function loadPhoto(id){
        setCheckedPhoto(id);
        $.post(
            // Display first element of entity collection on load
            Drupal.settings.basePath + 'views/ajax',
            {
                view_name: 'popp_search_result_view',view_display_id: 'block_2',view_args: nid+'/'+id
            },
            replacePhoto
        );
        $.post(
            Drupal.settings.basePath + 'views/ajax',
            {
                view_name: 'popp_search_result_view', view_display_id: 'block_3', view_args:nid+'/'+id
            },
            replaceInfos
        );
    }

    function changeLightBoxUrl(){
        var src = $("#photoPh").find("img").attr("src");
        $("#showInBox").attr("href", src);
    }

})(jQuery);

var Drupal = Drupal || { 'settings': {}, 'behaviors': {}, 'locale': {} };

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