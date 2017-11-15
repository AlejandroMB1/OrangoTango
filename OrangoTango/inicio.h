#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>


namespace Ui {
class Inicio;
}

class Inicio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = 0);
    ~Inicio();

private slots:
    void on_BotonEmpleado_clicked();
    void show_Time();
    void on_BotonCliente_clicked();

private:
    Ui::Inicio *ui;
};

#endif // INICIO_H
