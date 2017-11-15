/********************************************************************************
** Form generated from reading UI file 'mainwindowempresa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWEMPRESA_H
#define UI_MAINWINDOWEMPRESA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Empresa
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *IniciarSecion;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Empresa)
    {
        if (Empresa->objectName().isEmpty())
            Empresa->setObjectName(QStringLiteral("Empresa"));
        Empresa->resize(800, 600);
        centralwidget = new QWidget(Empresa);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(320, 160, 151, 21));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 230, 151, 21));
        IniciarSecion = new QPushButton(centralwidget);
        IniciarSecion->setObjectName(QStringLiteral("IniciarSecion"));
        IniciarSecion->setGeometry(QRect(340, 280, 113, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 140, 60, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 210, 81, 16));
        Empresa->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Empresa);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Empresa->setMenuBar(menubar);
        statusbar = new QStatusBar(Empresa);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Empresa->setStatusBar(statusbar);

        retranslateUi(Empresa);

        QMetaObject::connectSlotsByName(Empresa);
    } // setupUi

    void retranslateUi(QMainWindow *Empresa)
    {
        Empresa->setWindowTitle(QApplication::translate("Empresa", "Empresa", Q_NULLPTR));
        IniciarSecion->setText(QApplication::translate("Empresa", "Iniciar Sesi\303\263n", Q_NULLPTR));
        label->setText(QApplication::translate("Empresa", "Usuario:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Empresa", "Contrase\303\261a:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Empresa: public Ui_Empresa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWEMPRESA_H
