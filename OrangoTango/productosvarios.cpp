#include "productosvarios.h"
#include "ui_productosvarios.h"

ProductosVarios::ProductosVarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductosVarios)
{
    ui->setupUi(this);
}

ProductosVarios::~ProductosVarios()
{
    delete ui;
}
/*
void ProductosVarios::on_commandLinkButton_clicked(Carrito *carro)
{
    Producto *mueble = new Producto(this);
    carro->agregarProducto(mueble);
}

void ProductosVarios::on_commandLinkButton_2_clicked(Carrito *carro)
{
    Producto *mueble = new Producto(this);
    carro->agregarProducto(mueble);
}
*/
