/********************************************************************************
** Form generated from reading UI file 'mainempresa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINEMPRESA_H
#define UI_MAINEMPRESA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainEmpresa
{
public:
    QWidget *centralwidget;
    QCommandLinkButton *BotonAnadirP;
    QCommandLinkButton *BotonEliminarP_2;
    QCommandLinkButton *BotonInformes;
    QCommandLinkButton *BotonINventario;
    QCommandLinkButton *BotonGestionar;
    QCommandLinkButton *BotonBAseDatos;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainEmpresa)
    {
        if (MainEmpresa->objectName().isEmpty())
            MainEmpresa->setObjectName(QStringLiteral("MainEmpresa"));
        MainEmpresa->resize(800, 600);
        centralwidget = new QWidget(MainEmpresa);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        BotonAnadirP = new QCommandLinkButton(centralwidget);
        BotonAnadirP->setObjectName(QStringLiteral("BotonAnadirP"));
        BotonAnadirP->setGeometry(QRect(300, 110, 221, 41));
        QFont font;
        font.setPointSize(23);
        BotonAnadirP->setFont(font);
        BotonEliminarP_2 = new QCommandLinkButton(centralwidget);
        BotonEliminarP_2->setObjectName(QStringLiteral("BotonEliminarP_2"));
        BotonEliminarP_2->setGeometry(QRect(300, 180, 231, 41));
        BotonEliminarP_2->setFont(font);
        BotonInformes = new QCommandLinkButton(centralwidget);
        BotonInformes->setObjectName(QStringLiteral("BotonInformes"));
        BotonInformes->setGeometry(QRect(300, 250, 221, 41));
        BotonInformes->setFont(font);
        BotonINventario = new QCommandLinkButton(centralwidget);
        BotonINventario->setObjectName(QStringLiteral("BotonINventario"));
        BotonINventario->setGeometry(QRect(300, 320, 193, 41));
        BotonINventario->setFont(font);
        BotonGestionar = new QCommandLinkButton(centralwidget);
        BotonGestionar->setObjectName(QStringLiteral("BotonGestionar"));
        BotonGestionar->setGeometry(QRect(300, 390, 281, 41));
        BotonGestionar->setFont(font);
        BotonBAseDatos = new QCommandLinkButton(centralwidget);
        BotonBAseDatos->setObjectName(QStringLiteral("BotonBAseDatos"));
        BotonBAseDatos->setGeometry(QRect(300, 460, 193, 41));
        BotonBAseDatos->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 30, 151, 61));
        QFont font1;
        font1.setPointSize(33);
        label->setFont(font1);
        MainEmpresa->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainEmpresa);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainEmpresa->setMenuBar(menubar);
        statusbar = new QStatusBar(MainEmpresa);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainEmpresa->setStatusBar(statusbar);

        retranslateUi(MainEmpresa);

        QMetaObject::connectSlotsByName(MainEmpresa);
    } // setupUi

    void retranslateUi(QMainWindow *MainEmpresa)
    {
        MainEmpresa->setWindowTitle(QApplication::translate("MainEmpresa", "Empresa", Q_NULLPTR));
        BotonAnadirP->setText(QApplication::translate("MainEmpresa", "Anadir Producto", Q_NULLPTR));
        BotonEliminarP_2->setText(QApplication::translate("MainEmpresa", "Eliminar Producto", Q_NULLPTR));
        BotonInformes->setText(QApplication::translate("MainEmpresa", "Informes", Q_NULLPTR));
        BotonINventario->setText(QApplication::translate("MainEmpresa", "Inventario", Q_NULLPTR));
        BotonGestionar->setText(QApplication::translate("MainEmpresa", "Gestionar Proyectos", Q_NULLPTR));
        BotonBAseDatos->setText(QApplication::translate("MainEmpresa", "Base de Datos", Q_NULLPTR));
        label->setText(QApplication::translate("MainEmpresa", "MEN\303\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainEmpresa: public Ui_MainEmpresa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINEMPRESA_H
