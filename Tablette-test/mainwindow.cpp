#include "mainwindow.h"
#include "init.h"
#include "ui_mainwindow.h"

#include <QCoreApplication>
#include <QScrollArea>
#include <QMessageBox>
#include <QString>
#include <QSpacerItem>
#include <qdebug>
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPalette pal = ui->comboBox_3->palette();
    pal.setColor(QPalette::Base, pal.color(QPalette::Window));
    ui->comboBox_3->setPalette(pal);

    // Creation de la carte et incorporation dans l'interface
    map = new Carte(ui->centralWidget);
    map->setObjectName(QString::fromUtf8("Map"));
    map->setPixmap(QPixmap(QString::fromUtf8(":/images/carte_small1.png")));
    map->setGeometry(0,0, 800, 400);
    map->setScaledContents(true);
    ui->verticalLayout_4->addWidget(map);

    // Initialisation du point d'arrivée: le départ est initialisé dans le constructeur de "carte" dans carte.cpp
    map->setArrival(Carte::NewYork);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    //on change le point d'arrivée
    switch (index) {

    case 0: //New-York
    {
        map->setArrival(Carte::NewYork);
        map->updateValuesToPoint(Carte::NewYork);
        break;
    }
    case 1: //Vladivostok
    {
        map->setArrival(Carte::Vladivostok);
        map->updateValuesToPoint(Carte::Vladivostok);
        break;
    }
    }

    // On update la carte
    map->paintEvent(0);
    map->update();
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
//    window_manu = new DimManuel(this,this->map);
//    window_manu->show();

    //parent()->dimManuel.show();
    hide();
}


void MainWindow::on_pushButton_Quitter_clicked()
{
    qApp->quit();
}












