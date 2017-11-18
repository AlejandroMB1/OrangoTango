#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ventana.h>
#include <cliente.h>
#include <registro.h>
#include <cuenta.h>
#include <stdlib.h>
#include <QString>
#include <string>



using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_actionDormitorio_triggered();
    void on_BotonRegistrarse_clicked();
    void on_BotonIniciarS_clicked();


};



#endif // MAINWINDOW_H
