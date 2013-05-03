#ifndef CARTE_H
#define CARTE_H

#include <QLabel>
#include <QPoint>
#include "dirigeable.h"

// coordonnées du pixel de la carte correspondant au Bourget
//*
// petite carte
#define BOURGET_LATITUDE 118
#define BOURGET_LONGITUDE 322
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

    explicit Carte(QWidget *parent = 0);
    virtual void setPixmap(const QPixmap &map);
    virtual void mouseMoveEvent(QMouseEvent *e);
    void setArrival(Dirigeable::ARRIVAL_CITIES arrival);
    void setArrival(QPoint inputArrival);
    void changeAngle(qreal deltaRadian);
    void updateValuesToPoint(QPoint to);
    void paintEvent(QPaintEvent *p);

protected:       
       void drawArrow(QPainter *p, QPoint from, QPoint to, int size=30, int blanc_dist = 0);

private:

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
};

#endif // CARTE_H
