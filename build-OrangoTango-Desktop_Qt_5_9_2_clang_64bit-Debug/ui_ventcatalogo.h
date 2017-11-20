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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentCatalogo
{
public:
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
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

    void setupUi(QScrollArea *VentCatalogo)
    {
        if (VentCatalogo->objectName().isEmpty())
            VentCatalogo->setObjectName(QStringLiteral("VentCatalogo"));
        VentCatalogo->setWindowModality(Qt::NonModal);
        VentCatalogo->resize(691, 579);
        VentCatalogo->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        VentCatalogo->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 689, 577));
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
        scrollAreaWidgetContents_2->setGeometry(QRect(-315, 0, 967, 2833));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Matura MT Script Capitals"));
        font.setPointSize(36);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 2, 1, 2);

        label_16 = new QLabel(scrollAreaWidgetContents_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/carrito.jpg")));

        gridLayout_2->addWidget(label_16, 0, 4, 2, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 5, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setFamily(QStringLiteral("Matura MT Script Capitals"));
        font1.setPointSize(26);
        label_4->setFont(font1);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 2);

        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/cocina3.jpg")));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 3);

        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/cocina1.jpg")));

        gridLayout_2->addWidget(label_2, 2, 3, 1, 3);

        commandLinkButton = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        commandLinkButton->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton, 3, 0, 1, 1);

        commandLinkButton_4 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton_4, 3, 3, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/cocina4.jpg")));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 3);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/cocina2.jpg")));

        gridLayout_2->addWidget(label_6, 4, 3, 1, 3);

        commandLinkButton_3 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton_3, 5, 0, 1, 1);

        commandLinkButton_9 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_9->setObjectName(QStringLiteral("commandLinkButton_9"));
        commandLinkButton_9->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton_9, 5, 3, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        gridLayout_2->addWidget(label_7, 6, 0, 1, 2);

        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/ba\303\261o1.jpg")));

        gridLayout_2->addWidget(label_8, 7, 0, 1, 3);

        commandLinkButton_10 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_10->setObjectName(QStringLiteral("commandLinkButton_10"));
        commandLinkButton_10->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton_10, 8, 0, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout_2->addWidget(label_9, 9, 0, 1, 3);

        label_10 = new QLabel(scrollAreaWidgetContents_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/armario.jpg")));

        gridLayout_2->addWidget(label_10, 10, 0, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/armario2.jpg")));

        gridLayout_2->addWidget(label_11, 10, 1, 1, 4);

        commandLinkButton_11 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_11->setObjectName(QStringLiteral("commandLinkButton_11"));
        commandLinkButton_11->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton_11, 11, 0, 1, 1);

        commandLinkButton_12 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_12->setObjectName(QStringLiteral("commandLinkButton_12"));
        commandLinkButton_12->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton_12, 11, 2, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        gridLayout_2->addWidget(label_12, 12, 0, 1, 2);

        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("#ventCatalogo{\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/vario1.jpg")));

        gridLayout_2->addWidget(label_13, 13, 0, 1, 3);

        label_14 = new QLabel(scrollAreaWidgetContents_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/vario3.jpg")));

        gridLayout_2->addWidget(label_14, 13, 3, 1, 1);

        commandLinkButton_13 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_13->setObjectName(QStringLiteral("commandLinkButton_13"));
        commandLinkButton_13->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton_13, 14, 0, 1, 1);

        commandLinkButton_14 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_14->setObjectName(QStringLiteral("commandLinkButton_14"));
        commandLinkButton_14->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton_14, 14, 3, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/vario2.jpg")));

        gridLayout_2->addWidget(label_15, 15, 0, 1, 3);

        commandLinkButton_15 = new QCommandLinkButton(scrollAreaWidgetContents_2);
        commandLinkButton_15->setObjectName(QStringLiteral("commandLinkButton_15"));
        commandLinkButton_15->setFont(font2);

        gridLayout_2->addWidget(commandLinkButton_15, 16, 0, 1, 1);

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
    } // retranslateUi

};

namespace Ui {
    class VentCatalogo: public Ui_VentCatalogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTCATALOGO_H
