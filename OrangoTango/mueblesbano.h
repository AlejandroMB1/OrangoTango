#ifndef MUEBLESBANO_H
#define MUEBLESBANO_H

#include <QDialog>
#include "producto.h"
#include "carrito.h"

namespace Ui {
class MueblesBano;
}

class MueblesBano : public QDialog
{
    Q_OBJECT

public:
    explicit MueblesBano(QWidget *parent = 0);
    ~MueblesBano();

private slots:
    /*void on_commandLinkButton_2_clicked(Carrito *carro);*/

private:
    Ui::MueblesBano *ui;
};

#endif // MUEBLESBANO_H
