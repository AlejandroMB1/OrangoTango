#ifndef PRODUCTOSVARIOS_H
#define PRODUCTOSVARIOS_H

#include <QDialog>

namespace Ui {
class ProductosVarios;
}

class ProductosVarios : public QDialog
{
    Q_OBJECT

public:
    explicit ProductosVarios(QWidget *parent = 0);
    ~ProductosVarios();

private:
    Ui::ProductosVarios *ui;
};

#endif // PRODUCTOSVARIOS_H
