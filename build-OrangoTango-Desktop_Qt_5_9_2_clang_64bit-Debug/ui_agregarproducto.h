/********************************************************************************
** Form generated from reading UI file 'agregarproducto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARPRODUCTO_H
#define UI_AGREGARPRODUCTO_H

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

class Ui_AgregarProducto
{
public:
    QPushButton *BotonAgregarProducto;
    QLineEdit *lineCodigo;
    QLineEdit *lineDescri;
    QLineEdit *lineAlto;
    QLineEdit *lineLargo;
    QLineEdit *lineAncho;
    QLineEdit *lineColor;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *linePrecio;
    QLineEdit *lineCosto;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *BotonCancelar;
    QLabel *label_9;

    void setupUi(QWidget *AgregarProducto)
    {
        if (AgregarProducto->objectName().isEmpty())
            AgregarProducto->setObjectName(QStringLiteral("AgregarProducto"));
        AgregarProducto->resize(480, 450);
        BotonAgregarProducto = new QPushButton(AgregarProducto);
        BotonAgregarProducto->setObjectName(QStringLiteral("BotonAgregarProducto"));
        BotonAgregarProducto->setGeometry(QRect(170, 380, 141, 41));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        BotonAgregarProducto->setFont(font);
        lineCodigo = new QLineEdit(AgregarProducto);
        lineCodigo->setObjectName(QStringLiteral("lineCodigo"));
        lineCodigo->setGeometry(QRect(50, 90, 141, 21));
        lineCodigo->setFont(font);
        lineDescri = new QLineEdit(AgregarProducto);
        lineDescri->setObjectName(QStringLiteral("lineDescri"));
        lineDescri->setGeometry(QRect(50, 170, 141, 21));
        lineDescri->setFont(font);
        lineAlto = new QLineEdit(AgregarProducto);
        lineAlto->setObjectName(QStringLiteral("lineAlto"));
        lineAlto->setGeometry(QRect(50, 250, 141, 21));
        lineAlto->setFont(font);
        lineLargo = new QLineEdit(AgregarProducto);
        lineLargo->setObjectName(QStringLiteral("lineLargo"));
        lineLargo->setGeometry(QRect(50, 330, 141, 21));
        lineLargo->setFont(font);
        lineAncho = new QLineEdit(AgregarProducto);
        lineAncho->setObjectName(QStringLiteral("lineAncho"));
        lineAncho->setGeometry(QRect(290, 90, 141, 21));
        lineAncho->setFont(font);
        lineColor = new QLineEdit(AgregarProducto);
        lineColor->setObjectName(QStringLiteral("lineColor"));
        lineColor->setGeometry(QRect(290, 170, 141, 21));
        lineColor->setFont(font);
        label = new QLabel(AgregarProducto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 70, 71, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Tahoma"));
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(AgregarProducto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 150, 81, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(AgregarProducto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 230, 60, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(AgregarProducto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 310, 60, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(AgregarProducto);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 70, 60, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(AgregarProducto);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 150, 60, 16));
        label_6->setFont(font1);
        linePrecio = new QLineEdit(AgregarProducto);
        linePrecio->setObjectName(QStringLiteral("linePrecio"));
        linePrecio->setGeometry(QRect(290, 250, 141, 21));
        linePrecio->setFont(font);
        lineCosto = new QLineEdit(AgregarProducto);
        lineCosto->setObjectName(QStringLiteral("lineCosto"));
        lineCosto->setGeometry(QRect(290, 330, 141, 21));
        lineCosto->setFont(font);
        label_7 = new QLabel(AgregarProducto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(290, 230, 101, 16));
        label_7->setFont(font1);
        label_8 = new QLabel(AgregarProducto);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 310, 60, 16));
        label_8->setFont(font1);
        BotonCancelar = new QPushButton(AgregarProducto);
        BotonCancelar->setObjectName(QStringLiteral("BotonCancelar"));
        BotonCancelar->setGeometry(QRect(0, 420, 113, 32));
        BotonCancelar->setFont(font);
        label_9 = new QLabel(AgregarProducto);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 30, 151, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Tahoma"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_9->setFont(font2);

        retranslateUi(AgregarProducto);
        QObject::connect(BotonCancelar, SIGNAL(clicked()), AgregarProducto, SLOT(close()));

        QMetaObject::connectSlotsByName(AgregarProducto);
    } // setupUi

    void retranslateUi(QWidget *AgregarProducto)
    {
        AgregarProducto->setWindowTitle(QApplication::translate("AgregarProducto", "Form", Q_NULLPTR));
        BotonAgregarProducto->setText(QApplication::translate("AgregarProducto", "Agregar Producto", Q_NULLPTR));
        label->setText(QApplication::translate("AgregarProducto", "Codigo:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AgregarProducto", "Descripci\303\263n:", Q_NULLPTR));
        label_3->setText(QApplication::translate("AgregarProducto", "Alto:", Q_NULLPTR));
        label_4->setText(QApplication::translate("AgregarProducto", "Largo:", Q_NULLPTR));
        label_5->setText(QApplication::translate("AgregarProducto", "Ancho:", Q_NULLPTR));
        label_6->setText(QApplication::translate("AgregarProducto", "Color:", Q_NULLPTR));
        label_7->setText(QApplication::translate("AgregarProducto", "Precio de Venta:", Q_NULLPTR));
        label_8->setText(QApplication::translate("AgregarProducto", "Costo:", Q_NULLPTR));
        BotonCancelar->setText(QApplication::translate("AgregarProducto", "Cancelar", Q_NULLPTR));
        label_9->setText(QApplication::translate("AgregarProducto", "Datos del Producto", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AgregarProducto: public Ui_AgregarProducto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARPRODUCTO_H
