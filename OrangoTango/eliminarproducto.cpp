#include "eliminarproducto.h"
#include "ui_eliminarproducto.h"

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
        archivo>>codig;

        while(!archivo.eof()){

            archivo>>descri;
            archivo>>Alto;
            archivo>>Largo;
            archivo>>Ancho;
            archivo>>Color;
            archivo>>Precio;
            archivo>>Costo;
            archivo>>separar2;

            if(Codigo==codig){

                 QMessageBox::information(this,"Información","El producto se ha eliminado correctamente");

            }
            else{
                archivoTemp<<separar<<endl;
                archivoTemp<<codig<<endl;
                archivoTemp<<descri<<endl;
                archivoTemp<<Alto<<endl;
                archivoTemp<<Largo<<endl;
                archivoTemp<<Ancho<<endl;
                archivoTemp<<Color<<endl;
                archivoTemp<<Precio<<endl;
                archivoTemp<<Costo<<endl;
                archivoTemp<<separar2<<endl;
            }
            archivo>>codig;
        }

        archivo.close();
        archivoTemp.close();

        remove("ProductosBD.txt");
        rename("Temp.txt","ProductosBD.txt");


    }




}
