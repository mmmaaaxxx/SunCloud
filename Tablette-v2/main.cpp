#include "mainwindow.h"
#include "init.h"
#include <dimensionement.h>
#include <dimmanuel.h>
#include <form.h>
#include <QApplication>
#include <dirigeable.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    init init;
    dimensionement dimensionnement;
    MainWindow window(0);
    DimManuel dimManuel;
    Form form(0);

    form.showMaximized();
    dimManuel.showMaximized();
    window.showMaximized();
    dimensionnement.showMaximized();
    init.showMaximized();

    return app.exec();
}
