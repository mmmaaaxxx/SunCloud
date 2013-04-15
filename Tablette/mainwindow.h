#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dimmanuel.h>
#include "clienttcp.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

    // Note that this will only have an effect on Fremantle.
    void showExpanded();
    void envoipropriete();
    void connexion();
    QString getDepart();
    QString getArrivee();
    QString getSaison();
    QString getCharge();



private slots:

    void on_comboBox_3_currentIndexChanged(int index);
    void on_pushButton_DimManu_clicked();
    void on_pushButton_DimAuto_clicked();
    void on_pushButton_Quitter_clicked();


private:
    Ui::MainWindow *ui;
    DimManuel *window_manu;
    ClientTcp ClientAuto;

    QString depart;
    QString arrivee;
    QString saison;
    QString charge;

};

#endif // MAINWINDOW_H
