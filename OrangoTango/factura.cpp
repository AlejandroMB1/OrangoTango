#include "factura.h"


Factura::Factura(){


        empresa = "";
        nitEmpresa = "";
        telEmpresa = "";
        cliente = "";
        numeroFactura = "";
        fechaFactura = "";
        precioItems = "";
        cantidadItems = "";
        totalPagar = "";

}

QString Factura::getEmpresa(){

    return empresa;
}

void Factura::setEmpresa(QString miEmpresa){

    empresa = miEmpresa;
}

QString Factura::getNitEmpresa(){

    return nitEmpresa;
}

void Factura::setNitEmpresa(QString miNit){

    nitEmpresa = miNit;
}

QString Factura::getTelEmpresa(){

    return telEmpresa;
}

void Factura::setTelEmpresa(QString miTel){

    telEmpresa = miTel;
}

QString Factura::getCliente(){

    return cliente;
}

void Factura::setCliente(QString miCliente){

    cliente = miCliente;
}

QString Factura::getNumeroFactura(){

    return numeroFactura;
}

void Factura::setNumeroFactura(QString miNumero){

    numeroFactura = miNumero;
}

QString Factura::getFechaFactura(){

    return fechaFactura;
}

void Factura::setFechaFactura(QString miFecha){

    fechaFactura = miFecha;
}

Producto* Factura::getItems(){

    int p = items.size();
    int i = 0;

    while(i<p){
        return items[i];
        i++;
    }
    return 0;
}

void Factura::setItems(Producto *miItem){

    items.append(miItem);
}

QString Factura::getPrecioItems(){

    return precioItems;
}

void Factura::setPrecioItems(QString miPrecio){

    precioItems = miPrecio;
}

QString Factura::getCantidadItems(){

    return cantidadItems;
}

void Factura::setCantidadItems(QString miCantidad){

    cantidadItems = miCantidad;
}

QString Factura::getTotalPagar(){

    return totalPagar;
}

void Factura::setTotalPagar(QString miTotal){

    totalPagar = miTotal;
}

















