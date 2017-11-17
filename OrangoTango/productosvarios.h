#ifndef PRODUCTOSVARIOS_H
#define PRODUCTOSVARIOS_H

#include <QDialog>
#include "producto.h"
#include "carrito.h"
namespace Ui {
class ProductosVarios;
}

class ProductosVarios : public QDialog
{
    Q_OBJECT

public:
    explicit ProductosVarios(QWidget *parent = 0);
    ~ProductosVarios();

private slots:/*
    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();
*/
private:
    Ui::ProductosVarios *ui;
};

#endif // PRODUCTOSVARIOS_H
