#include "ventcatalogo.h"
#include "ui_ventcatalogo.h"
#include <QString>

VentCatalogo::VentCatalogo(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::VentCatalogo)
{
    ui->setupUi(this);
    carro = new Carrito();
    QStringList titulos;
    ui->tablaProdu->setColumnCount(3);
    titulos<<"Producto"<<"Cantidad"<<"Precio Unidad";
    ui->tablaProdu->setHorizontalHeaderLabels(titulos);


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
    string nombre= "meson";
    int a= 0;
    int i=0;
    while(getline(productos,linea)){
        i++;
       if(linea.find(nombre) != string::npos){
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
            QMessageBox::information(this,"Información","Producto agregado correctamente");

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
    string nombre = "mesonCocina";
    string linea;
    string codigoProducto = "002";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(nombre) != string::npos){
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
    string nombre = "mesonBano";
    string linea;
    string codigoProducto = "003";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(nombre) != string::npos){
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
    string nombre = "Vario1";
    string codigoProducto = "004";
    int a= 0;
    while(getline(productos,linea)){
       if(linea.find(nombre) != string::npos){
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

void VentCatalogo::on_pushButton_clicked(){

    int p = 1;
    int s = carro->productos.size();

    while(p<s){

       // QString nombre = carro->productos[p]->getDescripcion();

        QTableWidgetItem *item = new QTableWidgetItem(carro->productos[p]->getDescripcion());
        ui->tablaProdu->setItem(p,1,item);
        p++;
    }

}





void VentCatalogo::on_Pagar_clicked(){

    Facturar *ventana = new Facturar();
    ventana->show();

}
