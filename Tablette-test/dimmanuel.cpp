#include "dimmanuel.h"
#include "ui_dimmanuel.h"
#include "ui_form.h"
#include <carte.h>

#include "mainwindow.h"

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

void DimManuel::on_pushButton_clicked(){
    //form = new Form(this,this->map);
    //parent()->form->show();
    hide();
}

void DimManuel::on_pushButton_Retour_clicked()
{
    minimumSize();
}


