#include "mueblesbano.h"
#include "ui_mueblesbano.h"

MueblesBano::MueblesBano(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MueblesBano)
{
    ui->setupUi(this);
}

MueblesBano::~MueblesBano()
{
    delete ui;
}
