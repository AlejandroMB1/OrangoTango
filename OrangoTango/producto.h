#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <QString>
#include <fstream>
#include <iostream>
#include <stdlib.h> //std::exit

using namespace std;

class Producto{

	private:

		QString codigo;
		QString descripcion;
		QString alto;
		QString largo;
		QString ancho;
		QString color;
		QString precioVenta;
		QString costo;
	
	public:
		Producto();
        ~Producto();

		QString getCodigo();
        void setCodigo(QString);

		QString getDescripcion();
        void setDescripcion(QString);

		QString getAlto();
        void setAlto(QString);

		QString getLargo();
        void setLargo(QString);

		QString getAncho();
        void setAncho(QString);

		QString getColor();
        void setColor(QString);

		QString getPrecioVenta();
        void setPrecioVenta(QString);
		
		QString getCosto();
        void setCosto(QString );

        void crearPoducto();


};

#endif // PRODUCTO_H
