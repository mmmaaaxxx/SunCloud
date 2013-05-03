#include "assemblage.h"
#include "ui_assemblage.h"

Assemblage::Assemblage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Assemblage)
{
    ui->setupUi(this);
}

Assemblage::~Assemblage()
{
    delete ui;
}

void Assemblage::setNextLayer(QWidget* w){
    nextLayer = w;
}

void Assemblage::setPreviousLayer(QWidget* w){
    previousLayer = w;
}

void Assemblage::on_pushButton_5_clicked()
{
    previousLayer->showMaximized();
    hide();
}

void Assemblage::on_pushButton_4_clicked()
{
    previousLayer->showMaximized();
    hide();
}
