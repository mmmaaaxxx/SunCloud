#include "init.h"
#include "ui_init.h"
#include "dimensionement.h"
#include "ui_dimensionement.h"

#include "dirigeable.h"
init::init(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::init)
{
    ui->setupUi(this);
}

init::~init()
{
    delete ui;
}

void init::on_pushButton_clicked()
{
    nextLayer->showMaximized();
    hide();
}

void init::setNextLayer(QWidget* w){
    nextLayer = w;
}
