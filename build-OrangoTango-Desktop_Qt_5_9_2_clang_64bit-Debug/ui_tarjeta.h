/********************************************************************************
** Form generated from reading UI file 'tarjeta.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARJETA_H
#define UI_TARJETA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tarjeta
{
public:
    QLineEdit *lineNombre;
    QLineEdit *lineNumero;
    QLineEdit *lineCVV;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Tarjeta)
    {
        if (Tarjeta->objectName().isEmpty())
            Tarjeta->setObjectName(QStringLiteral("Tarjeta"));
        Tarjeta->resize(462, 390);
        lineNombre = new QLineEdit(Tarjeta);
        lineNombre->setObjectName(QStringLiteral("lineNombre"));
        lineNombre->setGeometry(QRect(40, 100, 161, 21));
        lineNumero = new QLineEdit(Tarjeta);
        lineNumero->setObjectName(QStringLiteral("lineNumero"));
        lineNumero->setGeometry(QRect(240, 100, 171, 21));
        lineCVV = new QLineEdit(Tarjeta);
        lineCVV->setObjectName(QStringLiteral("lineCVV"));
        lineCVV->setGeometry(QRect(40, 170, 61, 21));
        checkBox = new QCheckBox(Tarjeta);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(210, 170, 51, 20));
        checkBox_2 = new QCheckBox(Tarjeta);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(280, 170, 111, 20));
        comboBox = new QComboBox(Tarjeta);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 240, 51, 26));
        comboBox_2 = new QComboBox(Tarjeta);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(110, 240, 51, 26));
        comboBox_3 = new QComboBox(Tarjeta);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(290, 240, 51, 26));
        label = new QLabel(Tarjeta);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 70, 111, 16));
        label_2 = new QLabel(Tarjeta);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 70, 141, 16));
        label_3 = new QLabel(Tarjeta);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 140, 60, 16));
        label_4 = new QLabel(Tarjeta);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 210, 141, 16));
        label_5 = new QLabel(Tarjeta);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 210, 60, 16));

        retranslateUi(Tarjeta);

        QMetaObject::connectSlotsByName(Tarjeta);
    } // setupUi

    void retranslateUi(QWidget *Tarjeta)
    {
        Tarjeta->setWindowTitle(QApplication::translate("Tarjeta", "Pagar", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Tarjeta", "Visa", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Tarjeta", "MasterCard", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Tarjeta", "01", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "02", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "03", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "04", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "05", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "06", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "07", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "08", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "09", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "10", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "11", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "12", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Tarjeta", "17", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "18", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "19", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "20", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "21", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "22", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Tarjeta", "1", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "2", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "3", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "4", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "5", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "6", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "7", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "8", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "9", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "10", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "11", Q_NULLPTR)
         << QApplication::translate("Tarjeta", "12", Q_NULLPTR)
        );
        label->setText(QApplication::translate("Tarjeta", "Nombre del Titular", Q_NULLPTR));
        label_2->setText(QApplication::translate("Tarjeta", "Numero de la Tarjeta", Q_NULLPTR));
        label_3->setText(QApplication::translate("Tarjeta", "CVV", Q_NULLPTR));
        label_4->setText(QApplication::translate("Tarjeta", "Fecha de vencimiento", Q_NULLPTR));
        label_5->setText(QApplication::translate("Tarjeta", "N Cuotas", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Tarjeta: public Ui_Tarjeta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARJETA_H
