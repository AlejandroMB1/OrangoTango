#include "producto.h"

Producto::Producto(){

	codigo = "";
	descripcion = "";
	alto = "";
	largo = "";
	ancho = "";
	color = ""; 
	precioVenta = "";
	costo = "";

}

Producto::Producto(QString micodigo,QString miDescripcion,QString miAlto,QString miAncho,QString miLargo,
                   QString miColor,QString miPrecio,QString miCosto){

    codigo = micodigo;
    descripcion = miDescripcion;
    alto = miAlto;
    largo = miLargo;
    ancho = miAncho;
    color = miColor;
    precioVenta = miPrecio;
    costo = miCosto;

}

QString Producto::getCodigo(){

    return codigo;
}

void Producto::setCodigo(QString miCodigo){

    codigo = miCodigo;
}


QString Producto::getDescripcion(){

    return descripcion;
}

void Producto::setDescripcion(QString miDescri){

	descripcion = miDescri;
}

QString Producto::getAlto(){

	return alto;
}

void Producto::setAlto(QString miAlto){

	alto = miAlto;
}

QString Producto::getLargo(){

	return largo;
}

void Producto::setLargo(QString miLargo){

	largo = miLargo;
}

QString Producto::getAncho(){

	return ancho;
}

void Producto::setAncho(QString miAncho){

	ancho = miAncho;
}

QString Producto::getColor(){

	return color;
}

void Producto::setColor(QString miColor){

	color = miColor;
}

QString Producto::getPrecioVenta(){

    return precioVenta;
}

void Producto::setPrecioVenta(QString miPrecio){

    precioVenta = miPrecio;
}


QString Producto::getCosto(){

	return costo;
}

void Producto::setCosto(QString miCosto){

	costo = miCosto;
}


void Producto::crearPoducto(){

    ofstream archivo("ProductosBD.txt", ios::app);

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    archivo << "======================================================"<<endl;
    archivo << "Codigo: " << (this->getCodigo().toStdString())<< endl;
    archivo << "Nombre: " << (this->getDescripcion().toStdString()) << endl;
    archivo << "Alto: " << (this->getAlto().toStdString()) << endl;
    archivo << "Largo: " << (this->getLargo().toStdString()) << endl;
    archivo << "Ancho: " << (this->getAncho().toStdString()) << endl;
    archivo << "Color: " << (this->getColor().toStdString()) << endl;
    archivo << "PreciodeVenta: " << (this->getPrecioVenta().toStdString()) << endl;
    archivo << "Costo: " << (this->getCosto().toStdString()) << endl;
    archivo.close();
}




























