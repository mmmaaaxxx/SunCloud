#include "mapwindows.h"
#include <QPushButton>
#include "carte.h"
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpacerItem>
#include <QSlider>
#include <QThread>
#include <QDebug>
#include <QTimer>
#include <QWidget>
#include <QResizeEvent>
#include <QTimerEvent> // timer event
#include <QMessageBox>

/**
 * @brief MapWindow::MapWindow Construit une MapWIndow
 * @param dirigeable référence sur les paramètres du dirigeable
 * @param arrival la ville d'arrivée
 * @param parent le widget parent
 */
MapWindow::MapWindow(Dirigeable &dirigeable, Dirigeable::ARRIVAL_CITIES arrival, QWidget *parent):QWidget(parent), dirigeable(dirigeable)
{
// création de la carte
    map = new Carte;
    map->setPixmap(QPixmap(":/images/carte_small.png"));
    map->setArrival(arrival);
    map->setGeometry(0,0, 800, 400);

    qDebug()<<dirigeable.getH_c();
    altitude = new QLabel(QString("altitude : %1").arg(dirigeable.getH_c()), this);
    altitude->setGeometry(20, 400, 200, 40);

    QWidget *menu = new QWidget(this);  // boutons quitter et précédent
    menu->setGeometry(50, 400, 800, 400);
    backButton = new QPushButton("Précédent");
    quitButton = new QPushButton("Quitter");
    QHBoxLayout *menuLayout = new QHBoxLayout;
    menuLayout->addWidget(backButton);
    menuLayout->addStretch();
    menuLayout->addWidget(quitButton);
    menu->setLayout(menuLayout);

    QWidget *infos = new QWidget(this);         // panneau de contrôle : choix de la caméra
    infos->setGeometry(800, 50, 400, 500);      // et action sur le vent
    QLabel *cam1 = new QLabel("Caméra 1");
    QLabel *cam2 = new QLabel("Caméra 2");
    QLabel *cam3 = new QLabel("Caméra 3");
    QLabel *cam4 = new QLabel("Caméra 4");
    QGridLayout *infosLayout = new QGridLayout;
    infosLayout->addWidget(cam1, 0, 0);
    infosLayout->addWidget(cam2, 0, 1);
    infosLayout->addWidget(cam3, 1, 0);
    infosLayout->addWidget(cam4, 1, 1);
    QSpacerItem  *spacer = new QSpacerItem (100,100);
    infosLayout->addItem(spacer, 2,0, 1, 2);
    infos->setLayout(infosLayout);
    QPushButton *picButton = new QPushButton("Pic de vent", this);
    infosLayout->addWidget(picButton, 3, 0);
    QHBoxLayout *timeLayout = new QHBoxLayout(infos);
    timeWindSpine = new QSpinBox(infos);
    timeWindSpine->setMaximum(99);
    timeWindSpine->setMinimumWidth(120);    // de quoi écrire 2 chiffres
    timeWindSpine->setMinimum(1);
    timeWindSpine->setValue(1);
    timeLayout->addWidget(timeWindSpine);
    timeLayout->addWidget(new QLabel("s", infos));
    QWidget *timePeak = new QWidget(infos);
    timePeak->setLayout(timeLayout);
    infosLayout->addWidget(timePeak, 3, 1);
    infosLayout->addWidget(new QLabel("vent"), 4, 0);
    wind_slider = new QSlider(Qt::Horizontal, this);
    wind_slider->setRange(0, 90);
    wind_slider->setValue(dirigeable.getV_t());
    infosLayout->addWidget(wind_slider, 4, 1);
  //  manualButton = new QPushButton("commandes manuelles", this);

    QHBoxLayout *accelerLayout = new QHBoxLayout(this);
    enableAccelerometer = new QCheckBox(this);
    accelerLayout->addWidget(enableAccelerometer);
    accelerLayout->addWidget(new QLabel("accéléromètre", this));
    QWidget *accelerWidget = new QWidget(infos);
    accelerWidget->setLayout(accelerLayout);
    infosLayout->addWidget(accelerWidget, 5,0,1,2);

    QObject::connect(wind_slider, SIGNAL(valueChanged(int)), &dirigeable, SLOT(setWind(int)));
    QObject::connect(picButton, SIGNAL(pressed()), this, SLOT(setWindPeak()));
    QObject::connect(enableAccelerometer, SIGNAL(stateChanged(int)), this, SLOT(popup(int)));

    accelerometerSensor = new QAccelerometer(this);
  //  inactiveTimer.setSingleShot(true);

    if (!Timer.isActive())
        Timer.start(40, this);

    // start the sensor
    if (!accelerometerSensor->isActive())
        accelerometerSensor->start();

    if (!accelerometerSensor->isActive())
    {
        qDebug() << "accelerometer sensor didn't start!" << endl;
    }
}

