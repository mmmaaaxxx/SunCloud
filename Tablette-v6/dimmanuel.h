#ifndef DIMMANUEL_H
#define DIMMANUEL_H

#include <QWidget>
#include "commande.h"
#include "clienttcp.h"
#include "qmlapplicationviewer.h"

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

    void setNextLayer(QWidget* w);
    void setPreviousLayer(QWidget* w);
    
private slots:
    void on_pushButton_Retour_clicked();
    void on_pushButton_clicked();

    void on_horizontalSlider_valueChanged  (int value);
    void on_horizontalSlider_2_valueChanged(int value);
    void on_horizontalSlider_3_valueChanged(int value);
    void on_horizontalSlider_4_valueChanged(int value);
    void on_horizontalSlider_5_valueChanged(int value);
    void on_horizontalSlider_6_valueChanged(int value);

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

    QWidget *previousLayer;
    QWidget *nextLayer;
};

#endif // DIMMANUEL_H
