/********************************************************************************
** Form generated from reading UI file 'ventcatalogo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTCATALOGO_H
#define UI_VENTCATALOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentCatalogo
{
public:
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label;
    QLabel *label_16;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_4;
    QLabel *label_5;
    QLabel *label_6;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_9;
    QLabel *label_7;
    QLabel *label_8;
    QCommandLinkButton *commandLinkButton_10;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QCommandLinkButton *commandLinkButton_11;
    QCommandLinkButton *commandLinkButton_12;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QCommandLinkButton *commandLinkButton_13;
    QCommandLinkButton *commandLinkButton_14;
    QLabel *label_15;
    QCommandLinkButton *commandLinkButton_15;
    QTableWidget *tablaProdu;
    QPushButton *Pagar;

    void setupUi(QScrollArea *VentCatalogo)
    {
        if (VentCatalogo->objectName().isEmpty())
            VentCatalogo->setObjectName(QStringLiteral("VentCatalogo"));
        VentCatalogo->setWindowModality(Qt::NonModal);
        VentCatalogo->resize(1306, 628);
        VentCatalogo->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        VentCatalogo->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1304, 626));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(scrollAreaWidgetContents);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents_2{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"	/*Estilos para el bot\303\263n*/\n"
"	#commandLinkButton,#commandLinkButton_10,#commandLinkButton_11,#commandLinkButton_12,#commandLinkButton_13,#commandLinkButton_14,#commandLinkButton_15,#commandLinkButton_3,#commandLinkButton_4,#commandLinkButton_9{\n"
"		\n"
"	background-color: rgb(143, 71, 0);\n"
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
"	#commandLinkButton:hover,#commandLinkButton_10:hover,#commandLinkButton_11:hover,#commandLinkButton_12:hover,#commandLinkButton_13:hover,#commandLinkButton_14:hover,#commandLinkButton_15:hover,#commandLinkButton_3:hover,#commandLinkButton_4:hover,#commandLinkButton_9:hover{\n"
"		\n"
"	background-color: #ff7043;;\n"
"	}\n"
"\n"
"	"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(8, 8, 1262, 584));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(435, 12, 156, 43));
        QFont font;
        font.setFamily(QStringLiteral("Matura MT Script Capitals"));
        font.setPointSize(36);
        label->setFont(font);
        label_16 = new QLabel(scrollAreaWidgetContents_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(857, 12, 16, 16));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/carrito.jpg")));
        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1020, 50, 99, 32));
        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(12, 69, 271, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Matura MT Script Capitals"));
        font1.setPointSize(26);
        label_4->setFont(font1);
        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(12, 110, 16, 16));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/cocina3.jpg")));
        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(646, 110, 16, 16));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/cocina1.jpg")));
        commandLinkButton = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(6, 136, 209, 40));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        commandLinkButton->setFont(font2);
        commandLinkButton_4 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(640, 136, 209, 40));
        commandLinkButton_4->setFont(font2);
        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(12, 182, 16, 16));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/cocina4.jpg")));
        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(646, 182, 16, 16));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/cocina2.jpg")));
        commandLinkButton_3 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(6, 208, 209, 40));
        commandLinkButton_3->setFont(font2);
        commandLinkButton_9 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_9->setObjectName(QStringLiteral("commandLinkButton_9"));
        commandLinkButton_9->setGeometry(QRect(640, 208, 209, 40));
        commandLinkButton_9->setFont(font2);
        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(12, 254, 247, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(12, 295, 16, 16));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/ba\303\261o1.jpg")));
        commandLinkButton_10 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_10->setObjectName(QStringLiteral("commandLinkButton_10"));
        commandLinkButton_10->setGeometry(QRect(6, 321, 209, 40));
        commandLinkButton_10->setFont(font2);
        label_9 = new QLabel(scrollAreaWidgetContents_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(12, 367, 323, 31));
        label_9->setFont(font1);
        label_10 = new QLabel(scrollAreaWidgetContents_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(12, 408, 16, 16));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/armario.jpg")));
        label_11 = new QLabel(scrollAreaWidgetContents_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(223, 408, 16, 16));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/armario2.jpg")));
        commandLinkButton_11 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_11->setObjectName(QStringLiteral("commandLinkButton_11"));
        commandLinkButton_11->setGeometry(QRect(6, 434, 209, 40));
        commandLinkButton_11->setFont(font2);
        commandLinkButton_12 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_12->setObjectName(QStringLiteral("commandLinkButton_12"));
        commandLinkButton_12->setGeometry(QRect(429, 434, 209, 40));
        commandLinkButton_12->setFont(font2);
        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(12, 480, 252, 31));
        label_12->setFont(font1);
        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(12, 521, 16, 16));
        label_13->setStyleSheet(QLatin1String("#ventCatalogo{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/vario1.jpg")));
        label_14 = new QLabel(scrollAreaWidgetContents_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(646, 521, 16, 16));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/vario3.jpg")));
        commandLinkButton_13 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_13->setObjectName(QStringLiteral("commandLinkButton_13"));
        commandLinkButton_13->setGeometry(QRect(6, 547, 209, 40));
        commandLinkButton_13->setFont(font2);
        commandLinkButton_14 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_14->setObjectName(QStringLiteral("commandLinkButton_14"));
        commandLinkButton_14->setGeometry(QRect(640, 547, 209, 40));
        commandLinkButton_14->setFont(font2);
        label_15 = new QLabel(scrollAreaWidgetContents_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(12, 593, 16, 16));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/vario2.jpg")));
        commandLinkButton_15 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_15->setObjectName(QStringLiteral("commandLinkButton_15"));
        commandLinkButton_15->setGeometry(QRect(6, 619, 209, 40));
        commandLinkButton_15->setFont(font2);
        tablaProdu = new QTableWidget(scrollAreaWidgetContents_2);
        tablaProdu->setObjectName(QStringLiteral("tablaProdu"));
        tablaProdu->setGeometry(QRect(915, 110, 311, 371));
        Pagar = new QPushButton(scrollAreaWidgetContents_2);
        Pagar->setObjectName(QStringLiteral("Pagar"));
        Pagar->setGeometry(QRect(1010, 500, 141, 51));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        VentCatalogo->setWidget(scrollAreaWidgetContents);

        retranslateUi(VentCatalogo);

        QMetaObject::connectSlotsByName(VentCatalogo);
    } // setupUi

    void retranslateUi(QScrollArea *VentCatalogo)
    {
        VentCatalogo->setWindowTitle(QApplication::translate("VentCatalogo", "ScrollArea", Q_NULLPTR));
        label->setText(QApplication::translate("VentCatalogo", "Cat\303\241logo", Q_NULLPTR));
        label_16->setText(QString());
        pushButton->setText(QApplication::translate("VentCatalogo", "Resumen", Q_NULLPTR));
        label_4->setText(QApplication::translate("VentCatalogo", "Muebles para Cocina:", Q_NULLPTR));
        label_3->setText(QString());
        label_2->setText(QString());
        commandLinkButton->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        commandLinkButton_4->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        label_5->setText(QString());
        label_6->setText(QString());
        commandLinkButton_3->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        commandLinkButton_9->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        label_7->setText(QApplication::translate("VentCatalogo", "Muebles para Ba\303\261o:", Q_NULLPTR));
        label_8->setText(QString());
        commandLinkButton_10->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        label_9->setText(QApplication::translate("VentCatalogo", "Muebles para Dormitorio:", Q_NULLPTR));
        label_10->setText(QString());
        label_11->setText(QString());
        commandLinkButton_11->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        commandLinkButton_12->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        label_12->setText(QApplication::translate("VentCatalogo", "Productos Variados:", Q_NULLPTR));
        label_13->setText(QString());
        label_14->setText(QString());
        commandLinkButton_13->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        commandLinkButton_14->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        label_15->setText(QString());
        commandLinkButton_15->setText(QApplication::translate("VentCatalogo", "Agregar al Carrito", Q_NULLPTR));
        Pagar->setText(QApplication::translate("VentCatalogo", "PAGAR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentCatalogo: public Ui_VentCatalogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTCATALOGO_H
