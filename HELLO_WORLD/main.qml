import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Row {
        Rectangle {
            id: rectnagle1

            width: 200
            height: 200
            color: "red"

            Text {
                id: text1
                anchors.centerIn: parent
                text: "First Name"
            }
        }

        Rectangle {
            id: rectnagle2

            width: 200
            height: 200
            color: "green"

            TextEdit {
                id: textEdit1
                anchors.centerIn: parent
                text: "First Name"
            }
        }

        Rectangle {
            id: rectnagle3

            width: 200
            height: 200
            color: "blue"

            Button {
                id: button1
                anchors.centerIn: parent
                text: "Update"
            }
        }
    }

    Connections{
        target: button1
        function onClicked() {
            Worker.firtsName = textEdit1.text
        }
    }

    Connections{
        target: Worker
        function onFirtsNameChanged(firtsName) {
            text1.text = firtsName
        }
    }
}
