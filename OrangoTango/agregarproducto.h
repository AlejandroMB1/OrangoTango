#ifndef AGREGARPRODUCTO_H
#define AGREGARPRODUCTO_H

#include <QWidget>
#include <QMessageBox>
#include <QPushButton>

namespace Ui {
class AgregarProducto;
}

class AgregarProducto : public QWidget
{
    Q_OBJECT

public:
    explicit AgregarProducto(QWidget *parent = 0);
    ~AgregarProducto();

private slots:
    void on_BotonAgregarProducto_clicked();

private:
    Ui::AgregarProducto *ui;
};

#endif // AGREGARPRODUCTO_H
