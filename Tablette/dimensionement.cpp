#include "dimensionement.h"
#include "ui_dimensionement.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clienttcp.h"
#include <QApplication>


dimensionement::dimensionement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dimensionement)
{
    ui->setupUi(this);
    connect(ui->lineEdit_pseudo, SIGNAL(textChanged(QString)),this, SLOT(getPseudo()));
    connect(ui->lineEdit_simulation, SIGNAL(textChanged(QString)),this, SLOT(getSimulation()));
    connect(ui->lineEdit_societe, SIGNAL(textChanged(QString)),this, SLOT(getSociete()));
}

dimensionement::~dimensionement()
{
    delete ui;
}

void dimensionement::on_pushButton_clicked()
{
    connexion();
    envoipropriete();
    window=new MainWindow;
    window->show();
    hide();

}

void dimensionement::envoipropriete()
{
    QByteArray buffer ="";
    QString info;
    info+=pseudo+"\\"+simulation+"\\"+societe+"\\"+"0" ;
   // qDebug() << "Info1 : "<< info;
    buffer.append(info);
    // qDebug() << "buffer : "<<buffer<<endl;
    ClientPropriete.envoieparametre(buffer);
}

void dimensionement::on_pushButton_2_clicked()
{
    qApp->quit();
}

/**
 * @brief dimensionement::getPseudo() indique le pseudo de l'utilisateur
 * @return le pseudo
 */
QString dimensionement::getPseudo()
{
    //pseudo=ui->lineEdit_pseudo->text().toStdString().c_str();
    pseudo=ui->lineEdit_pseudo->text();
    qDebug() << "pseudo : "<< pseudo;
    return pseudo;
}

/**
 * @brief dimensionement::getSociete() indique la societe de l'utilisateur
 * @return le nom de la societe
 */
QString dimensionement::getSociete()
{

    societe=ui->lineEdit_societe->text().toStdString().c_str();
    return societe;
}

/**
 * @brief dimensionement::getSimulation() indique le nom de la simulation
 * @return le nom de la simulation
 */
QString dimensionement::getSimulation()
{
    simulation=ui->lineEdit_simulation->text().toStdString().c_str();
    return  simulation;
}


void dimensionement::connexion()
{
    ClientPropriete.start("192.168.173.1",9001);
}




