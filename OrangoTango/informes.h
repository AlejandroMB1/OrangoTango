#ifndef INFORMES_H
#define INFORMES_H

#include <QWidget>

namespace Ui {
class Informes;
}

class Informes : public QWidget
{
    Q_OBJECT

public:
    explicit Informes(QWidget *parent = 0);
    ~Informes();

private:
    Ui::Informes *ui;
};

#endif // INFORMES_H
