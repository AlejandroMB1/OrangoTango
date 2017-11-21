#include "eliminarproducto.h"
#include "ui_eliminarproducto.h"
#include "mainempresa.h"

EliminarProducto::EliminarProducto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EliminarProducto)
{
    ui->setupUi(this);
}

EliminarProducto::~EliminarProducto()
{
    delete ui;
}

void EliminarProducto::on_BotonEliminar_clicked(){

    if(ui->lineCodigo->text() == ""){
         QMessageBox::information(this,"Información","Debe ingresar un codigo valido");
    }

    else{


        string separar;
        string separar2;

        string codig;
        string descri;
        string Alto;
        string Largo;
        string Ancho;
        string Color;
        string Precio;
        string Costo;
        string codig1;
        string descri1;
        string Alto1;
        string Largo1;
        string Ancho1;
        string Color1;
        string Precio1;
        string Costo1;

        QString QCodigo = ui->lineCodigo->text();
        string Codigo = QCodigo.toStdString();


        ifstream archivo("ProductosBD.txt");
        if(!archivo.is_open()){
            QMessageBox::information(this,"Información","error, el archivo txt no se pudo abrir");
            exit(1);
        }

        ofstream archivoTemp("Temp.txt", ios::app);
        if(archivoTemp.fail()){
            cout << "No se pudo abrir el archivo" << endl;
            exit(1);
        }

        archivo>>separar;
        archivo>>codig>>codig1;

        while(!archivo.eof()){

            archivo>>descri>>descri1;
            archivo>>Alto>>Alto1;
            archivo>>Largo>>Largo1;
            archivo>>Ancho>>Ancho1;
            archivo>>Color>>Color1;
            archivo>>Precio>>Precio1;
            archivo>>Costo>>Costo1;
            archivo>>separar2;

            if(Codigo==codig1){
                 QMessageBox::information(this,"Información","El producto se ha eliminado correctamente");

            }
            else{
                archivoTemp<<separar<<endl;
                archivoTemp<<codig<<" "<<codig1<<endl;
                archivoTemp<<descri<<" "<<descri1<<endl;
                archivoTemp<<Alto<<" "<<Alto1<<endl;
                archivoTemp<<Largo<<" "<<Largo1<<endl;
                archivoTemp<<Ancho<<" "<<Ancho1<<endl;
                archivoTemp<<Color<<" "<<Color1<<endl;
                archivoTemp<<Precio<<" "<<Precio1<<endl;
                archivoTemp<<Costo<<" "<<Costo1<<endl;


            }
            archivo>>codig>>codig1;
        }

        archivo.close();
        archivoTemp.close();

        remove("ProductosBD.txt");
        rename("Temp.txt","ProductosBD.txt");


    }

}



