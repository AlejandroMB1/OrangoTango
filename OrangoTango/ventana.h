#ifndef VENTANA_H
#define VENTANA_H

#include <QDialog>
#include <ventcatalogo.h>
namespace Ui {
class Ventana;
}

class Ventana : public QDialog
{
    Q_OBJECT

public:
    explicit Ventana(QWidget *parent = 0);
    ~Ventana();

private:
    Ui::Ventana *ui;
};

#endif // VENTANA_H
