/********************************************************************************
** Form generated from reading UI file 'ventanacarrito.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACARRITO_H
#define UI_VENTANACARRITO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaCarrito
{
public:
    QTableWidget *tablaProdu;

    void setupUi(QWidget *VentanaCarrito)
    {
        if (VentanaCarrito->objectName().isEmpty())
            VentanaCarrito->setObjectName(QStringLiteral("VentanaCarrito"));
        VentanaCarrito->resize(476, 433);
        tablaProdu = new QTableWidget(VentanaCarrito);
        tablaProdu->setObjectName(QStringLiteral("tablaProdu"));
        tablaProdu->setGeometry(QRect(25, 121, 421, 231));

        retranslateUi(VentanaCarrito);

        QMetaObject::connectSlotsByName(VentanaCarrito);
    } // setupUi

    void retranslateUi(QWidget *VentanaCarrito)
    {
        VentanaCarrito->setWindowTitle(QApplication::translate("VentanaCarrito", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentanaCarrito: public Ui_VentanaCarrito {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACARRITO_H
