#include <QApplication>
//#include "qmlapplicationviewer.h"
#include "carte.h"
#include "commande.h"
#include "dimensionement.h"
#include "dimmanuel.h"
#include "init.h"
#include "mainwindow.h"
#include "assemblage.h"
#include "server.h"
#include "dirigeable.h"
Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    /** Creation des differentes pages **/
    init            init;
    dimensionement  dimensionnement;
    MainWindow      window;
    DimManuel       dimManuel;
    Assemblage      assemblage;
    Dirigeable*     dirigeable = new Dirigeable;
    ServerSend      serverS(dirigeable,9999);

    commande        commandes(dirigeable);
    /** creation de l'enchainement de panneaux **/
    init.setNextLayer(&dimensionnement);

    dimensionnement.setNextLayer(&window);

    window.setNextLayers(&assemblage,&dimManuel);
    window.setPreviousLayer(&dimensionnement);

    assemblage.setNextLayer(&commandes);
    assemblage.setPreviousLayer(&window);

    dimManuel.setPreviousLayer(&window);
    dimManuel.setNextLayer(&commandes);



    commandes.setPreviousLayer(&window);

    /** Affichage de la premiere page **/
    init.showMaximized();

    return app.exec();
}
