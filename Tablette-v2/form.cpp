#include "form.h"
#include "ui_form.h"
#include <iostream>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    accelerometerSensor = new QAccelerometer;

    if (!Timer.isActive())
        Timer.start(40, this);

//    // start the sensor
//    if (!accelerometerSensor->isActive())
//        accelerometerSensor->start();

//    if (!accelerometerSensor->isActive())
//    {
//        std::cout << "accelerometer sensor didn't start!" << std::endl;
//    }
    ui->horizontalSlider->setValue(dirigeable.getDirection());
}

Form::~Form()
{
    delete ui;
}

void Form::on_checkBox_duree_infinie_clicked(){
    if(ui->checkBox_duree_infinie->isChecked() == true)
    {
        ui->spinBox_duree->setEnabled(false);
    }
    else
        ui->spinBox_duree->setEnabled(true);
}

bool Form::event(QEvent *event)
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

void Form::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
    {
        ui->horizontalSlider->setEnabled(false);
    }
    else{
        ui->horizontalSlider->setEnabled(true);
        ui->horizontalSlider->setValue(dirigeable.getDirection());
    }
}

void Form::on_horizontalSlider_valueChanged()
{
    dirigeable.setDirection(ui->horizontalSlider->value());
    ui->lcdNumber->display(dirigeable.getDirection());
}

void Form::updateDirection()
{
    QAccelerometerReading *reading = accelerometerSensor->reading();
    qreal yacceleration = 0.0f;

    if (reading) {
        yacceleration   = reading->y();

        dirigeable.setDirection(dirigeable.getDirection()-yacceleration);
        ui->horizontalSlider->setValue(dirigeable.getDirection());
        ui->lcdNumber->display(dirigeable.getDirection());
    }
}
