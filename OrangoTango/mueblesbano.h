#ifndef MUEBLESBANO_H
#define MUEBLESBANO_H

#include <QDialog>

namespace Ui {
class MueblesBano;
}

class MueblesBano : public QDialog
{
    Q_OBJECT

public:
    explicit MueblesBano(QWidget *parent = 0);
    ~MueblesBano();

private:
    Ui::MueblesBano *ui;
};

#endif // MUEBLESBANO_H
