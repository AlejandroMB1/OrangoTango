#include "agregarproducto.h"
#include "ui_agregarproducto.h"
#include <producto.h>

AgregarProducto::AgregarProducto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AgregarProducto)
{
    ui->setupUi(this);
}

AgregarProducto::~AgregarProducto()
{
    delete ui;
}


void AgregarProducto::on_BotonAgregarProducto_clicked(){

    Producto *producto = new Producto();
    //Obtener texto de los QlineEdit(espacios en blanco):
    producto->setCodigo(ui -> lineCodigo->text());
    producto->setDescripcion(ui -> lineDescri->text());
    producto->setAlto(ui -> lineAlto->text());
    producto->setLargo(ui -> lineLargo->text());
    producto->setAncho(ui -> lineAncho->text());
    producto->setColor(ui -> lineColor->text());
    producto->setPrecioVenta(ui -> linePrecio->text());
    producto->setCosto(ui -> lineCosto->text());

     QMessageBox::information(this,"Información","Producto Creado Satisfactoriamente!!!");
     AgregarProducto::close();
}
