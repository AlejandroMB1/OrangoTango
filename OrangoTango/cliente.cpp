#include "cliente.h"
#include "registro.h"

Cliente::Cliente(){
    nombre = "";
    fechaNacimiento = "";
    sexo = "";
    estadoCivil = "";
    cedula = "";
    tarjetaCredito = "";
    direccion = "";
    telefono = "";
    celular = "";
    correo = "";
    usuario = "";
    contrasenia = "";
    palabraSecreta = "";
}

QString Cliente::getNombre(){
    return nombre;
}

void Cliente::setNombre(QString miNombre){
    nombre = miNombre;
}

QString Cliente::getFechaNacimiento(){
    return fechaNacimiento;
}

void Cliente::setFechaNacimiento(QString miFecha){
    fechaNacimiento = miFecha;
}

QString Cliente::getSexo(){
    return sexo;
}

void Cliente::setSexo(QString miSexo){
    sexo = miSexo;
}

QString Cliente::getEstadoCivil(){
    return estadoCivil;
}

void Cliente::setEstadoCivil(QString miEstado){
    estadoCivil = miEstado;
}

QString Cliente::getCedula(){
    return cedula;
}

void Cliente::setCedula(QString miCedula){
    cedula = miCedula;
}

QString Cliente::getTarjetaCredito(){
    return tarjetaCredito;
}

void Cliente::setTarjetaCredito(QString miTarjeta){
    tarjetaCredito = miTarjeta;
}

QString Cliente::getDireccion(){
    return direccion;
}

void Cliente::setDireccion(QString miDireccion){
    direccion = miDireccion;
}

QString Cliente::getTelefono(){
    return telefono;
}

void Cliente::setTelefono(QString miTelefono){
    telefono = miTelefono;
}

QString Cliente::getCelular(){
    return celular;
}

void Cliente::setCelular(QString miCelular){
    celular = miCelular;
}

QString Cliente::getCorreo(){
    return correo;
}

void Cliente::setCorreo(QString miCorreo){
    correo = miCorreo;
}

QString Cliente::getUsuario(){
    return usuario;
}

void Cliente::setUsuario(QString miUsuario){
    usuario = miUsuario;
}

QString Cliente::getContrasenia(){
    return contrasenia;
}

void Cliente::setContrasenia(QString miContrasenia){
    contrasenia = miContrasenia;
}

QString Cliente::getPalabraSecreta(){
    return palabraSecreta;
}

void Cliente::setPalabraSecreta(QString miPalabraSecreta){
    palabraSecreta = miPalabraSecreta;
}

void Cliente::registrarse(){

    ofstream archivo("ClientesBD.txt", ios::app);

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    archivo << "======================================================"<<endl;
    archivo << "cliente: " << (this->getNombre().toStdString())<< endl;
    archivo << "fecha de nacimiento: " << (this->getFechaNacimiento().toStdString()) << endl;
    archivo << "sexo: " << (this->getSexo().toStdString()) << endl;
    archivo << "Estado civil: " << (this->getEstadoCivil().toStdString()) << endl;
    archivo << "cedula: " << (this->getCedula().toStdString()) << endl;
    archivo << "Tarjeta de credito: " << (this->getTarjetaCredito().toStdString()) << endl;
    archivo << "direccion: " << (this->getDireccion().toStdString()) << endl;
    archivo << "telefono: " << (this->getTelefono().toStdString()) << endl;
    archivo << "celular: " << (this->getCelular().toStdString()) << endl;
    archivo << "correo: " << (this->getCorreo().toStdString()) << endl;
    archivo << "======================================================" << endl;
    archivo.close();
}

void Cliente::registrarUser(){

    ofstream archivo("UsuariosBD.txt", ios::app);

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    archivo << "======================================================"<<endl;
    archivo << "usuario: " << (this->getUsuario().toStdString()) << endl;
    archivo << "contrasenia: " << (this->getContrasenia().toStdString()) << endl;
    archivo << "palabra secreta: " << (this->getPalabraSecreta().toStdString()) << endl;
    archivo << "======================================================" << endl;
    archivo.close();
}





