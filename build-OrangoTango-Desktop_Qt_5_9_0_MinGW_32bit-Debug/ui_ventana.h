/********************************************************************************
** Form generated from reading UI file 'ventana.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_H
#define UI_VENTANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Ventana
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QStringLiteral("Ventana"));
        Ventana->resize(400, 300);
        buttonBox = new QDialogButtonBox(Ventana);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Ventana);
        QObject::connect(buttonBox, SIGNAL(accepted()), Ventana, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Ventana, SLOT(reject()));

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QDialog *Ventana)
    {
        Ventana->setWindowTitle(QApplication::translate("Ventana", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
