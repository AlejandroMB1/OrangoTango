#include "mueblessala.h"
#include "ui_mueblessala.h"

MueblesSala::MueblesSala(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MueblesSala)
{
    ui->setupUi(this);
}

MueblesSala::~MueblesSala()
{
    delete ui;
}
