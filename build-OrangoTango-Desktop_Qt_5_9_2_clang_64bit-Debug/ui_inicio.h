/********************************************************************************
** Form generated from reading UI file 'inicio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_H
#define UI_INICIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inicio
{
public:
    QAction *actionAcerca_de;
    QAction *actionManual_de_Aplicaici_n;
    QWidget *inicio;
    QPushButton *BotonCliente;
    QPushButton *BotonEmpleado;
    QLabel *Titulo;
    QLabel *Reloj;
    QFrame *frame;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_4;
    QMenuBar *menu;
    QMenu *menuInicio;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Inicio)
    {
        if (Inicio->objectName().isEmpty())
            Inicio->setObjectName(QStringLiteral("Inicio"));
        Inicio->resize(619, 471);
        QFont font;
        font.setFamily(QStringLiteral("Matura MT Script Capitals"));
        Inicio->setFont(font);
        Inicio->setStyleSheet(QString::fromUtf8("/*Cambiamos el color de la ventana*/\n"
"\n"
"	#Inicio{\n"
"		\n"
"	background-color: rgb(255, 218, 158);\n"
"		/*background-color: #009688;*/\n"
"	    /*background-color: rgb(255, 128, 0);*/\n"
"	    /*background-color: rgb(255, 79, 79);*/\n"
"	}\n"
"\n"
"	/*Estilos para el bot\303\263n*/\n"
"	#BotonCliente,#BotonEmpleado{\n"
"		background-color: rgb(143, 71, 0);\n"
"		border-radius: 4px;\n"
"		color: #fff;\n"
"		font-family: 'Roboto';\n"
"		font-size: 17px;\n"
"	}\n"
"	\n"
"	\n"
"	/*Definimos el estilo para un efecto hover sobre el bot\303\263n,\n"
"	este cambiar\303\241 su background cuando pasemos el mouse por\n"
"	encima*/\n"
"	#BotonEmpleado:hover,#BotonCliente::hover{\n"
"		\n"
"	background-color: #ff7043;;\n"
"	}\n"
"\n"
"	\n"
"	/*Definimos los estilos para los QLabel*/\n"
"	#Titulo{\n"
"		font-family: 'Matura MT Script Capitals';\n"
"		color: rgb(143, 71, 0);\n"
"		\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	\n"
"	}\n"
"\n"
"	#Reloj{\n"
"		\n"
"		color: rgb(143, 71, 0);\n"
"	}\n"
"	\n"
"	#f"
                        "rame,#frame_2,#frame_3,#frame_4{\n"
"	\n"
"	background-color: rgb(143, 71, 0);\n"
"	}"));
        actionAcerca_de = new QAction(Inicio);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        actionManual_de_Aplicaici_n = new QAction(Inicio);
        actionManual_de_Aplicaici_n->setObjectName(QStringLiteral("actionManual_de_Aplicaici_n"));
        inicio = new QWidget(Inicio);
        inicio->setObjectName(QStringLiteral("inicio"));
        BotonCliente = new QPushButton(inicio);
        BotonCliente->setObjectName(QStringLiteral("BotonCliente"));
        BotonCliente->setGeometry(QRect(210, 310, 161, 61));
        BotonEmpleado = new QPushButton(inicio);
        BotonEmpleado->setObjectName(QStringLiteral("BotonEmpleado"));
        BotonEmpleado->setGeometry(QRect(210, 210, 161, 61));
        Titulo = new QLabel(inicio);
        Titulo->setObjectName(QStringLiteral("Titulo"));
        Titulo->setGeometry(QRect(40, 60, 551, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Matura MT Script Capitals"));
        font1.setPointSize(31);
        font1.setUnderline(false);
        Titulo->setFont(font1);
        Reloj = new QLabel(inicio);
        Reloj->setObjectName(QStringLiteral("Reloj"));
        Reloj->setGeometry(QRect(500, 10, 101, 21));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        Reloj->setFont(font2);
        frame = new QFrame(inicio);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 130, 571, 16));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(inicio);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(30, 50, 571, 16));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(inicio);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(40, 40, 16, 111));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(inicio);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(580, 40, 16, 111));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        Inicio->setCentralWidget(inicio);
        menu = new QMenuBar(Inicio);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(0, 0, 619, 22));
        menuInicio = new QMenu(menu);
        menuInicio->setObjectName(QStringLiteral("menuInicio"));
        Inicio->setMenuBar(menu);
        statusbar = new QStatusBar(Inicio);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Inicio->setStatusBar(statusbar);

        menu->addAction(menuInicio->menuAction());
        menuInicio->addAction(actionAcerca_de);
        menuInicio->addAction(actionManual_de_Aplicaici_n);

        retranslateUi(Inicio);
        QObject::connect(BotonCliente, SIGNAL(clicked()), Inicio, SLOT(close()));
        QObject::connect(BotonEmpleado, SIGNAL(clicked()), Inicio, SLOT(close()));

        QMetaObject::connectSlotsByName(Inicio);
    } // setupUi

    void retranslateUi(QMainWindow *Inicio)
    {
        Inicio->setWindowTitle(QApplication::translate("Inicio", "Inicio", Q_NULLPTR));
        actionAcerca_de->setText(QApplication::translate("Inicio", "Acerca de...", Q_NULLPTR));
        actionManual_de_Aplicaici_n->setText(QApplication::translate("Inicio", "Manual de Aplicaci\303\263n.", Q_NULLPTR));
        BotonCliente->setText(QApplication::translate("Inicio", "Cliente", Q_NULLPTR));
        BotonEmpleado->setText(QApplication::translate("Inicio", "Empleado", Q_NULLPTR));
        Titulo->setText(QApplication::translate("Inicio", "  Bienvenido a OrangoTango", Q_NULLPTR));
        Reloj->setText(QString());
        menuInicio->setTitle(QApplication::translate("Inicio", "Ayuda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Inicio: public Ui_Inicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_H
