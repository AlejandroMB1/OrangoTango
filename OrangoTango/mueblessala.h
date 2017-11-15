#ifndef MUEBLESSALA_H
#define MUEBLESSALA_H

#include <QDialog>

namespace Ui {
class MueblesSala;
}

class MueblesSala : public QDialog
{
    Q_OBJECT

public:
    explicit MueblesSala(QWidget *parent = 0);
    ~MueblesSala();

private:
    Ui::MueblesSala *ui;
};

#endif // MUEBLESSALA_H
