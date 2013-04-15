#ifndef DIMENSIONEMENT_H
#define DIMENSIONEMENT_H

#include <QWidget>
#include <QString>
#include <mainwindow.h>
#include "ui_mainwindow.h"
#include <clienttcp.h>

namespace Ui {
class dimensionement;
}

class dimensionement : public QWidget
{
    Q_OBJECT
    
public:
    explicit dimensionement(QWidget *parent = 0);
    ~dimensionement();
    void connexion();



private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


    QString getPseudo();
    QString getSociete();
    QString getSimulation();



private:
    Ui::dimensionement *ui;

    MainWindow *window;
    /**
     * @brief dirigeable référence sur les paramètres du dirigeable
     */
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



};

#endif // DIMENSIONEMENT_H
