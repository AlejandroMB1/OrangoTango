#include "productosvarios.h"
#include "ui_productosvarios.h"

ProductosVarios::ProductosVarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductosVarios)
{
    ui->setupUi(this);
}

ProductosVarios::~ProductosVarios()
{
    delete ui;
}
