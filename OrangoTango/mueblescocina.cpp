#include "mueblescocina.h"
#include "ui_mueblescocina.h"

MueblesCocina::MueblesCocina(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MueblesCocina)
{
    ui->setupUi(this);

}
/*
MueblesCocina::~MueblesCocina()
{
    delete ui;
}

void MueblesCocina::on_commandLinkButton_clicked(Carrito *carro)
{
    Producto *mueble = new Producto(this);
    carro->agregarProducto(mueble);
}

void MueblesCocina::on_commandLinkButton_2_clicked(Carrito *carro)
{
    Producto *mueble = new Producto(this);
    carro->agregarProducto(mueble);
}

void MueblesCocina::on_commandLinkButton_3_clicked(Carrito *carro)
{
    Producto *mueble = new Producto(this);
    carro->agregarProducto(mueble);
}

void MueblesCocina::on_commandLinkButton_4_clicked(Carrito *carro)
{
    Producto *mueble = new Producto(this);
    carro->agregarProducto(mueble);
}
*/
