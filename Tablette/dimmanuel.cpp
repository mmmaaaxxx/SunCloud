#include "dimmanuel.h"
#include "ui_dimmanuel.h"
#include "clienttcp.h"

DimManuel::DimManuel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DimManuel)
{
    ui->setupUi(this);
    QDoubleValidator* validator = new QDoubleValidator();
    validator->setRange(0,9999,2);
    ui->lineEdit_parametre1->setValidator(validator);
    ui->lineEdit_parametre2->setValidator(validator);
    ui->lineEdit_parametre3->setValidator(validator);
    ui->lineEdit_parametre4->setValidator(validator);
    ui->lineEdit_parametre5->setValidator(validator);
    ui->lineEdit_parametre6->setValidator(validator);
}

DimManuel::~DimManuel()
{
    delete ui;
}

void DimManuel::on_pushButton_Quitter_clicked()
{
    qApp->quit();
}

void DimManuel::on_pushButton_clicked()
{
    connexion();
    envoiparametres();
    window_cmd=new commande;
    window_cmd->show();
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
    //pseudo=ui->lineEdit_pseudo->text().toStdString().c_str();
    parametre1=ui->lineEdit_parametre1->text();
    return parametre1;
}
/**
 * @brief DimManuel::getParametre2
 * @return Parametre2
 */
QString DimManuel::getParametre2()
{
    parametre2=ui->lineEdit_parametre2->text();
    return parametre2;
}
/**
 * @brief DimManuel::getParametre3
 * @return Parametre3
 */
QString DimManuel::getParametre3()
{
    parametre3=ui->lineEdit_parametre3->text();
    return parametre3;
}

/**
 * @brief DimManuel::getParametre4
 * @return Parametre4
 */
QString DimManuel::getParametre4()
{

    parametre4=ui->lineEdit_parametre4->text();
    return parametre4;
}


/**
 * @brief DimManuel::getParametre5
 * @return Parametre5
 */
QString DimManuel::getParametre5()
{

    parametre5=ui->lineEdit_parametre5->text();
    return parametre5;
}



/**
 * @brief DimManuel::getParametre6
 * @return Parametre6
 */
QString DimManuel::getParametre6()
{

    parametre6=ui->lineEdit_parametre6->text();
    return parametre6;
}


void DimManuel::connexion()
{
    ClientDimension.start("192.168.173.1",9001);
}
