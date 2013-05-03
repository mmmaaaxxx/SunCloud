import QtQuick 1.1
import Qt3D 1.0

Viewport {
    id: root_viewport

    blending: true
    navigation: true
    anchors.fill: parent

    lightModel:LightModel{
        id: light
        model: "TwoSided"
    }

    Mesh {
        id: mesh
        source: "SunCloud_1.dae"
    }

    Item3D {
        id: dirigeable
        mesh: mesh

        scale:0.02

        transform:[
            Translation3D{
                id: translation
                //origin:Qt.vector3d(0,0,0)
                translate: Qt.vector3d(0,0,0)
            },
            Rotation3D{
                id:rotationZ
                origin:Qt.vector3d(2.20,0,0)
                axis:Qt.vector3d(0,1,0)
                angle: 90
            }
        ]
    }
}
