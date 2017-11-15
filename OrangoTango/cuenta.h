#ifndef CUENTA_H
#define CUENTA_H

#include <QDialog>
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <mainwindow.h>

using namespace std;


namespace Ui {
class cuenta;
}

class cuenta : public QDialog
{
    Q_OBJECT

public:
    explicit cuenta(QWidget *parent = 0);
    ~cuenta();
    //void iniciarSesion(string usuario);

private:
    Ui::cuenta *ui;


};

#endif // CUENTA_H
