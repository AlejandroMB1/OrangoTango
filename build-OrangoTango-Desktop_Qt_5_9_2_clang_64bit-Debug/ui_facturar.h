/********************************************************************************
** Form generated from reading UI file 'facturar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURAR_H
#define UI_FACTURAR_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Facturar
{
public:
    QLineEdit *lineEmpresa;
    QLineEdit *lineNit;
    QLineEdit *lineTelefono;
    QLineEdit *lineCliente;
    QDateTimeEdit *Fecha;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTableWidget *tablaProductos;
    QPushButton *BotonPagar;
    QLineEdit *lineNfactura;
    QLabel *label_7;

    void setupUi(QWidget *Facturar)
    {
        if (Facturar->objectName().isEmpty())
            Facturar->setObjectName(QStringLiteral("Facturar"));
        Facturar->resize(552, 432);
        lineEmpresa = new QLineEdit(Facturar);
        lineEmpresa->setObjectName(QStringLiteral("lineEmpresa"));
        lineEmpresa->setGeometry(QRect(30, 60, 161, 21));
        lineNit = new QLineEdit(Facturar);
        lineNit->setObjectName(QStringLiteral("lineNit"));
        lineNit->setGeometry(QRect(280, 60, 171, 21));
        lineTelefono = new QLineEdit(Facturar);
        lineTelefono->setObjectName(QStringLiteral("lineTelefono"));
        lineTelefono->setGeometry(QRect(30, 110, 161, 21));
        lineCliente = new QLineEdit(Facturar);
        lineCliente->setObjectName(QStringLiteral("lineCliente"));
        lineCliente->setGeometry(QRect(280, 110, 171, 21));
        Fecha = new QDateTimeEdit(Facturar);
        Fecha->setObjectName(QStringLiteral("Fecha"));
        Fecha->setGeometry(QRect(360, 10, 141, 24));
        Fecha->setReadOnly(true);
        Fecha->setDate(QDate(2017, 11, 6));
        Fecha->setCalendarPopup(true);
        Fecha->setTimeSpec(Qt::LocalTime);
        label = new QLabel(Facturar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 61, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Facturar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 71, 16));
        label_2->setFont(font);
        label_3 = new QLabel(Facturar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 10, 51, 16));
        label_3->setFont(font);
        label_4 = new QLabel(Facturar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 40, 60, 16));
        label_4->setFont(font);
        label_5 = new QLabel(Facturar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 90, 60, 16));
        label_5->setFont(font);
        tablaProductos = new QTableWidget(Facturar);
        tablaProductos->setObjectName(QStringLiteral("tablaProductos"));
        tablaProductos->setGeometry(QRect(30, 180, 491, 201));
        tablaProductos->setRowCount(0);
        tablaProductos->setColumnCount(0);
        tablaProductos->horizontalHeader()->setCascadingSectionResizes(false);
        BotonPagar = new QPushButton(Facturar);
        BotonPagar->setObjectName(QStringLiteral("BotonPagar"));
        BotonPagar->setGeometry(QRect(450, 390, 71, 41));
        lineNfactura = new QLineEdit(Facturar);
        lineNfactura->setObjectName(QStringLiteral("lineNfactura"));
        lineNfactura->setGeometry(QRect(160, 10, 113, 21));
        lineNfactura->setReadOnly(true);
        label_7 = new QLabel(Facturar);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 10, 71, 16));
        label_7->setFont(font);

        retranslateUi(Facturar);

        QMetaObject::connectSlotsByName(Facturar);
    } // setupUi

    void retranslateUi(QWidget *Facturar)
    {
        Facturar->setWindowTitle(QApplication::translate("Facturar", "Facturar", Q_NULLPTR));
        label->setText(QApplication::translate("Facturar", "Empresa", Q_NULLPTR));
        label_2->setText(QApplication::translate("Facturar", "Telefono", Q_NULLPTR));
        label_3->setText(QApplication::translate("Facturar", "Fecha", Q_NULLPTR));
        label_4->setText(QApplication::translate("Facturar", "Nit", Q_NULLPTR));
        label_5->setText(QApplication::translate("Facturar", "Cliente", Q_NULLPTR));
        BotonPagar->setText(QApplication::translate("Facturar", "Pagar", Q_NULLPTR));
        label_7->setText(QApplication::translate("Facturar", "N Factura", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Facturar: public Ui_Facturar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURAR_H
