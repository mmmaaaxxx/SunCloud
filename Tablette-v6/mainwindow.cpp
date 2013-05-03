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

    // Creation de la carte et incorporation dans l'interface
    //    map = new Carte(ui->centralWidget);
    //    map->setObjectName(QString::fromUtf8("Map"));
    //    map->setPixmap(QPixmap(QString::fromUtf8(":/images/carte_small1.png")));
    //    map->setGeometry(0,0, 800, 400);
    //    map->setScaledContents(true);
    //    ui->verticalLayout_4->addWidget(map);

    viewer_video = new QmlApplicationViewer;
    viewer_video->setMainQmlFile(QLatin1String("qml/Tablette-v6/BOURGET.qml"));
    ui->verticalLayout_4->addWidget(viewer_video);

    ui->radioButton_Bourget->setAutoFillBackground(false);
    // Initialisation du point d'arrivée: le départ est initialisé dans le constructeur de "carte" dans carte.cpp
    //map->setArrival(Carte::NewYork);

    //On initialise les valeurs min, max et current du slider (valeurs de départ = valeurs pour le printemps)
    //Ainsi que l'image du dirigeable et la charge totale
    ui->horizontalSlider->setRange(160,200);
    ui->horizontalSlider->setValue(180);
    ui->lcdNumber_charge->display(ui->horizontalSlider->value());
    ui->label_dirigeable->setPixmap(QPixmap(QString::fromUtf8(":/images/images/blimp-moyen.png")));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_DimManu_clicked()
{
    nextlayer2->showMaximized();
    hide();
}


void MainWindow::on_pushButton_DimAuto_clicked()
{
    connexion();
    envoipropriete();

    nextlayer1->showMaximized();
    hide();
}

void MainWindow::on_pushButton_Retour_clicked()
{
    previouslayer->showMaximized();
    hide();
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

    //    depart=ui->comboBox->currentText();
    return depart;
}


QString MainWindow::getArrivee()
{

    //    arrivee=ui->comboBox_2->currentText();
    return arrivee;
}

QString MainWindow::getSaison()
{

    //    saison=ui->comboBox_3->currentText();
    return saison;
}

QString MainWindow::getCharge()
{
    charge = ui->horizontalSlider->value();
    return charge;
}

void MainWindow::on_radioButton_Printemps_clicked(bool)
{
    ui->horizontalSlider->setRange(160,200); //On change l'intervale de valeurs
    ui->horizontalSlider->setValue(180);// On met le slide à la valeur intermédiaire par défaut
    ui->label_saison->setPixmap(QPixmap(QString::fromUtf8(":/images/images/printemps.png")));
}

void MainWindow::on_radioButton_Ete_clicked(bool)
{
    ui->horizontalSlider->setRange(120,160);
    ui->horizontalSlider->setValue(140);
    ui->label_saison->setPixmap(QPixmap(QString::fromUtf8(":/images/images/ete.png")));
}

void MainWindow::on_radioButton_Automne_clicked(bool)
{
    ui->horizontalSlider->setRange(80,120);
    ui->horizontalSlider->setValue(100);
    ui->label_saison->setPixmap(QPixmap(QString::fromUtf8(":/images/images/automne.png")));
}

void MainWindow::on_radioButton_Hiver_clicked(bool)
{
    ui->horizontalSlider->setRange(40,80);
    ui->horizontalSlider->setValue(60);
    ui->label_saison->setPixmap(QPixmap(QString::fromUtf8(":/images/images/hiver.png")));
}


void MainWindow::on_radioButton_Bourget_clicked(bool)
{
    viewer_video->setMainQmlFile(QLatin1String("qml/Tablette-v6/BOURGET.qml"));
    viewer_video->showExpanded();
    ui->verticalLayout_4->addWidget(viewer_video);
}

void MainWindow::on_radioButton_NY_clicked(bool)
{
    //    map->setArrival(Carte::NewYork);
    //    map->updateValuesToPoint(Carte::NewYork);
    //    map->paintEvent(0);
    //    map->update();

    viewer_video->setMainQmlFile(QLatin1String("qml/Tablette-v6/NY.qml"));
    viewer_video->showExpanded();
    ui->verticalLayout_4->addWidget(viewer_video);
}

void MainWindow::on_radioButton_Vladivostock_clicked(bool)
{    

    //    map->setArrival(Carte::Vladivostok);
    //    map->updateValuesToPoint(Carte::Vladivostok);
    //    map->paintEvent(0);
    //    map->update();
    viewer_video->setMainQmlFile(QLatin1String("qml/Tablette-v6/VLA.qml"));
    viewer_video->showExpanded();
    ui->verticalLayout_4->addWidget(viewer_video);
}

void MainWindow::setNextLayers(QWidget* w1,QWidget* w2){
    nextlayer1 = w1;
    nextlayer2 = w2;
}

void MainWindow::setPreviousLayer(QWidget* w){
    previouslayer = w;
}

void MainWindow::on_horizontalSlider_valueChanged()
{
    int v = ui->horizontalSlider->value();
    int max = ui->horizontalSlider->maximum();
    int min = ui->horizontalSlider->minimum();

    if (v == max || v == min || v == min+20)
    {
        ui->lcdNumber_charge->display(ui->horizontalSlider->value());
        setDronepicture(max,min,v);
    }
}

void MainWindow::on_horizontalSlider_sliderReleased()
{
    int v = ui->horizontalSlider->value();
    int max = ui->horizontalSlider->maximum();
    int min = ui->horizontalSlider->minimum();

    if(v <= min +10) ui->horizontalSlider->setValue(min);
    else if(min+10 < v && v <= min+30) ui->horizontalSlider->setValue(min+20);
    else ui->horizontalSlider->setValue(max);

    ui->lcdNumber_charge->display(ui->horizontalSlider->value());
    setDronepicture(max,min,v);
}

void MainWindow::setDronepicture(int max, int min, int v)
{
    if (v == max)
        ui->label_dirigeable->setPixmap(QPixmap(QString::fromUtf8(":/images/images/blimp-grand.png")));
    else if(v == min +20)
        ui->label_dirigeable->setPixmap(QPixmap(QString::fromUtf8(":/images/images/blimp-moyen.png")));
    else if(v == min)
        ui->label_dirigeable->setPixmap(QPixmap(QString::fromUtf8(":/images/images/blimp-petit.png")));
}

