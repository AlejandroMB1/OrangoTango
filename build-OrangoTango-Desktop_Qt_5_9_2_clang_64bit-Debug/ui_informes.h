/********************************************************************************
** Form generated from reading UI file 'informes.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMES_H
#define UI_INFORMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Informes
{
public:

    void setupUi(QWidget *Informes)
    {
        if (Informes->objectName().isEmpty())
            Informes->setObjectName(QStringLiteral("Informes"));
        Informes->resize(511, 498);

        retranslateUi(Informes);

        QMetaObject::connectSlotsByName(Informes);
    } // setupUi

    void retranslateUi(QWidget *Informes)
    {
        Informes->setWindowTitle(QApplication::translate("Informes", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Informes: public Ui_Informes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMES_H
