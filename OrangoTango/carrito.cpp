#include "carrito.h"


Producto* Carrito::mostrarResumen(){

    int p = productos.size();
    int i = 0;

    while(i<p){
        return productos[i];
        i++;
    }
    return 0;
}

void Carrito::borrarProducto(){

    if(productos.isEmpty() != true){
        productos.removeLast();
    }

}

void Carrito::agregarProducto(Producto *miProducto){

    productos.append(miProducto);
}


void Carrito::pagarProductos(){}
