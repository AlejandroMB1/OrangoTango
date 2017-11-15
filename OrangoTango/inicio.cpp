#include "inicio.h"
#include "ui_inicio.h"
#include "windowempleado.h"
#include "mainwindow.h"
#include <QTimer>
#include <QDateTime>


Inicio::Inicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(show_Time()));
    timer -> start();
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_BotonEmpleado_clicked()
{
    WindowEmpleado *ventana = new WindowEmpleado(this);
    ventana->show();
}

void Inicio::on_BotonCliente_clicked()
{
    MainWindow *ventana = new MainWindow(this);
    ventana->show();

}

void Inicio::show_Time(){
    QTime time = QTime::currentTime();
    QString time_Text = time.toString("hh:mm:ss");
    ui ->Reloj ->setText(time_Text);
}
