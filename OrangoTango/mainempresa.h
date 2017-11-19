#ifndef MAINEMPRESA_H
#define MAINEMPRESA_H

#include <QMainWindow>

namespace Ui {
class MainEmpresa;
}

class MainEmpresa : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainEmpresa(QWidget *parent = 0);
    ~MainEmpresa();

private slots:

    void on_BotonAnadirP_clicked();

private:
    Ui::MainEmpresa *ui;
};

#endif // MAINEMPRESA_H
