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

void VentCatalogo::on_commandLinkButton_clicked()
{
    Producto *cocina = new Producto(this);
    carro->agregarProducto(cocina);
}
