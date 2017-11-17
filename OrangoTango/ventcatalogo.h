#ifndef VENTCATALOGO_H
#define VENTCATALOGO_H

#include <QScrollArea>
#include <carrito.h>
Carrito *carro = new Carrito(this);

namespace Ui {
class VentCatalogo;
}

class VentCatalogo : public QScrollArea
{
    Q_OBJECT

public:
    explicit VentCatalogo(QWidget *parent = 0);
    ~VentCatalogo();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::VentCatalogo *ui;
};

#endif // VENTCATALOGO_H
