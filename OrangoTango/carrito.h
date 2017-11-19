#ifndef CARRITO_H
#define CARRITO_H

#include <QVector>
#include <QString>
#include <fstream>
#include <iostream>
#include <stdlib.h> //std::exit
#include "producto.h"


using namespace std;


class Carrito{

    public:

    QVector <Producto*> productos;

    public:
        Carrito();
        ~Carrito();

        Producto* mostrarResumen();

        void borrarProducto();

        void agregarProducto(Producto*);

        void pagarProductos();





};

#endif // CARRITO_H
