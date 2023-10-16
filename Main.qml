import QtQuick
import QtQuick.Window
import QtLocation 5.8
import QtPositioning 5.8

Window {
    width: 640
    height: 480
    visible: true

    Plugin{
        id: maplugin
        name: "osm"
    }
    Map{
        id: mapview
        anchors.fill: parent
        plugin: maplugin
        center: QtPositioning.coordinate(25.6565, 125.3658)
        zoomLevel: 15
    }


}
