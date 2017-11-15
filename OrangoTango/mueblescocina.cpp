#include "mueblescocina.h"
#include "ui_mueblescocina.h"

MueblesCocina::MueblesCocina(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MueblesCocina)
{
    ui->setupUi(this);
}

MueblesCocina::~MueblesCocina()
{
    delete ui;
}
