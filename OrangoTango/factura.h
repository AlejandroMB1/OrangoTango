#ifndef FACTURA_H
#define FACTURA_H


#include "producto.h"
#include <QVector>
#include <QString>
#include <fstream>
#include <iostream>
#include <stdlib.h> //std::exit

using namespace std;

class Factura{

    private:

        QString empresa;
        QString nitEmpresa;
        QString telEmpresa;
        QString cliente;
        QString numeroFactura;
        QString fechaFactura;
        QVector<Producto*> items;
        QString precioItems;
        QString cantidadItems;
        QString totalPagar;


    public:
        Factura();
        ~Factura();

        QString getEmpresa();
        void setEmpresa(QString);

        QString getNitEmpresa();
        void setNitEmpresa(QString);

        QString getTelEmpresa();
        void setTelEmpresa(QString);

        QString getCliente();
        void setCliente(QString);

        QString getNumeroFactura();
        void setNumeroFactura(QString);

        QString getFechaFactura();
        void setFechaFactura(QString);

        Producto* getItems();
        void setItems(Producto*);

        QString getPrecioItems();
        void setPrecioItems(QString);

        QString getCantidadItems();
        void setCantidadItems(QString);

        QString getTotalPagar();
        void setTotalPagar(QString);

        void CrearFactura();
};





#endif // FACTURA_H
