#include "dimensionement.h"
#include "ui_dimensionement.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>


dimensionement::dimensionement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dimensionement)
{
    ui->setupUi(this);
    //dirigeable = new Dirigeable;
}

dimensionement::~dimensionement()
{
    delete ui;
}

void dimensionement::on_pushButton_clicked()
{
    envoiparam();
    //window = new MainWindow(&dirigeable);
    //parent->window->show();
    hide();

}

void dimensionement::envoiparam()
{
//    QHostAddress address;
//    address=("127.0.0.1");
//    qDebug() <<address;
//    qDebug() << "...connecting";
//    tcpSocket->connectToHost(address,9998);
//    char buffer[32] = "";
//  // envoi des informations dans l'ordre : l'angle h, l'ange v, l'angle de la direction
//    sprintf(buffer,"%d %d %d", 1000, 90, 180);
//    //sprintf(buffer,"%d %d %d", window->getH_c(), window->getV_t(), window->getDirection());
//    qDebug() << "envoi donnees : "<<buffer<<endl;
//   tcpSocket->write(buffer, strlen(buffer)+1);
//   tcpSocket->close();
}

void dimensionement::on_pushButton_2_clicked()
{
    qApp->quit();
}






