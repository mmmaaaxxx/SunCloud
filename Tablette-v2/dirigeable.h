#ifndef TRYAGAIN_H
#define TRYAGAIN_H

#include <QObject>
#include <qmath.h>


/**
 * @brief la classe Dirigeable contient les paramètres à envoyer à un dirigeable
 */
class Dirigeable : public QObject
{
    Q_OBJECT

public:

    // les villes d'arrivées prédéfinies
    typedef enum {BERLIN, NEWYORK, VLADIVOSTOK} ARRIVAL_CITIES;

    Dirigeable();

    int getDirection();
    int getH_c();
    int getV_t();
    float getAngle();

    static const int MAX_WIND = 90;
    static const float MAX_ANGLE = 2*M_PI;
    static const int MAX_H = 2000;

public slots:

    void setDirection(int value);

    void setH_c(int value);

    void setWind(int value);

    void setAngle(float value);


    private:
    /**
     * @brief direction l'angle en degré du dirigeable (0 à 360)
     */
    int direction;
    /**
     * @brief angle l'angle en radian du dirigeable (0 à 2 Pi)
     */
    float angle;
    /**
     * @brief h_cValue angle h (0 à 2000), correspond à ???
     */
    int h_cValue;
    /**
     * @brief v_tValue angle v (0 à 90) correspond à ???
     */
    int v_tValue;


};

#endif // TRYAGAIN_H
