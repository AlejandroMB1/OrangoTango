#ifndef WINDOWEMPLEADO_H
#define WINDOWEMPLEADO_H

#include <QMessageBox>
#include <QMainWindow>
#include <QString>
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h> //std::exit

using namespace std;

namespace Ui {
class WindowEmpleado;
}

class WindowEmpleado : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowEmpleado(QWidget *parent = 0);
    ~WindowEmpleado();

private slots:
    void on_pushButton_clicked();

    void on_BotonIniciar_clicked();

private:
    Ui::WindowEmpleado *ui;
};

#endif // WINDOWEMPLEADO_H
