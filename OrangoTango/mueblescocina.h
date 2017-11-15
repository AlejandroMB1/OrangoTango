#ifndef MUEBLESCOCINA_H
#define MUEBLESCOCINA_H

#include <QDialog>

namespace Ui {
class MueblesCocina;
}

class MueblesCocina : public QDialog
{
    Q_OBJECT

public:
    explicit MueblesCocina(QWidget *parent = 0);
    ~MueblesCocina();

private:
    Ui::MueblesCocina *ui;
};

#endif // MUEBLESCOCINA_H
