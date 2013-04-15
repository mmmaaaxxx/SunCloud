#ifndef DIMMANUEL_H
#define DIMMANUEL_H

#include <QWidget>
#include "ui_commande.h"
#include "commande.h"
#include "clienttcp.h"
namespace Ui {
class DimManuel;
}

class DimManuel : public QWidget
{
    Q_OBJECT
    
public:
    explicit DimManuel(QWidget *parent = 0);
    ~DimManuel();
    void envoiparametres();
    void connexion();
    QString getParametre1();
    QString getParametre2();
    QString getParametre3();
    QString getParametre4();
    QString getParametre5();
    QString getParametre6();
private slots:
    void on_pushButton_Quitter_clicked();
    void on_pushButton_clicked();



private:
    Ui::DimManuel *ui;
    commande *window_cmd;
    ClientTcp ClientDimension;

    QString parametre1;
    QString parametre2;
    QString parametre3;
    QString parametre4;
    QString parametre5;
    QString parametre6;
};

#endif // DIMMANUEL_H
