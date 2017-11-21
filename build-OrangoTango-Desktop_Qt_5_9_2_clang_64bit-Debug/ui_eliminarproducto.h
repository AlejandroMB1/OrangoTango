/********************************************************************************
** Form generated from reading UI file 'eliminarproducto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARPRODUCTO_H
#define UI_ELIMINARPRODUCTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EliminarProducto
{
public:
    QPushButton *BotonEliminar;
    QLineEdit *lineCodigo;
    QLabel *label;
    QPushButton *BotonAtras;
    QLabel *label_2;

    void setupUi(QWidget *EliminarProducto)
    {
        if (EliminarProducto->objectName().isEmpty())
            EliminarProducto->setObjectName(QStringLiteral("EliminarProducto"));
        EliminarProducto->resize(509, 301);
        BotonEliminar = new QPushButton(EliminarProducto);
        BotonEliminar->setObjectName(QStringLiteral("BotonEliminar"));
        BotonEliminar->setGeometry(QRect(200, 170, 113, 51));
        lineCodigo = new QLineEdit(EliminarProducto);
        lineCodigo->setObjectName(QStringLiteral("lineCodigo"));
        lineCodigo->setGeometry(QRect(200, 130, 113, 21));
        label = new QLabel(EliminarProducto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 30, 181, 41));
        QFont font;
        font.setPointSize(23);
        label->setFont(font);
        BotonAtras = new QPushButton(EliminarProducto);
        BotonAtras->setObjectName(QStringLiteral("BotonAtras"));
        BotonAtras->setGeometry(QRect(20, 260, 113, 32));
        label_2 = new QLabel(EliminarProducto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 100, 121, 16));

        retranslateUi(EliminarProducto);
        QObject::connect(BotonAtras, SIGNAL(clicked()), EliminarProducto, SLOT(close()));

        QMetaObject::connectSlotsByName(EliminarProducto);
    } // setupUi

    void retranslateUi(QWidget *EliminarProducto)
    {
        EliminarProducto->setWindowTitle(QApplication::translate("EliminarProducto", "Eliminar Producto", Q_NULLPTR));
        BotonEliminar->setText(QApplication::translate("EliminarProducto", "Eliminar", Q_NULLPTR));
        label->setText(QApplication::translate("EliminarProducto", "Eliminar Producto", Q_NULLPTR));
        BotonAtras->setText(QApplication::translate("EliminarProducto", "Atras", Q_NULLPTR));
        label_2->setText(QApplication::translate("EliminarProducto", "Ingrese el Codigo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EliminarProducto: public Ui_EliminarProducto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARPRODUCTO_H
