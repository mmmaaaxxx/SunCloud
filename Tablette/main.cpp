#include "mainwindow.h"
#include "clienttcp.h"
#include "init.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//    ClientTcp client;
//    client.start("192.168.173.1", 9000);


    init init;
    init.showMaximized();
    return app.exec();
}
