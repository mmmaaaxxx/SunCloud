#ifndef DIMENSIONEMENT_H
#define DIMENSIONEMENT_H

#include <QWidget>
#include <mainwindow.h>
#include "ui_mainwindow.h"
#include <QtNetwork>
#include <QTcpSocket>
#include <dirigeable.h>

namespace Ui {
class dimensionement;
}

class dimensionement : public QWidget
{
    Q_OBJECT
    
public:
    explicit dimensionement(QWidget *parent = 0);
    ~dimensionement();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::dimensionement *ui;

    //MainWindow *window;

     /** @brief dirigeable référence sur les paramètres du dirigeable **/
    //Dirigeable dirigeable;

    void envoiparam();
    QTcpSocket *tcpSocket;
};

#endif // DIMENSIONEMENT_H
