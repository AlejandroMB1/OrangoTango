/********************************************************************************
** Form generated from reading UI file 'ventana1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA1_H
#define UI_VENTANA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Ventana1
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Ventana1)
    {
        if (Ventana1->objectName().isEmpty())
            Ventana1->setObjectName(QStringLiteral("Ventana1"));
        Ventana1->resize(824, 512);
        label = new QLabel(Ventana1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-50, -80, 831, 511));
        label->setPixmap(QPixmap(QString::fromUtf8("../textura-de-madera-oscura-1553.jpg")));
        label_2 = new QLabel(Ventana1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 20, 261, 91));
        label_3 = new QLabel(Ventana1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 150, 221, 181));
        label_4 = new QLabel(Ventana1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 30, 221, 41));
        label_5 = new QLabel(Ventana1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(610, 260, 47, 13));
        label_6 = new QLabel(Ventana1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(350, 400, 309, 39));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("Perpetua Titling MT"));
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setAutoFillBackground(false);
        label_6->setMidLineWidth(1);
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(false);
        label_6->setIndent(2);
        label_6->setTextInteractionFlags(Qt::NoTextInteraction);
        label_7 = new QLabel(Ventana1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 400, 309, 39));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setBaseSize(QSize(0, 0));
        label_7->setFont(font);
        label_7->setAutoFillBackground(false);
        label_7->setMidLineWidth(1);
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setWordWrap(false);
        label_7->setIndent(2);
        label_7->setTextInteractionFlags(Qt::NoTextInteraction);

        retranslateUi(Ventana1);

        QMetaObject::connectSlotsByName(Ventana1);
    } // setupUi

    void retranslateUi(QDialog *Ventana1)
    {
        Ventana1->setWindowTitle(QApplication::translate("Ventana1", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Ventana1", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("Ventana1", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#ffffff;\">ORANGOTANGO</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Ventana1", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("Ventana1", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#eb7144;\">ORANGOTANGO</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("Ventana1", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#eb7144;\">ORANGOTANGO</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ventana1: public Ui_Ventana1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA1_H
