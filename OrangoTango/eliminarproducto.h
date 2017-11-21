#ifndef ELIMINARPRODUCTO_H
#define ELIMINARPRODUCTO_H

#include <QMainWindow>
#include <cliente.h>
#include <registro.h>
#include <cuenta.h>
#include <stdlib.h>
#include <QString>
#include <string>
#include <QWidget>


using namespace std;


namespace Ui {
class EliminarProducto;
}

class EliminarProducto : public QWidget
{
    Q_OBJECT

public:
    explicit EliminarProducto(QWidget *parent = 0);
    ~EliminarProducto();

private slots:
    void on_BotonEliminar_clicked();




private:
    Ui::EliminarProducto *ui;
};

#endif // ELIMINARPRODUCTO_H
