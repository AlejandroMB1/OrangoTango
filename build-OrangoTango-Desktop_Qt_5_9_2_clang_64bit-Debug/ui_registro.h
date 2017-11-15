/********************************************************************************
** Form generated from reading UI file 'registro.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_H
#define UI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Registro
{
public:
    QLineEdit *Nombre;
    QLabel *label;
    QPushButton *BotonCrearC;
    QLineEdit *Cedula;
    QLineEdit *Telefono;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *Sexo;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *Direccion;
    QLineEdit *Correo;
    QLineEdit *Usuario;
    QLineEdit *Contra;
    QLineEdit *Palabra;
    QComboBox *EstadoC;
    QLabel *label_14;
    QLineEdit *Celular;
    QDateEdit *fecha;

    void setupUi(QDialog *Registro)
    {
        if (Registro->objectName().isEmpty())
            Registro->setObjectName(QStringLiteral("Registro"));
        Registro->resize(700, 459);
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(11);
        Registro->setFont(font);
        Nombre = new QLineEdit(Registro);
        Nombre->setObjectName(QStringLiteral("Nombre"));
        Nombre->setGeometry(QRect(80, 110, 221, 21));
        Nombre->setFont(font);
        label = new QLabel(Registro);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 90, 141, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Tahoma"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        BotonCrearC = new QPushButton(Registro);
        BotonCrearC->setObjectName(QStringLiteral("BotonCrearC"));
        BotonCrearC->setGeometry(QRect(380, 350, 171, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        BotonCrearC->setFont(font2);
        Cedula = new QLineEdit(Registro);
        Cedula->setObjectName(QStringLiteral("Cedula"));
        Cedula->setGeometry(QRect(80, 200, 221, 20));
        Cedula->setFont(font);
        Telefono = new QLineEdit(Registro);
        Telefono->setObjectName(QStringLiteral("Telefono"));
        Telefono->setGeometry(QRect(80, 240, 221, 20));
        Telefono->setFont(font);
        label_2 = new QLabel(Registro);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 140, 161, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(Registro);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(500, 270, 101, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(Registro);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 180, 81, 21));
        label_4->setMinimumSize(QSize(81, 0));
        label_4->setFont(font1);
        label_5 = new QLabel(Registro);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 270, 51, 21));
        label_5->setFont(font1);
        Sexo = new QComboBox(Registro);
        Sexo->setObjectName(QStringLiteral("Sexo"));
        Sexo->setGeometry(QRect(380, 290, 81, 22));
        label_6 = new QLabel(Registro);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 40, 141, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Tahoma"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(Registro);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 320, 141, 21));
        label_7->setFont(font1);
        label_8 = new QLabel(Registro);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 220, 141, 21));
        label_8->setFont(font1);
        label_9 = new QLabel(Registro);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 370, 161, 21));
        label_9->setFont(font1);
        label_10 = new QLabel(Registro);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(430, 40, 141, 21));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(Registro);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(380, 170, 141, 21));
        label_11->setFont(font1);
        label_12 = new QLabel(Registro);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(380, 120, 141, 21));
        label_12->setFont(font1);
        label_13 = new QLabel(Registro);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(380, 220, 141, 21));
        label_13->setFont(font1);
        Direccion = new QLineEdit(Registro);
        Direccion->setObjectName(QStringLiteral("Direccion"));
        Direccion->setGeometry(QRect(80, 340, 221, 20));
        Correo = new QLineEdit(Registro);
        Correo->setObjectName(QStringLiteral("Correo"));
        Correo->setGeometry(QRect(80, 390, 231, 20));
        Usuario = new QLineEdit(Registro);
        Usuario->setObjectName(QStringLiteral("Usuario"));
        Usuario->setGeometry(QRect(380, 140, 221, 20));
        Contra = new QLineEdit(Registro);
        Contra->setObjectName(QStringLiteral("Contra"));
        Contra->setGeometry(QRect(380, 190, 221, 20));
        Contra->setFont(font);
        Contra->setEchoMode(QLineEdit::Password);
        Palabra = new QLineEdit(Registro);
        Palabra->setObjectName(QStringLiteral("Palabra"));
        Palabra->setGeometry(QRect(380, 240, 221, 20));
        Palabra->setEchoMode(QLineEdit::Password);
        EstadoC = new QComboBox(Registro);
        EstadoC->setObjectName(QStringLiteral("EstadoC"));
        EstadoC->setGeometry(QRect(500, 290, 101, 21));
        label_14 = new QLabel(Registro);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 270, 81, 21));
        label_14->setMinimumSize(QSize(81, 0));
        label_14->setFont(font1);
        Celular = new QLineEdit(Registro);
        Celular->setObjectName(QStringLiteral("Celular"));
        Celular->setGeometry(QRect(80, 290, 221, 20));
        Celular->setFont(font);
        fecha = new QDateEdit(Registro);
        fecha->setObjectName(QStringLiteral("fecha"));
        fecha->setGeometry(QRect(80, 160, 241, 24));

        retranslateUi(Registro);

        QMetaObject::connectSlotsByName(Registro);
    } // setupUi

    void retranslateUi(QDialog *Registro)
    {
        Registro->setWindowTitle(QApplication::translate("Registro", "Dialog", Q_NULLPTR));
        Nombre->setText(QString());
        label->setText(QApplication::translate("Registro", "Nombre completo:", Q_NULLPTR));
        BotonCrearC->setText(QApplication::translate("Registro", "Crear Cuenta!", Q_NULLPTR));
        label_2->setText(QApplication::translate("Registro", "Fecha de Nacimiento:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Registro", "Estado Civil:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Registro", "Cedula:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Registro", "Sexo:", Q_NULLPTR));
        Sexo->clear();
        Sexo->insertItems(0, QStringList()
         << QApplication::translate("Registro", "Hombre", Q_NULLPTR)
         << QApplication::translate("Registro", "Mujer", Q_NULLPTR)
         << QApplication::translate("Registro", "Otros", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("Registro", "Datos Personales", Q_NULLPTR));
        label_7->setText(QApplication::translate("Registro", "Direcci\303\263n:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Registro", "Telefono:", Q_NULLPTR));
        label_9->setText(QApplication::translate("Registro", "Correo electronico:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Registro", "Cuenta", Q_NULLPTR));
        label_11->setText(QApplication::translate("Registro", "Contrase\303\261a:", Q_NULLPTR));
        label_12->setText(QApplication::translate("Registro", "Usuario:", Q_NULLPTR));
        label_13->setText(QApplication::translate("Registro", "Palabra secreta:", Q_NULLPTR));
        EstadoC->clear();
        EstadoC->insertItems(0, QStringList()
         << QApplication::translate("Registro", "Soltero", Q_NULLPTR)
         << QApplication::translate("Registro", "Uni\303\263n Libre", Q_NULLPTR)
         << QApplication::translate("Registro", "Casado", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("Registro", "Celular:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Registro: public Ui_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
