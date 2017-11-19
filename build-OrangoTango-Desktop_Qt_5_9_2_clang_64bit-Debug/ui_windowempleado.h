/********************************************************************************
** Form generated from reading UI file 'windowempleado.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWEMPLEADO_H
#define UI_WINDOWEMPLEADO_H

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

class Ui_WindowEmpleado
{
public:
    QWidget *centralwidget;
    QPushButton *BotonIniciar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineUsuario;
    QLineEdit *lineContra;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowEmpleado)
    {
        if (WindowEmpleado->objectName().isEmpty())
            WindowEmpleado->setObjectName(QStringLiteral("WindowEmpleado"));
        WindowEmpleado->resize(800, 600);
        centralwidget = new QWidget(WindowEmpleado);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        BotonIniciar = new QPushButton(centralwidget);
        BotonIniciar->setObjectName(QStringLiteral("BotonIniciar"));
        BotonIniciar->setGeometry(QRect(350, 260, 111, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 30, 371, 51));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 120, 60, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 190, 81, 16));
        lineUsuario = new QLineEdit(centralwidget);
        lineUsuario->setObjectName(QStringLiteral("lineUsuario"));
        lineUsuario->setGeometry(QRect(340, 140, 131, 21));
        lineContra = new QLineEdit(centralwidget);
        lineContra->setObjectName(QStringLiteral("lineContra"));
        lineContra->setGeometry(QRect(340, 210, 131, 21));
        lineContra->setEchoMode(QLineEdit::Password);
        lineContra->setClearButtonEnabled(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 520, 113, 32));
        WindowEmpleado->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowEmpleado);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        WindowEmpleado->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowEmpleado);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        WindowEmpleado->setStatusBar(statusbar);

        retranslateUi(WindowEmpleado);
        QObject::connect(pushButton, SIGNAL(clicked()), WindowEmpleado, SLOT(close()));
        QObject::connect(BotonIniciar, SIGNAL(clicked()), WindowEmpleado, SLOT(close()));

        QMetaObject::connectSlotsByName(WindowEmpleado);
    } // setupUi

    void retranslateUi(QMainWindow *WindowEmpleado)
    {
        WindowEmpleado->setWindowTitle(QApplication::translate("WindowEmpleado", "Empleado", Q_NULLPTR));
        BotonIniciar->setText(QApplication::translate("WindowEmpleado", "Iniciar Sesi\303\263n", Q_NULLPTR));
        label->setText(QApplication::translate("WindowEmpleado", "Bienvenido a OrangoTango", Q_NULLPTR));
        label_2->setText(QApplication::translate("WindowEmpleado", "Usuario:", Q_NULLPTR));
        label_3->setText(QApplication::translate("WindowEmpleado", "Contrasena:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("WindowEmpleado", "Atras", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WindowEmpleado: public Ui_WindowEmpleado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWEMPLEADO_H
