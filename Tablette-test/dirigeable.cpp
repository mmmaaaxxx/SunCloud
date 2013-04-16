#include "dirigeable.h"
//#include "ui_tryagain.h"
#include <qmath.h>


/**
 * @brief Dirigeable construit un dirigeable avec toutes les paramètres aux valeurs médiannes,
 * allant à Berlin
 */
Dirigeable::Dirigeable() : QObject()
{
    direction = 180;
    h_cValue = MAX_H/2;
    v_tValue = MAX_WIND/2;
    angle = M_PI;
}

/**
 * @deprecated
 * @brief Dirigeable::setDirection change l'angle du dirigeable en degré. Cette méthode ne devrait plus être utilisée,
 * nous manipulons des angles en radian maintenant
 * @param value le nouvel angle
 */
void Dirigeable::setDirection(int value)
{
    if(value>=0 && value<=360){
        direction = value;
        angle = direction;
        angle *= M_PI/180;  // conversion en radian
    }
    else {
        if(value <= 0)
        {
            direction = 0;
            angle = 0;
        }
        else if(value >= 360){
            direction = 360;
            angle = 2*M_PI;
        }
    }
}

/**
 * @brief Dirigeable::setDirection change l'angle du dirigeable
 * @param value le nouvel angle en radian
 */
void Dirigeable::setAngle(float value)
{
    if(value>=0 && value<=2*M_PI){
        angle = value;
        direction = 180*angle/M_PI;
    }
}

/**
 * @brief Dirigeable::setH_c change la valeur de l'angle h du dirigeabl
 * @param value la nouvelle valeur
 */
void Dirigeable::setH_c(int value)
{
    if(value >=  0 && value <= 2000)
        h_cValue = value;
}

/**
 * @brief Dirigeable::setV_t change l'angle v du dirigeable
 * @param value la nouvelle valeur
 */
void Dirigeable::setWind(int value){

    if(value >=  0 && value <= 90)
        v_tValue = value;
}

/**
 * @brief Dirigeable::getH_c indique l'angle h du dirigeable
 * @return l'angle
 */
int Dirigeable::getH_c()
{
    return h_cValue;
}

/**
 * @brief Dirigeable::getV_t indique l'angle v du dirigeable
 * @return  l'angle
 */
int Dirigeable::getV_t()
{
    return v_tValue;
}

/**
 * @brief Dirigeable::getDirection indique l'angle de direction du dirigeable
 * @return l'ange
 */
int Dirigeable::getDirection()
{
    return direction;
}

/**
 * @brief Dirigeable::getDirection indique l'angle de direction du dirigeable
 * @return l'ange
 */
float Dirigeable::getAngle()
{
    return angle;
}



