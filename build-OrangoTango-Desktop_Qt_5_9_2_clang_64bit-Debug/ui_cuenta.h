/********************************************************************************
** Form generated from reading UI file 'cuenta.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUENTA_H
#define UI_CUENTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_cuenta
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *cuenta)
    {
        if (cuenta->objectName().isEmpty())
            cuenta->setObjectName(QStringLiteral("cuenta"));
        cuenta->resize(400, 300);
        buttonBox = new QDialogButtonBox(cuenta);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(cuenta);
        QObject::connect(buttonBox, SIGNAL(accepted()), cuenta, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), cuenta, SLOT(reject()));

        QMetaObject::connectSlotsByName(cuenta);
    } // setupUi

    void retranslateUi(QDialog *cuenta)
    {
        cuenta->setWindowTitle(QApplication::translate("cuenta", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cuenta: public Ui_cuenta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUENTA_H
