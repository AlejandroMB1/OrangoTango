#include "windowempleado.h"
#include "ui_windowempleado.h"
#include "inicio.h"
#include "mainempresa.h"

WindowEmpleado::WindowEmpleado(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowEmpleado)
{
    ui->setupUi(this);
}

WindowEmpleado::~WindowEmpleado()
{
    delete ui;
}

void WindowEmpleado::on_pushButton_clicked()
{
    Inicio *ventana = new Inicio(this);
    ventana->show();
}

void WindowEmpleado::on_BotonIniciar_clicked(){

    if(ui -> lineUsuario -> text() == "" || ui -> lineContra->text() == ""){
        QMessageBox::information(this,"Información","Debe ingresar Usuario y Contraseña para iniciar Sesión");
    }
    else{
        QString Quser = ui -> lineUsuario -> text();
        QString Qcontr = ui -> lineContra -> text();
        string user = Quser.toStdString();
        string contr = Qcontr.toStdString();
        int a = 0;
        int b = 0;
        ifstream archivo("EmpleadosBD.txt");
        if(!archivo.is_open()){
            QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
            exit(1);
        }
        string linea;
        int s= 0;
        int p=0;
        while(getline(archivo,linea)){
            s++;
            if(linea.find(user) != string::npos){
                a = 1;
                cout<<s<<endl;
                break;
            }

        }

        while(getline(archivo,linea)){
            p++;

            if(linea.find(contr) != string::npos  ){
                b = 1;
                cout<<"c"<<p<<endl;
                break;
            }
            cout<<"c"<<p<<endl;

        }


        if(a == 0){
            QMessageBox::information(this,"Información","usuario no registrado");
        }
        if(b ==0){
            QMessageBox::information(this,"Información","Contraseña errada");
        }
        else{

            MainEmpresa *Ventana = new MainEmpresa();
            Ventana->show();

        }

    }

}
