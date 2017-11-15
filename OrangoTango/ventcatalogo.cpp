#include "ventcatalogo.h"
#include "ui_ventcatalogo.h"

VentCatalogo::VentCatalogo(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::VentCatalogo)
{
    ui->setupUi(this);
}

VentCatalogo::~VentCatalogo()
{
    delete ui;
}
