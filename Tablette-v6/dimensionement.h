#ifndef DIMENSIONEMENT_H
#define DIMENSIONEMENT_H

#include <QWidget>
#include <mainwindow.h>
#include "ui_mainwindow.h"
#include <QtNetwork>
#include <QTcpSocket>
#include <dirigeable.h>

namespace Ui {
class dimensionement;
}

class dimensionement : public QWidget
{
    Q_OBJECT

public:
    explicit dimensionement(QWidget* parent = 0);
    ~dimensionement();
    void connexion();
    void setNextLayer(QWidget* w);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


    QString getPseudo();
    QString getSociete();
    QString getSimulation();

private:
    Ui::dimensionement *ui;

    void envoipropriete();
    ClientTcp ClientPropriete;

    // les informations saisies par l'utilisateur
     // comme elles ne sont pas nombreuses elles sont dans la classe de la fenêtre
    /**
     * @brief pseudo de l'utilisateur
     */
    QString pseudo;
    /**
     * @brief nom de la société
     */
    QString societe;
    /**
     * @brief nom de la simulation
     */
    QString simulation;

    QWidget* nextLayer;
};

#endif // DIMENSIONEMENT_H

