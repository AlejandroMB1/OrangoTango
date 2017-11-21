#ifndef TARJETA_H
#define TARJETA_H

#include <QWidget>

namespace Ui {
class Tarjeta;
}

class Tarjeta : public QWidget
{
    Q_OBJECT

public:
    explicit Tarjeta(QWidget *parent = 0);
    ~Tarjeta();

private:
    Ui::Tarjeta *ui;
};

#endif // TARJETA_H
