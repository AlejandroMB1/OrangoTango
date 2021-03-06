#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inicio.h"
#include <cuenta.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QRegExp expreUsuario("((?:[a-zA-Z0-9]{1,12}))");
    ui->Usuario->setValidator(new QRegExpValidator(expreUsuario,this));

    QRegExp expreContra("((?:[A-Z]{1}[a-zA-Z0-9._]{6,10}))");
    ui->Contra->setValidator(new QRegExpValidator(expreContra,this));
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_actionDormitorio_triggered()
//{

//}

void MainWindow::on_BotonRegistrarse_clicked()
{
    Registro *ventanaRegis = new Registro(this);
    ventanaRegis->setModal(true);
    ventanaRegis->show();
}

void MainWindow::on_BotonIniciarS_clicked()
{
    if(ui -> Usuario -> text() == "" || ui -> Contra->text() == ""){
        QMessageBox::information(this,"Información","Debe ingresar Usuario y Contraseña para iniciar Sesión");
    }
    else{
        QString Quser = ui -> Usuario -> text();
        QString Qcontr = ui -> Contra -> text();
        string user = Quser.toStdString();
        string contr = Qcontr.toStdString();
        int a = 0;
        int b = 0;
        ifstream archivo("UsuariosBD.txt");
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

            cuenta *ventana = new cuenta();
            ventana->show();
        }

    }

}


void MainWindow::on_atras_clicked()
{
    Inicio *ventana = new Inicio();
    ventana->show();
}

void MainWindow::on_Buscar_clicked(){

    if(ui -> BuscarP -> text() == ""){
        QMessageBox::information(this,"Información","Debe ingresar el nombre del producto");
    }
    else{
        QString QProduc = ui -> BuscarP -> text();
        string Produc = QProduc.toStdString();

        ifstream archivoP("ProductosBD.txt");
        if(!archivoP.is_open()){
            QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
            exit(1);
        }
        string linea;
        int s= 0;
        while(getline(archivoP,linea)){
            if(linea.find(Produc) != string::npos){
                s=1;
                QMessageBox::information(this,"Información","El Producto esta disponible, Por favor Inicie sesión y busquelo en el catálogo");
             }
        }
        if(s == 0){
            QMessageBox::information(this,"Información","Producto no Encontrado");
        }
        else{

        //abrir ventada
        }
    }
}



