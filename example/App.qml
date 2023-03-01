﻿import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtGraphicalEffects 1.15
import FluentUI 1.0

Window {
    id:app
    color: "#00000000"
    Component.onCompleted: {
        FluApp.isFps = true
        FluApp.setAppWindow(app)
        FluApp.routes = {
            "/":"qrc:/MainPage.qml",
            "/Setting":"qrc:/SettingPage.qml",
            "/About":"qrc:/AboutPage.qml"
        }
        FluApp.initialRoute = "/"
        FluApp.run()
    }

}
