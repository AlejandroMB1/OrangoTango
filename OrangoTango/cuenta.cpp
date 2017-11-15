#include "cuenta.h"
#include "ui_cuenta.h"

cuenta::cuenta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cuenta)
{
    ui->setupUi(this);
}

cuenta::~cuenta()
{
    delete ui;
}

