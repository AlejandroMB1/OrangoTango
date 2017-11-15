#ifndef REGISTRO_H
#define REGISTRO_H

#include <QDialog>
#include <QMessageBox>
#include <QPushButton>

namespace Ui {
class Registro;
}

class Registro : public QDialog
{
    Q_OBJECT

public:
    explicit Registro(QWidget *parent = 0);
    ~Registro();

private slots:
    void on_BotonCrearC_clicked();

    void on_toolButton_clicked();

private:
    Ui::Registro *ui;
};

#endif // REGISTRO_H
