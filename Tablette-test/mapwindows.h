#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QWidget>
#include <QScrollArea>
#include <QPushButton>
#include <QSlider>
#include <QSpinBox>
#include <QTimer>
#include <QLabel>
#include <QAccelerometer>
#include <QCheckBox>
#include "carte.h"
#include "dirigeable.h"


// add Qt Mobility Project Namespace
QTM_USE_NAMESPACE



/**
 * @brief La classe MapWindow gère une fenêtre comprenant les informations du dirigeable en vol :
 * carte montrant où l'on va et paramètres à envoyer.
 */
class MapWindow : public QWidget
{
    Q_OBJECT
public:
    MapWindow(Dirigeable &dirigeable, Dirigeable::ARRIVAL_CITIES arrival, QWidget *parent = 0);
    void setArrival(Dirigeable::ARRIVAL_CITIES arrival);
    const QPushButton* getQuitButton() const;
    const QPushButton* getBackButton() const;
    const QPushButton* getManualButton() const;

public slots :

    void setWindPeak();
    void popup(int state);

protected:
    bool event(QEvent *event);

private:
    void updateXYZPosition();

private:
    /**
     * @brief map pointeur sur une carte comprenant les points de départ et d'arrivée
     */
    Carte *map;
    /**
     * @brief wind_slider slider faisant varier la force du vent
     */
    QSlider *wind_slider;
    /**
     * @brief picButton bouton qui envoie un pic de vent
     */
    QPushButton *picButton;

    /**
     * @brief formerValue permet de sauvegarder temporairement la valeur du vent avant d'envoyer un pic
     */
    int formerValue;
    /**
     * @brief quitButton bouton pour quitter l'application
     */
    QPushButton *quitButton;
    /**
     * @brief backButton bouton pour revenir au menu précédent
     */
    QPushButton *backButton;
    /**
     * @brief timeWindSpine spin box pour choisir la durée d'un pic de vent
     */
    QSpinBox *timeWindSpine;

    /**
     * @brief manualButton bouton pour activer les commandes manuelles
     */
    QPushButton *manualButton;


    QAccelerometer *accelerometerSensor;
    QBasicTimer Timer;


    /**
     * @brief enableAccelerometer checkbox qui permet d'activer ou non l'action de l'accelerometer
     */
    QCheckBox *enableAccelerometer;

    Dirigeable& dirigeable;
    QLabel *altitude;
private slots:

    void formerWind();


};

#endif // MAPWINDOW_H
