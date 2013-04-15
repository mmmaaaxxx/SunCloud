#include "carte.h"
#include <QtGui>
#include <qmath.h>

/*
 // sur la grand carte
const QPoint Carte::Vladivostok = QPoint(1258,153);
const  QPoint Carte::Berlin = QPoint(772,148);
const  QPoint Carte::NewYork = QPoint(426,195);
*/


// sur la petite carte
const QPoint Carte::Vladivostok = QPoint(694,103);
const  QPoint Carte::Berlin = QPoint(425,85);
const  QPoint Carte::NewYork = QPoint(238,105);


/**
 * @brief Carte::Carte Construit une carte par défaut, où l'on part du Bourget
 * @param dir les paramètres du dirigeable
 * @param parent le parent de la carte
 */
Carte::Carte(Dirigeable &dir, QWidget *parent)
    :QLabel(parent), dirigeable(dir)
{
    departure = QPoint(BOURGET_LONGITUDE, BOURGET_LATITUDE);
}

// on redéfinie la méthode afin de calculer les demi-longueurs et demi-largeurs de la carte
void Carte::setPixmap(const QPixmap &map)
{
    QLabel::setPixmap(map);
    semiLati = map.height()/2;
    semiLongi = map.width()/2;
}


// en cas de mouvement de l'utilisateur sur la carte, on met à jour les coordonnées
void Carte::mouseMoveEvent(QMouseEvent *e)
{
    QLabel::mousePressEvent(e);
    updateValuesToPoint(e->pos());  // on change le point d'arrivée pour aller là où l'utilisateur à son doigt
    emit paintEvent(0);     // et on redessine la fenêtre
    update();

}
/**
 * @brief Carte::updateValuesToPoint met à jour les paramètres du dirigeable et l'arrivée
 * @param to la nouvelle destination
 */
void Carte::updateValuesToPoint(QPoint to)
{
    // on vérifie que le point se trouve bien sur la carte. Si l'on en sort on n'agit pas
    if(to.x()>=0 && to.y()<= width() && to.y()>=0 && to.y()<= height())
    {
        int yVector = BOURGET_LATITUDE - to.y();    // vecteurs x et y pour aller du départ à l'arrivée
        int xVector = to.x() - BOURGET_LONGITUDE;

        arrival = to;
    /*    virtualDeparture = departure;
        virtualArrival = arrival;

         // la terre étant sphérique, si on est plus rapide dans le sens inverse, on l'utilise
        // si un des vecteurs est plus grand que le rayon de la Terre, alors on passe par l'autre côté

        if(yVector > semiLati){ // la destination est beaucoup plus haute que le départ
            yVector -= semiLati*2;  // on va passer par l'autre coté, donc faire 2 flèches
            virtualArrival.ry() = height()+arrival.y(); // on créé 2 points virtuels pour la flèche supplémentaire
            virtualDeparture.ry() = departure.y()-height(); // on reliera le départ à l'arrivée virtuelle et le départ virtuel à l'arrivée réelle
        }
        else if(yVector < -semiLati){   // la destination est beaucoup plus basse que le départ
            yVector += semiLati*2;
            virtualArrival.ry() = arrival.y()-height();
            virtualDeparture.ry() = height() + departure.y();
        }
        if(xVector > semiLongi){    // la destination est beaucoup plus à l'est que le départ
            xVector -= semiLongi*2;
            virtualArrival.rx() = arrival.x() - width();
            virtualDeparture.rx() = width()+departure.x();
        }
        else if(xVector < -semiLongi){  // la destination est beaucoup plus à l'ouest que le départ
            xVector += semiLongi*2;
            virtualArrival.rx() = width() + arrival.x();
            virtualDeparture.rx() = departure.x() - width();
        }
*/
        qreal angle = qAtan2(yVector, xVector); // l'angle du dirigeable en radian (du départ à l'arrivée virtuelle)
        if(angle<0) // on ne garde que des angles positifs
            angle += M_PI;  // de plus avec l'arctangente, l'angle alpha et alpha + Pi on la même valeur
        if(yVector < 0)    // on les différencie en rajoutant Pi lorsqu'on est plus au nord que le point de depart
            angle += M_PI;

        dirigeable.setAngle(angle);
    }

}