/**
 * @brief MapWindow::setArrival change la ville d'arrivée
 * @param arrival la nouvelle destination
 */
void MapWindow::setArrival(Dirigeable::ARRIVAL_CITIES arrival)
{
    map->setArrival(arrival);
}


void MapWindow::popup(int state)
{
    if(enableAccelerometer->isChecked()){
        QMessageBox::information(this, "c", "checked");
        qDebug()<<"\nchecked";
    }
    else{
        QMessageBox::information(this, "c", "unchecked");
        qDebug()<<"\nnop";
    }
}
/**
 * @brief MapWindow::setWindPeak envoie un pic de vent à la valeur maximale
 */
void MapWindow::setWindPeak()
{
    formerValue = wind_slider->value(); // on sauvegarde l'ancienne valeur
    wind_slider->setValue(Dirigeable::MAX_WIND);    // on met le vent à fond
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(formerWind()));    // puis on remettra la valeur sauvegardée
    timer->setSingleShot(true); // l'action ne sera faite qu'une seule fois
    timer->start(1000 * timeWindSpine->value());    // temps en ms
}

/**
 * @brief MapWindow::formerWind remet le vent à son état initial après un pic
 */
void MapWindow::formerWind()
{
    wind_slider->setValue(formerValue);
}

/**
 * @brief MapWindow::getQuitButton getteur pour le bouton quitter
 * @return pointeur sur le bouton
 */
const QPushButton* MapWindow::getQuitButton() const
{
    return quitButton;
}

/**
 * @brief MapWindow::getBackButton getteur pour le bouton précédent
 * @return pointeur sur le bouton
 */
const QPushButton* MapWindow::getBackButton() const
{
    return backButton;
}


/**
 * @brief MapWindow::getBackButton getteur pour le bouton précédent
 * @return pointeur sur le bouton
 */
const QPushButton* MapWindow::getManualButton() const
{
    return manualButton;
}


bool MapWindow::event(QEvent *event)
{
    switch (event->type()) {
    case QEvent::Timer:
        if (static_cast<QTimerEvent*>(event)->timerId() == Timer.timerId())
            updateXYZPosition(); // update the xyz position
        break;
    default:
        break;
    }

    return QWidget::event(event);
}



void MapWindow::updateXYZPosition()
{
    QAccelerometerReading *reading = accelerometerSensor->reading();
    qreal xacceleration = 0.0f;
    qreal yacceleration = 0.0f;
    qreal zacceleration = 0.0f;
    if (reading) {
        xacceleration = reading->x();
        yacceleration = reading->y();
        zacceleration = reading->z();

        int offset;
        // changement de direction
        if(yacceleration > 2 || yacceleration < -2){
            if(yacceleration>2)
                map->changeAngle((yacceleration - 1)/58);   // 180/PI vaut à peu près 58
            else                                            // on change donc par pas d'à peu près un degré
                map->changeAngle((yacceleration + 1)/58);
        }

        // variation d'altitude
        if(xacceleration > 2 || xacceleration < -2){
            if(xacceleration>2)
                offset = (Dirigeable::MAX_H*((xacceleration)/500.0));
            else
                offset = Dirigeable::MAX_H*((xacceleration)/500.0);
      //      qDebug()<<"yacceleration : "<<yacceleration<<"   offset:"<<offset;
            dirigeable.setH_c(dirigeable.getH_c() + offset);
            altitude->setText(QString("altitude : %1").arg(dirigeable.getH_c()) );
        }

     }
}
