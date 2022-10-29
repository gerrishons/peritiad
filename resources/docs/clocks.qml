import QtQuick
import "clockcontent" as Content

Rectangle {
    id: root
    width: 640; height: 320
    color: "#646464"

    ListView {
        id: clockview
        anchors.fill: parent
        orientation: ListView.Horizontal
        cacheBuffer: 2000
        snapMode: ListView.SnapOneItem
        highlightRangeMode: ListView.ApplyRange

        delegate: Content.Clock { city: cityName; shift: timeShift }
        model: ListModel {
            //ListElement { cityName: "Nairobi"; timeShift: 4 }
            ListElement { cityName: "New York"; timeShift: 8 }
           // ListElement { cityName: "London"; timeShift: 0 }
          //  ListElement { cityName: "Oslo"; timeShift: 1 }
           // ListElement { cityName: "Mumbai"; timeShift: 5.5 }
          //  ListElement { cityName: "Brisbane"; timeShift: 10 }
           //ListElement { cityName: "Los Angeles"; timeShift: -8 }
        }
    }

    Image {
        anchors.left: parent.left
        anchors.bottom: parent.bottom
        anchors.margins: 10
        source: "clockcontent/arrow.png"
        rotation: -90
        opacity: clockview.atXBeginning ? 0 : 0.5
        Behavior on opacity { NumberAnimation { duration: 500 } }
    }

    Image {
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.margins: 10
        source: "clockcontent/arrow.png"
        rotation: 90
        opacity: clockview.atXEnd ? 0 : 0.5
        Behavior on opacity { NumberAnimation { duration: 500 } }
    }
}
