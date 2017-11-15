#include "facturar.h"
#include "ui_facturar.h"
#include "factura.h"

Facturar::Facturar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Facturar)
{
    ui->setupUi(this);
    QStringList titulos;
    ui->tablaProductos->setColumnCount(5);
    titulos<<"Codigo"<<"Producto"<<"Cantidad"<<"Precio Unidad"<<"Precio Total";
    ui->tablaProductos->setHorizontalHeaderLabels(titulos);

}

Facturar::~Facturar()
{
    delete ui;
}
