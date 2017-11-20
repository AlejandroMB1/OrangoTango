#include "informes.h"
#include "ui_informes.h"

Informes::Informes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Informes)
{
    ui->setupUi(this);
}

Informes::~Informes()
{
    delete ui;
}
