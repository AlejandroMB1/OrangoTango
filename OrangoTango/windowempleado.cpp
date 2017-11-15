#include "windowempleado.h"
#include "ui_windowempleado.h"
#include "inicio.h"

WindowEmpleado::WindowEmpleado(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowEmpleado)
{
    ui->setupUi(this);
}

WindowEmpleado::~WindowEmpleado()
{
    delete ui;
}

void WindowEmpleado::on_pushButton_clicked()
{
    Inicio *ventana = new Inicio(this);
    ventana->show();
}
