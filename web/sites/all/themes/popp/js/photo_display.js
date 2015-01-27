/**
 * Created by lbodiguel on 20/01/2015.
 */
(function($) {
    var checkedPhoto = 0;
    var cpt =0;
    $(document).ready(function(){
        var photo = getPhotoId();
        if(photo != false){
            loadPhoto(photo);
        }else{
            loadPhoto($(".toZoom").first().attr('linkedphoto'));
        }
        // Change photo on click on a thumbnail
        $("#thumbnailsViewPlaceHolder").on('click', '.toZoom', function(e){
            loadPhoto($(this).attr('linkedphoto'));
            e.preventDefault();
            e.stopImmediatePropagation();
            return false;
        });
        $("#thumbnailsViewPlaceHolder").on('mouseup', '.pagination a', function(e){
            $(document).ajaxSuccess(setCheckedPhoto);
        });
    });
    function getPhotoId () {
        return Drupal.arg(2);
    }

    function setCheckedPhoto(photo){
        $(document).off('ajaxSuccess');
        if(photo == null || typeof(photo) == "object"){
            photo = checkedPhoto;
            console.log(photo);
            if(cpt == 2){
                $(document).off('ajaxSuccess');
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
            Drupal.attachBehaviors();
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
                view_name: 'popp_field_collection_serie',view_display_id: 'block',view_args: id
            },
            replacePhoto
        );
        $.post(
            Drupal.settings.basePath + 'views/ajax',
            {
                view_name: 'popp_field_collection_serie', view_display_id: 'block_1', view_args:id
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