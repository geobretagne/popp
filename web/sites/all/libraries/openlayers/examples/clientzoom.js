var map;

function init() {

    map = new OpenLayers.Map({
        div: "map",
        projection: "EPSG:900913",
        controls: [],
        fractionalZoom: true
    });

    var osm = new OpenLayers.Layer.OSM(null, null, {
        resolutions: [156543.03390625, 78271.516953125, 39135.7584765625,
                      19567.87923828125, 9783.939619140625, 4891.9698095703125,
                      2445.9849047851562, 1222.9924523925781, 611.4962261962891,
                      305.74811309814453, 152.87405654907226, 76.43702827453613,
                      38.218514137268066, 19.109257068634033, 9.554628534317017,
                      4.777314267158508, 2.388657133579254, 1.194328566789627,
                      0.5971642833948135, 0.25, 0.1, 0.05],
        serverResolutions: [156543.03390625, 78271.516953125, 39135.7584765625,
                            19567.87923828125, 9783.939619140625,
                            4891.9698095703125, 2445.9849047851562,
                            1222.9924523925781, 611.4962261962891,
                            305.74811309814453, 152.87405654907226,
                            76.43702827453613, 38.218514137268066,
                            19.109257068634033, 9.554628534317017,
                            4.777314267158508, 2.388657133579254,
                            1.194328566789627, 0.5971642833948135],
        transitionEffect: 'resize'
    });

    map.addLayers([osm]);
    map.addControls([
            new OpenLayers.Control.Navigation(),
            new OpenLayers.Control.Attribution(),
            new OpenLayers.Control.PanZoomBar()
    ]);
    map.setCenter(new OpenLayers.LonLat(659688.852138, 5710701.2962197), 18);
}
