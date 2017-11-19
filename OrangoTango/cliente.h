#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>
#include <fstream>
#include <iostream>
#include <stdlib.h> //std::exit

using namespace std;

class Cliente{

    private:

       QString nombre;
       QString fechaNacimiento;
       QString sexo;
       QString estadoCivil;
       QString cedula;
       QString tarjetaCredito;
       QString direccion;
       QString telefono;
       QString celular;
       QString correo;
       QString usuario;
       QString contrasenia;
       QString palabraSecreta;

     public:

       Cliente();
       ~Cliente();
       //setter y getters:
       QString getNombre();
       void setNombre(QString);
       QString getFechaNacimiento();
       void setFechaNacimiento(QString);
       QString getSexo();
       void setSexo(QString);
       QString getEstadoCivil();
       void setEstadoCivil(QString);
       QString getCedula();
       void setCedula(QString);
       QString getTarjetaCredito();
       void setTarjetaCredito(QString);
       QString getDireccion();
       void setDireccion(QString);
       QString getTelefono();
       void setTelefono(QString);
       QString getCelular();
       void setCelular(QString);
       QString getCorreo();
       void setCorreo(QString);
       QString getUsuario();
       void setUsuario(QString);
       QString getContrasenia();
       void setContrasenia(QString);
       QString getPalabraSecreta();
       void setPalabraSecreta(QString);

       //Otros métodos:
       void registrarse();
       void registrarUser();
};

#endif // CLIENTE_H
