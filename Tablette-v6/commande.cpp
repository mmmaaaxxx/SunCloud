#include "commande.h"
#include "ui_commande.h"
#include "clienttcp.h"
#include <QApplication>
#include "server.h"

commande::commande(Dirigeable* dir, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::commande)
{

    dirigeable = dir;
    ui->setupUi(this);

    accelerometerSensor = new QAccelerometer;

    if (!Timer.isActive())
        Timer.start(40, this);

    // start the sensor
    if (!accelerometerSensor->isActive())
        accelerometerSensor->start();

    ui->horizontalSlider->setValue(dirigeable->getDirection());
}

commande::~commande()
{
    delete ui;
}

void commande::on_pushButton_camera1_clicked()
{
   connexion();
   number=1;
   ClientCamera.envoieparametre(number);
}

void commande::on_pushButton_camera2_clicked()
{
   connexion();
   number=2;
   ClientCamera.envoieparametre(number);
}

void commande::on_pushButton_camera3_clicked()
{
   connexion();
   number=3;
   ClientCamera.envoieparametre(number);
}

void commande::on_pushButton_camera4_clicked()
{
   connexion();
   number=4;
   ClientCamera.envoieparametre(number);
}

void commande::connexion()
{
    ClientCamera.start("192.168.173.1",5501);
}


bool commande::event(QEvent *event)
{
    switch (event->type()) {
    case QEvent::Timer:
        if (static_cast<QTimerEvent*>(event)->timerId() == Timer.timerId())
        {
            if(ui->checkBox->isChecked())
            updateDirection();// update the y position
        }
        break;
    default:
        break;
    }

    return QWidget::event(event);
}

void commande::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
    {
        ui->horizontalSlider->setEnabled(false);
    }
    else{
        ui->horizontalSlider->setEnabled(true);
        ui->horizontalSlider->setValue(dirigeable->getDirection());
    }
}

void commande::on_horizontalSlider_valueChanged()
{
    dirigeable->setDirection(ui->horizontalSlider->value());
    ui->lcdNumber->display(dirigeable->getDirection());
}

void commande::updateDirection()
{
    QAccelerometerReading *reading = accelerometerSensor->reading();
    qreal yacceleration = 0.0f;

    if (reading) {
        yacceleration   = reading->y();

        dirigeable->setDirection(dirigeable->getDirection()-yacceleration);
        ui->horizontalSlider->setValue(dirigeable->getDirection());
        ui->lcdNumber->display(dirigeable->getDirection());
    }
}
void commande::setPreviousLayer(QWidget* w){
    this->previousLayer = w;
}

void commande::on_pushButton_Retour_clicked(){
    previousLayer->showMaximized();
    hide();
}
