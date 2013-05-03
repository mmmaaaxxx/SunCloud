#ifndef COMMANDE_H
#define COMMANDE_H

#include <QWidget>
#include <clienttcp.h>
#include <dirigeable.h>
#include <QAccelerometer>
#include <QTimer>

// add Qt Mobility Project Namespace to use Qaccelerometer
QTM_USE_NAMESPACE

namespace Ui {
class commande;
}

class commande : public QWidget
{
    Q_OBJECT
    
public:
    explicit commande(Dirigeable* dir, QWidget *parent = 0);
    ~commande();
    int number;
    void connexion();
    void setPreviousLayer(QWidget* w);

private slots:
    void on_pushButton_camera1_clicked();
    void on_pushButton_camera2_clicked();
    void on_pushButton_camera3_clicked();
    void on_pushButton_camera4_clicked();
    void on_pushButton_Retour_clicked();
    void on_horizontalSlider_valueChanged();
    void on_checkBox_clicked();

private:
    Ui::commande *ui;

    ClientTcp ClientCamera;
    ClientTcp ClientScicos;
    bool event(QEvent *event);
    QAccelerometer *accelerometerSensor;
    QBasicTimer    Timer;

    void updateDirection();
    void changeAngle(qreal deltaRadian);
    Dirigeable* dirigeable;

    QWidget *previousLayer;
};

#endif // COMMANDE_H
