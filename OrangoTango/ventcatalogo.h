#ifndef VENTCATALOGO_H
#define VENTCATALOGO_H

#include <QScrollArea>

namespace Ui {
class VentCatalogo;
}

class VentCatalogo : public QScrollArea
{
    Q_OBJECT

public:
    explicit VentCatalogo(QWidget *parent = 0);
    ~VentCatalogo();

private:
    Ui::VentCatalogo *ui;
};

#endif // VENTCATALOGO_H
