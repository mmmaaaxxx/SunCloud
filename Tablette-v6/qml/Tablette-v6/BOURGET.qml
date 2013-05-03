import QtQuick 1.1

AnimatedImage{
    id:vid

    source:"P1_P.gif"

    Timer{
        id: t

        interval: 1000

        onTriggered: {
            vid.currentFrame = 0
            vid.paused = false
        }
    }

    onCurrentFrameChanged: if(currentFrame == 100)
                           {
                                vid.paused = true
                                t.restart()
                           }
}
