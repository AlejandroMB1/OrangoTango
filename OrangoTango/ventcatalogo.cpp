#include "ventcatalogo.h"
#include "ui_ventcatalogo.h"
#include <QString>

VentCatalogo::VentCatalogo(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::VentCatalogo)
{
    ui->setupUi(this);
    carro = new Carrito();

}

VentCatalogo::~VentCatalogo()
{
    delete ui;
}

void VentCatalogo::on_commandLinkButton_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "001";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            QString codigo = "001";
            QString descripcion = "meson de cocina";
            QString alto = "20";
            QString largo = "15";
            QString ancho = "20";
            QString color = "marron";
            QString precio = "500.000";
            QString costo = "500.000";
            Producto *mesonCocina = new Producto(codigo,descripcion,alto,largo,ancho,color,precio,costo);
            carro->agregarProducto(mesonCocina);
            break;
        }
    }
    cout << carro->productos.size();
    if(a==0)
        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");
}


void VentCatalogo::on_commandLinkButton_4_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "002";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            break;
        }
    }
    if(a==0)

        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");

}

void VentCatalogo::on_commandLinkButton_3_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "003";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            break;
        }
    }
    if(a==0)

        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");
}

void VentCatalogo::on_commandLinkButton_9_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "004";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            break;
        }
    }
    if(a==0)

        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");
}

void VentCatalogo::on_commandLinkButton_10_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "005";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            break;
        }
    }
    if(a==0)

        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");
}

void VentCatalogo::on_commandLinkButton_11_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "006";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            break;
        }
    }
    if(a==0)

        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");
}

void VentCatalogo::on_commandLinkButton_12_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "007";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            break;
        }
    }
    if(a==0)

        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");
}

void VentCatalogo::on_commandLinkButton_13_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "008";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            break;
        }
    }
    if(a==0)

        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");
}

void VentCatalogo::on_commandLinkButton_14_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "009";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            break;
        }
    }
    if(a==0)

        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");
}

void VentCatalogo::on_commandLinkButton_15_clicked()
{
    ifstream productos("ProductosBD.txt");
    if(!productos.is_open()){
        QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
        exit(1);
    }
    string linea;
    string codigoProducto = "010";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(codigoProducto) != string::npos){
            a = 1;
            break;
        }
    }
    if(a==0)

        QMessageBox::information(this,"Información","Este producto no está disponible en estos momentos");
}

void VentCatalogo::on_pushButton_clicked()
{
    Ventana *window = new Ventana();
    window->show();

}