/**
 * @brief Carte::setArrival change la ville d'arrivée
 * @param inputArrival la nouvelle destination
 */
void Carte::setArrival(Dirigeable::ARRIVAL_CITIES inputArrival)
{
    if(inputArrival == Dirigeable::BERLIN)  // correspondance entre le choix de ville et ses coordonnées
        this->arrival = Berlin;
    else if(inputArrival == Dirigeable::NEWYORK)
        this->arrival = NewYork;
    else
        this->arrival = Vladivostok;

  //  virtualArrival = arrival;   // on met à jour les autres paramètres (tels que l'angle)
    updateValuesToPoint(arrival);
}

// fonction qui dessinne la Carte
void Carte::paintEvent(QPaintEvent *p) {

    QLabel::paintEvent(p);
    QPainter painter(this);
    QPen pen;
    pen.setColor(Qt::red);
    painter.setPen(pen);    // on rajoute 1 flèche du départ à l'arrivée
    drawArrow(&painter, departure, arrival);
 /*
    drawArrow(&painter, departure, virtualArrival);
    if(departure != virtualDeparture)   // si l'on passe de l'autre coté de la Terre, on dessine une 2e flèche
        drawArrow(&painter, virtualDeparture, arrival);
        */
    painter.end();

}

/**
 * @brief Carte::drawArrow dessine une flèche sur la carte
 * @param p l'objet QPainter qui dessine
 * @param from le départ de la flèche
 * @param to la destination de la flèche
 * @param size la taille de la pointe de la flèche en pixel
 * @param blanc_dist un espace de chaque coté de la flèche en pixel
 */
void Carte::drawArrow(QPainter *p, QPoint from, QPoint to, int size, int blanc_dist)
{

    QPoint points[3];   // les points de la pointe de la flèche
    float a = atan2(from.y()-to.y(), from.x()-to.x());  // calcul des coordonnées
    to.setX(to.x()+blanc_dist*cos(a));
    to.setY(to.y()+blanc_dist*sin(a));
    from.setX(from.x()-blanc_dist*cos(a));
    from.setY(from.y()-blanc_dist*sin(a));
    blanc_dist += size;
    a = atan2(from.y()-to.y(), from.x()-to.x());

    QPoint k(to.x()+size*cos(a), to.y()+size*sin(a));
    a += M_PI/2;
    size /= 2;
    QPoint i(k.x()+size*cos(a), k.y()+size*sin(a));
    QPoint j(k.x()-size*cos(a), k.y()-size*sin(a));


    p->drawLine(from, k);   // dessin de la ligne de la flèche
    p->drawLine(from + QPoint(0,1), k + QPoint(0,1));
    p->drawLine(from - QPoint(0,1), k - QPoint(0,1));
    p->drawLine(from - QPoint(1,0), k - QPoint(1,0));
    p->drawLine(from + QPoint(1,0), k + QPoint(1,0));
    points[0] = to;
    points[1] = i;
    points[2] = j;      // tracé de la pointe : couleur rouget et intérieur rempli
    p->setBrush(QBrush(Qt::red,Qt::SolidPattern));
    p->drawPolygon(points, 3);

}



// on change l'angle, puis on revient aux coordonnées cartésiennes
void Carte::changeAngle(qreal deltaRadian)
{
    qreal x = arrival.x() - departure.x();
    qreal y = departure.y() - arrival.y();
    qreal distance = qSqrt(x*x + y*y);

    qDebug()<<"point d'arrivée : "<<arrival;

    qreal phi = dirigeable.getAngle() + deltaRadian;
 //   phi += deltaRadian;
    x = distance * qCos(phi);
    y = distance * qSin(phi);
    QPoint newArrival(x + departure.x(), departure.y() -y);
    if(newArrival.x()<0)
        newArrival.setX(0);
    else if(newArrival.x() > width())
        newArrival.setX(width());
    if(newArrival.y()<0)
        newArrival.setY(0);
    else if(newArrival.y()>height())
        newArrival.setY(height());

    qDebug()<<"point calculé : "<<newArrival;
    updateValuesToPoint(newArrival);
    emit paintEvent(0);     // et on redessine la fenêtre
    update();
}
