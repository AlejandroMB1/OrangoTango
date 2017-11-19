#ifndef VENTCATALOGO_H
#define VENTCATALOGO_H

#include <QScrollArea>
#include <carrito.h>
#include <cuenta.h>
#include <fstream>
#include <stdlib.h>
#include <string>

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

    void on_commandLinkButton_4_clicked();

    void on_commandLinkButton_3_clicked();

    void on_commandLinkButton_9_clicked();

    void on_commandLinkButton_10_clicked();

    void on_commandLinkButton_11_clicked();

    void on_commandLinkButton_12_clicked();

    void on_commandLinkButton_13_clicked();

    void on_commandLinkButton_14_clicked();

    void on_commandLinkButton_15_clicked();

    void on_pushButton_clicked();

private:
    Ui::VentCatalogo *ui;
     Carrito *carro;
};

#endif // VENTCATALOGO_H
