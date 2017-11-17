#include "cuenta.h"
#include "ui_cuenta.h"
#include "ventcatalogo.h"


cuenta::cuenta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cuenta)
{
    ui->setupUi(this);
}

cuenta::~cuenta()
{
    delete ui;
}


void cuenta::on_pushButton_4_clicked()
{
    VentCatalogo *ventana = new VentCatalogo(this);
    /*ventana->setModal(true);*/
    ventana->show();
}
