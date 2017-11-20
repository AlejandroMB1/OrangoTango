#include "mainempresa.h"
#include "ui_mainempresa.h"
#include "agregarproducto.h"


MainEmpresa::MainEmpresa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainEmpresa)
{
    ui->setupUi(this);
}

MainEmpresa::~MainEmpresa()
{
    delete ui;
}



void MainEmpresa::on_BotonAnadirP_clicked(){

    AgregarProducto *ventana = new AgregarProducto();
    ventana->show();

}

void MainEmpresa::on_BotonEliminarP_2_clicked(){

    EliminarProducto *ventana = new EliminarProducto();
    ventana->show();

}
