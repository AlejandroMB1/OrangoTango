#ifndef CUENTA_H
#define CUENTA_H

#include <QDialog>

#include <ventana.h>
#include <cliente.h>
#include <registro.h>
#include <stdlib.h>
#include <QString>
#include <string>



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

private slots:
   void on_IralCatalogo_clicked();

private:
    Ui::cuenta *ui;

};

#endif // CUENTA_H

