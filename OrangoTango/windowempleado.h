#ifndef WINDOWEMPLEADO_H
#define WINDOWEMPLEADO_H

#include <QMainWindow>

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

private:
    Ui::WindowEmpleado *ui;
};

#endif // WINDOWEMPLEADO_H
