#include "registro.h"
#include "ui_registro.h"
#include <cliente.h>
#include <iostream>

using namespace std;

Registro::Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registro)
{
    ui->setupUi(this);

    QRegExp expreNombre("((?:[a-zA-Záéíóú]{1,20}/s/[a-zA-Záéíóú]{1,20}))");
    ui->Nombre->setValidator(new QRegExpValidator(expreNombre,this));

    QRegExp expreCedula("((?:[0-9]{8,10}))");
    ui->Cedula->setValidator(new QRegExpValidator(expreCedula,this));

    QRegExp expreTelefono("((?:[0-9]{7}))");
    ui->Telefono->setValidator(new QRegExpValidator(expreTelefono,this));


    QRegExp expreCorreo("((?:[a-z0-9_.]{1,20}[@]{1}[a-z.]{1,20}[a-z.]{1,10}))");

    ui->Correo->setValidator(new QRegExpValidator(expreCorreo));

    QRegExp expreCelular("((?:[3]{1}[0-9]{9}))");
    ui->Celular->setValidator(new QRegExpValidator(expreCelular,this));


    QRegExp expreUsuario("((?:[a-zA-Z0-9]{1,20}))");
    ui->Usuario->setValidator(new QRegExpValidator(expreUsuario,this));

    QRegExp expreContra("((?:[A-Z]{1}[a-zA-Z0-9._]{6,20}))");
    ui->Contra->setValidator(new QRegExpValidator(expreContra,this));


}

Registro::~Registro()
{
    delete ui;
}

void Registro::on_BotonCrearC_clicked(){

    Cliente *client = new Cliente();
    //Obtener texto de los QlineEdit(espacios en blanco):
    client->setNombre(ui -> Nombre->text());
    client->setFechaNacimiento(ui -> fecha->text());
    client->setCedula(ui -> Cedula->text());
    client->setTelefono(ui -> Telefono->text());
    client->setDireccion(ui -> Direccion->text());
    client->setCorreo(ui -> Correo->text());
    client->setUsuario(ui -> Usuario->text());
    client->setContrasenia(ui -> Contra->text());
    client->setPalabraSecreta(ui -> Palabra->text());
    client->setCelular(ui -> Celular->text());
    //Obtener texto de los ComboBox:
    client->setSexo(ui->Sexo->currentText());
    client->setEstadoCivil(ui->EstadoC->currentText());
    QString direc = ui->Direccion->text();
    QString psec = ui->Palabra->text();

    int x = 0;
    QRegularExpression expreNombre("((?:[a-zA-Záéíóú]{1,10}))");
    QString nombre = ui->Nombre->text();
    if(!expreNombre.match(nombre).hasMatch() && nombre != ""){
        QMessageBox::information(this,"Advertencia", "Nombre no Valido");
        x = x+1;
    }

    QRegularExpression expreCedula("((?:[0-9]{8,10}))");
    QString cedula = ui->Cedula->text();
    if(!expreCedula.match(cedula).hasMatch() && cedula != ""){
        QMessageBox::information(this,"Advertencia", "Cedula no Valida");
        x = x+1;
    }

    QRegularExpression expreTelefono("((?:[0-9]{7}))");
    QString telefono = ui->Telefono->text();
    if(!expreTelefono.match(telefono).hasMatch() && telefono != ""){
        QMessageBox::information(this,"Advertencia", "Telefono no Valido");
        x = x+1;
    }

    QRegularExpression expreCorreo("((?:[a-z0-9_.]{1,20}[@]{1}[a-z.]{1,20}[a-z.]{1,10}))");
    QString correo = ui->Correo->text();
    if(!expreCorreo.match(correo).hasMatch() && correo != ""){
        QMessageBox::information(this,"Advertencia", "Correo no Valido");
        x = x+1;
    }

    QRegularExpression expreCelular("((?:[3]{1}[0-9]{9}))");
    QString celular = ui->Celular->text();
    if(!expreCelular.match(celular).hasMatch() && celular != ""){
        QMessageBox::information(this,"Advertencia", "Celular no Valido");
        x = x+1;
    }

    QRegularExpression expreUsuario("((?:[a-zA-Z0-9]{1,12}))");
    QString usuario = ui->Usuario->text();
    if(!expreUsuario.match(usuario).hasMatch() && usuario != ""){
        QMessageBox::information(this,"Advertencia", "Usuario no Valido");
        x = x+1;
    }

    QRegularExpression expreContra("((?:[A-Z]{1}[a-zA-Z0-9._]{6,10}))");
    QString contra = ui->Contra->text();
    if(!expreContra.match(contra).hasMatch() && contra != ""){
        QMessageBox::information(this,"Advertencia", "Contraseña no Valida");
        x = x+1;
    }

    if(nombre == "" || cedula == "" || telefono == "" || direc == "" || correo == "" || celular == "" || usuario == "" || contra == "" || psec == ""){
        QMessageBox::information(this,"Advertencia", "Algun Campo Falta por Llenar");
        x = x+1;
    }

    if(x==0){
        client->registrarse();
        client->registrarUser();
        QMessageBox::information(this,"Información","Cuenta creada Satisfactoriamente!!!");
        Registro::close();
     }
    //Verificar la correcta obtención de datos:
    //cout << (client -> getNombre().toStdString()) << endl;

}

void Registro::on_toolButton_clicked()
{
    QMessageBox::information(this,"Información","La contraseña debe tener la primer letra en Mayúscula");
}
