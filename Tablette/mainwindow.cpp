#include "mainwindow.h"
#include "init.h"
#include "ui_mainwindow.h"

#include <QCoreApplication>
#include <QScrollArea>
#include <QMessageBox>
#include <QString>
#include <QSpacerItem>
#include <qdebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette pal = ui->comboBox_3->palette();
    pal.setColor(QPalette::Base, pal.color(QPalette::Window));
    ui->comboBox_3->setPalette(pal);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_3_currentIndexChanged(int index)
{
    switch (index) {

        case 0: //printemps
        {
            ui->comboBox_4->clear();
            ui->comboBox_4->addItem("200t");
            ui->comboBox_4->addItem("180t");
            ui->comboBox_4->addItem("160t");
            ui->label_saison->setPixmap(QPixmap(":/images/printemps.png"));
            break;
        }
        case 1: //été
        {
            ui->comboBox_4->clear();
            ui->comboBox_4->addItem("160t");
            ui->comboBox_4->addItem("140t");
            ui->comboBox_4->addItem("120t");
            ui->label_saison->setPixmap(QPixmap(":/images/ete.png"));
            break;
        }
        case 2: //automne
        {
            ui->comboBox_4->clear();
            ui->comboBox_4->addItem("120t");
            ui->comboBox_4->addItem("100t");
            ui->comboBox_4->addItem("80t");
            ui->label_saison->setPixmap(QPixmap(":/images/automne.png"));
            break;
        }
        case 3: //hiver
        {
            ui->comboBox_4->clear();
            ui->comboBox_4->addItem("80t");
            ui->comboBox_4->addItem("60t");
            ui->comboBox_4->addItem("40t");
            ui->label_saison->setPixmap(QPixmap(":/images/hiver.png"));
            break;
        }

    }
}

void MainWindow::on_pushButton_DimManu_clicked()
{
    window_manu =new DimManuel;
    window_manu->show();
    hide();
}


void MainWindow::on_pushButton_DimAuto_clicked()
{
    connexion();
    envoipropriete();
}





void MainWindow::on_pushButton_Quitter_clicked()
{
    qApp->quit();
}



void MainWindow::connexion()
{
    ClientAuto.start("192.168.173.1",9001);
}





void MainWindow:: envoipropriete()
{
    QByteArray buffer ="";
    QString propriete;
    propriete += getDepart()+"\\"+getArrivee()+"\\"+getSaison()+"\\"+getCharge()+"\\"+"2";
    qDebug() << "propriete : "<<propriete;
    buffer.append(propriete);
    qDebug() << "buffer : "<<buffer<<endl;
    ClientAuto.envoieparametre(buffer);
}


QString MainWindow::getDepart()
{

    depart=ui->comboBox->currentText();
    return depart;
}


QString MainWindow::getArrivee()
{

    arrivee=ui->comboBox_2->currentText();
    return arrivee;
}

QString MainWindow::getSaison()
{

    saison=ui->comboBox_3->currentText();
    return saison;
}

QString MainWindow::getCharge()
{
    charge=ui->comboBox_4->currentText();
    return charge;
}
