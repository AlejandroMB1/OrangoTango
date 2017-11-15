#include "mainwindow.h"
#include "facturar.h"
#include "inicio.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Inicio w;
    w.show();

    //Facturar f;
    //f.show();

    return a.exec();
}
