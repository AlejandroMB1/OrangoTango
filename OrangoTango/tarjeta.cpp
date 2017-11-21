#include "tarjeta.h"
#include "ui_tarjeta.h"

Tarjeta::Tarjeta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tarjeta)
{
    ui->setupUi(this);

    QRegExp expreNumero("((?:[0-9]{16}))");
    ui->lineNumero->setValidator(new QRegExpValidator(expreNumero,this));

    QRegExp expreCVV("((?:[0-9]{3}))");
    ui->lineCVV->setValidator(new QRegExpValidator(expreCVV,this));

}

Tarjeta::~Tarjeta()
{
    delete ui;
}
