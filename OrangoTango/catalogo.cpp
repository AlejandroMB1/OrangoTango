#include "catalogo.h"
#include "agregarproducto.h"

Catalogo::Catalogo()
{

}

Producto* Catalogo::obtenerProductos(){

    int p = productos.size();
    int i = 0;

    while(i<p){
        return productos[i];
        i++;
    }
    return 0;

}

void modificarProducto(){

    AgregarProducto *modificar = new AgregarProducto();
    modificar->show();
}
