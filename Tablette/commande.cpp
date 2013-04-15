#include "commande.h"
#include "ui_commande.h"
#include "clienttcp.h"
#include <QApplication>

commande::commande(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::commande)
{
    ui->setupUi(this);


}

commande::~commande()
{
    delete ui;
}

void commande::on_pushButton_camera1_clicked()
{
   connexion();
   number=1;
   ClientCamera.envoieparametre(number);
}

void commande::on_pushButton_camera2_clicked()
{
   connexion();
   number=2;
   ClientCamera.envoieparametre(number);
}

void commande::on_pushButton_camera3_clicked()
{
   connexion();
   number=3;
   ClientCamera.envoieparametre(number);
}

void commande::on_pushButton_camera4_clicked()
{
   connexion();
   number=4;
   ClientCamera.envoieparametre(number);
}

void commande::connexion()
{
    ClientCamera.start("192.168.173.1",5501);
}
