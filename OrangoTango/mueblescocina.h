#ifndef MUEBLESCOCINA_H
#define MUEBLESCOCINA_H

#include <QDialog>
#include "producto.h"
#include "carrito.h"

namespace Ui {
class MueblesCocina;
}

class MueblesCocina : public QDialog
{
    Q_OBJECT

public:
    explicit MueblesCocina(QWidget *parent = 0);
    ~MueblesCocina();

private slots:/*
    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();

    void on_commandLinkButton_3_clicked();

    void on_commandLinkButton_4_clicked();
*/
private:
    Ui::MueblesCocina *ui;
};

#endif // MUEBLESCOCINA_H
