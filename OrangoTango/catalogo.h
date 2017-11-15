#ifndef CATALOGO_H
#define CATALOGO_H

#include <QVector>
#include <QString>
#include <fstream>
#include <iostream>
#include <stdlib.h> //std::exit
#include "producto.h"


using namespace std;


class Catalogo{

    private:

    QVector <Producto*> productos;


    public:
        Catalogo();
        ~Catalogo();

        Producto* obtenerProductos();

        void modificarProducto();
};

#endif // CATALOGO_H
