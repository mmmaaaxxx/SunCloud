#include "dimmanuel.h"
#include "ui_dimmanuel.h"
#include "ui_form.h"
#include <carte.h>

#include "mainwindow.h"
//#include <QGLWidget>

DimManuel::DimManuel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DimManuel)
{
    ui->setupUi(this);
}

DimManuel::~DimManuel()
{
    delete ui;
}

void DimManuel::on_pushButton_Retour_clicked()
{
    previousLayer->showMaximized();
    hide();
}

void DimManuel::on_pushButton_clicked(){
    connexion();
    envoiparametres();
    nextLayer->showMaximized();
    hide();
}

void DimManuel::envoiparametres()
{
    QByteArray buffer ="";
    QString infoparam;
    infoparam+=getParametre1()+"\\"+getParametre2()+"\\"+getParametre3()+"\\"+getParametre4()+"\\"+getParametre5()+"\\"+getParametre6()+"\\"+"1";
 //   infoparam+=parametre1+"\\"+parametre2+"\\"+parametre3+"\\"+parametre4+"\\"+parametre5+"\\"+parametre6+"\\"+"1";
    qDebug() << "Infoparam : "<<infoparam;
    buffer.append(infoparam);
    qDebug() << "buffer : "<<buffer<<endl;
    ClientDimension.envoieparametre(buffer);
}

/**
 * @brief DimManuel::getParametre1
 * @return Parametre1
 */
QString DimManuel::getParametre1()
{
    parametre1=ui->label_parametre1->text();
    return parametre1;
}
/**
 * @brief DimManuel::getParametre2
 * @return Parametre2
 */
QString DimManuel::getParametre2()
{
    parametre2=ui->label_parametre2->text();
    return parametre2;
}
/**
 * @brief DimManuel::getParametre3
 * @return Parametre3
 */
QString DimManuel::getParametre3()
{
    parametre3=ui->label_parametre3->text();
    return parametre3;
}

/**
 * @brief DimManuel::getParametre4
 * @return Parametre4
 */
QString DimManuel::getParametre4()
{
    parametre4=ui->label_parametre4->text();
    return parametre4;
}


/**
 * @brief DimManuel::getParametre5
 * @return Parametre5
 */
QString DimManuel::getParametre5()
{
    parametre5=ui->label_parametre5->text();
    return parametre5;
}

/**
 * @brief DimManuel::getParametre6
 * @return Parametre6
 */
QString DimManuel::getParametre6()
{
    parametre6=ui->label_parametre6->text();
    return parametre6;
}


void DimManuel::connexion()
{
    ClientDimension.start("192.168.173.1",9001);
}

void DimManuel::on_horizontalSlider_valueChanged(int value)
{
   ui->label_parametre1->setText(QString::number(value));
}

void DimManuel::on_horizontalSlider_2_valueChanged(int value)
{
   ui->label_parametre2->setText(QString::number(value));
}

void DimManuel::on_horizontalSlider_3_valueChanged(int value)
{
   ui->label_parametre3->setText(QString::number(value));
}

void DimManuel::on_horizontalSlider_4_valueChanged(int value)
{
   ui->label_parametre4->setText(QString::number(value));
}

void DimManuel::on_horizontalSlider_5_valueChanged(int value)
{
   ui->label_parametre5->setText(QString::number(value));
}

void DimManuel::on_horizontalSlider_6_valueChanged(int value)
{
   ui->label_parametre6->setText(QString::number(value));
}

void DimManuel::setNextLayer(QWidget* w){
    nextLayer = w;
}

void DimManuel::setPreviousLayer(QWidget* w){
    previousLayer = w;
}
