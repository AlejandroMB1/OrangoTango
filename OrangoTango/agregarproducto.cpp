#include "agregarproducto.h"
#include "ui_agregarproducto.h"
#include <producto.h>

AgregarProducto::AgregarProducto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AgregarProducto)
{
    ui->setupUi(this);

    QRegExp expreCodigo("((?:[0-9]{1,10}))");
    ui->lineCodigo->setValidator(new QRegExpValidator(expreCodigo,this));

    QRegExp expreDescri("((?:[a-zA-Záéíóú]{3,20}))");
    ui->lineDescri->setValidator(new QRegExpValidator(expreDescri,this));

    QRegExp expreAlto("((?:[0-9]{1,6}))");
    ui->lineAlto->setValidator(new QRegExpValidator(expreAlto,this));

    QRegExp expreLargo("((?:[0-9]{1,6}))");
    ui->lineLargo->setValidator(new QRegExpValidator(expreLargo,this));

    QRegExp expreAncho("((?:[0-9]{1,6}))");
    ui->lineAncho->setValidator(new QRegExpValidator(expreAncho,this));

    QRegExp expreColor("((?:[a-zA-Záéíóú]{3,20}))");
    ui->lineColor->setValidator(new QRegExpValidator(expreColor,this));

    QRegExp exprePrecio("((?:[0-9]{1,8}))");
    ui->linePrecio->setValidator(new QRegExpValidator(exprePrecio,this));

    QRegExp expreCosto("((?:[0-9]{1,8}))");
    ui->lineCosto->setValidator(new QRegExpValidator(expreCosto,this));


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
    producto->crearPoducto();
    QMessageBox::information(this,"Información","Producto Creado Satisfactoriamente!!!");
    AgregarProducto::close();
}
//
