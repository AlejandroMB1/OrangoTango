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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_cuenta
{
public:
    QPushButton *IralCatalogo;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QToolButton *toolButton;

    void setupUi(QDialog *cuenta)
    {
        if (cuenta->objectName().isEmpty())
            cuenta->setObjectName(QStringLiteral("cuenta"));
        cuenta->resize(692, 566);
        cuenta->setStyleSheet(QString::fromUtf8("/*Cambiamos el color de la ventana*/\n"
"\n"
"	#cuenta{\n"
"		\n"
"	background-color: rgb(255, 218, 158);\n"
"		/*background-color: #009688;*/\n"
"	    /*background-color: rgb(255, 128, 0);*/\n"
"	    /*background-color: rgb(255, 79, 79);*/\n"
"	}\n"
"\n"
"	/*Estilos para el bot\303\263n*/\n"
"	#IralCatalogo,#pushButton,#pushButton_2,#pushButton_3{\n"
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
"	#IralCatalogo:hover,#pushButton:hover,#pushButton_2:hover,#pushButton_3:hove{\n"
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
""));
        IralCatalogo = new QPushButton(cuenta);
        IralCatalogo->setObjectName(QStringLiteral("IralCatalogo"));
        IralCatalogo->setGeometry(QRect(270, 440, 131, 51));
        label_2 = new QLabel(cuenta);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 70, 201, 51));
        QFont font;
        font.setPointSize(18);
        label_2->setFont(font);
        label_3 = new QLabel(cuenta);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 20, 191, 191));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/predefinida.jpg")));
        pushButton = new QPushButton(cuenta);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(94, 230, 91, 23));
        label = new QLabel(cuenta);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 200, 81, 31));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label_4 = new QLabel(cuenta);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 240, 81, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(cuenta);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(300, 280, 81, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(cuenta);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 350, 171, 31));
        label_6->setFont(font1);
        pushButton_2 = new QPushButton(cuenta);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 200, 75, 23));
        pushButton_3 = new QPushButton(cuenta);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(550, 240, 75, 23));
        toolButton = new QToolButton(cuenta);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(400, 290, 25, 19));

        retranslateUi(cuenta);

        QMetaObject::connectSlotsByName(cuenta);
    } // setupUi

    void retranslateUi(QDialog *cuenta)
    {
        cuenta->setWindowTitle(QApplication::translate("cuenta", "Dialog", Q_NULLPTR));
        IralCatalogo->setText(QApplication::translate("cuenta", "Ir al Catalogo", Q_NULLPTR));
        label_2->setText(QApplication::translate("cuenta", "Datos Personales:", Q_NULLPTR));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("cuenta", "Subir Foto", Q_NULLPTR));
        label->setText(QApplication::translate("cuenta", "Nombre:", Q_NULLPTR));
        label_4->setText(QApplication::translate("cuenta", "Usuario:", Q_NULLPTR));
        label_5->setText(QApplication::translate("cuenta", "Contrase\303\261a", Q_NULLPTR));
        label_6->setText(QApplication::translate("cuenta", "Productos Adquiridos:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("cuenta", "Cambiar", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("cuenta", "Cambiar", Q_NULLPTR));
        toolButton->setText(QApplication::translate("cuenta", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cuenta: public Ui_cuenta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUENTA_H
