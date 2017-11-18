#include "ventcatalogo.h"
#include "ui_ventcatalogo.h"
#include <QString>

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
    string cod = "0115";
    string descripcion= "meson";
    string alto = "15cm";
    string ancho = "15cm";
    string color = "marron";
    string precio = "300.000";
    string costo = "350.000";
    QString codigo = QString("1000");
    /*QString descript = QString::fromStdString(descripcion);
    QString alt = QString::fromStdString(alto);
    QString anch = QString::fromStdString(ancho);
    QString col = QString::fromStdString(color);
    QString prec = QString::fromStdString(precio);
    QString cost = QString::fromStdString(costo);*/
    /*Producto *meson = new Producto();
    meson->setCodigo(cod);*/
    /*meson->setDescripcion(descript);
    meson->setAlto(alt);
    meson->setAncho(anch);
    meson->setColor(col);
    meson->setPrecioVenta(prec);
    meson->setCosto(cost);
    */
}

