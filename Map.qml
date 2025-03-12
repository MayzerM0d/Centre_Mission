import QtQuick 2.15
import QtLocation 6.8

Rectangle {

    Plugin {
        id: mapPlugin
        name: "osm"
    }

    Map {
        id: mapView
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(48.858844, 2.294351)
        zoomLevel: 15
    }
}
