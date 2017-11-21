#include "cuenta.h"
#include "ui_cuenta.h"
#include "ventcatalogo.h"
#include "mainwindow.h"


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

void cuenta::on_IralCatalogo_clicked()
{
    VentCatalogo *ventana = new VentCatalogo();
    ventana->show();
}

void cuenta::on_cerrar_clicked()
{
    MainWindow *ventana = new MainWindow();
    ventana->show();
}
