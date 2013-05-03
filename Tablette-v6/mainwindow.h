#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dimmanuel.h>
#include "qpainter.h"
#include <carte.h>
#include <dirigeable.h>
#include "qmlapplicationviewer.h"

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

    void setNextLayers(QWidget* w1, QWidget* w2);
    void setPreviousLayer(QWidget* w);

protected:
    Carte *map;
    Carte *blimp;

private slots:

    void on_pushButton_DimAuto_clicked();
    void on_pushButton_DimManu_clicked();
    void on_pushButton_Retour_clicked();

    void on_radioButton_Printemps_clicked(bool);
    void on_radioButton_Ete_clicked(bool);
    void on_radioButton_Automne_clicked(bool);
    void on_radioButton_Hiver_clicked(bool);

    void on_radioButton_Bourget_clicked(bool);
    void on_radioButton_NY_clicked(bool);
    void on_radioButton_Vladivostock_clicked(bool);

    void on_horizontalSlider_sliderReleased();
    void on_horizontalSlider_valueChanged();
    void setDronepicture(int max, int min, int val);

private:
    Ui::MainWindow  *ui;

    /**
     * @brief Vladivostok du pixel de la carte correspondant à Vladivostok
     */
    static  const QPoint Vladivostok;

    /**
     * @brief NewYork du pixel de la carte correspondant à New York
     */
    static  const QPoint NewYork;

    /**
     * @brief LeBourget du pixel de la carte correspondant à New York
     */
    static  const QPoint LeBourget;

    ClientTcp ClientAuto;

    QString depart;
    QString arrivee;
    QString saison;
    QString charge;

    QWidget* previouslayer;
    QWidget* nextlayer1;
    QWidget* nextlayer2;

    QTimer timer;
    int    CurrentFrame;

    QmlApplicationViewer *viewer_video ;
};

#endif // MAINWINDOW_H

