#ifndef FACTURAR_H
#define FACTURAR_H

#include <QWidget>

namespace Ui {
class Facturar;
}

class Facturar : public QWidget
{
    Q_OBJECT

public:
    explicit Facturar(QWidget *parent = 0);
    ~Facturar();

private slots:
    void on_BotonPagar_clicked();

private:
    Ui::Facturar *ui;
};

#endif // FACTURAR_H
