#ifndef CARTE_H
#define CARTE_H

#include <QLabel>
#include <QPoint>
#include "dirigeable.h"

// coordonnées du pixel de la carte correspondant au Bourget
//*
// petite carte
#define BOURGET_LATITUDE 91
#define BOURGET_LONGITUDE 405
//*/
/*
 // grand carte
#define BOURGET_LATITUDE 165
#define BOURGET_LONGITUDE 730
//*/


class Carte : public QLabel
{
    Q_OBJECT
public:

    /**
     * @brief Vladivostok du pixel de la carte correspondant à Vladivostok
     */
    static  const QPoint Vladivostok;
    /**
     * @brief Vladivostok du pixel de la carte correspondant à Berlin
     */
    static  const QPoint Berlin;

    /**
     * @brief Vladivostok du pixel de la carte correspondant à New York
     */
    static  const QPoint NewYork;

    explicit Carte(Dirigeable &dirigeable, QWidget *parent = 0);
    virtual void setPixmap(const QPixmap &map);
    virtual void mouseMoveEvent(QMouseEvent *e);
    void setArrival(Dirigeable::ARRIVAL_CITIES arrival);
    void changeAngle(qreal deltaRadian);


    /*
     *
    static  QPoint Vladivostok = QPoint(1258,153);
    static  QPoint Berlin = QPoint(772,148);
    static  QPoint NewYork = QPoint(426,195);
    */


protected:

       void paintEvent(QPaintEvent *p);
       void drawArrow(QPainter *p, QPoint from, QPoint to, int size=30, int blanc_dist = 0);

private:

    void updateValuesToPoint(QPoint to);

    /**
     * @brief semiLati la moitié de la longueur de la carte
     */
    int semiLati;
    /**
     * @brief semiLongi la moitié de la largeur de la carte
     */
    int semiLongi;

    /**
     * @brief departure le point de départ
     */
    QPoint departure;
    /**
     * @brief arrival le point d'arrivée
     */
    QPoint arrival;

    /**
     * @brief virtualDeparture point virtuel d'arrivée, utilisé si l'on sort de la carte pour rentrer de l'autre côté
     */
    QPoint virtualDeparture;
    /**
     * @brief virtualArrival point virtuel de départ, utilisé si l'on sort de la carte pour rentrer de l'autre côté
     */
    QPoint virtualArrival;


    /**
     * @brief dirigeable référence sur les paramètres du dirigeable
     */
    Dirigeable &dirigeable;


};

#endif // CARTE_H
