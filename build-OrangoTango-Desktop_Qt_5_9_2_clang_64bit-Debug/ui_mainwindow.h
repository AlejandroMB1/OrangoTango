/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDormitorio;
    QAction *actionSala;
    QAction *actionComedor;
    QAction *actionCocina;
    QAction *actionOficina_y_Estudio;
    QAction *actionIdeas;
    QAction *actionConsultar_Proyecto;
    QAction *actionPreguntas_Frecuentes;
    QAction *actionCont_ctenos;
    QAction *actionAcerca_de;
    QAction *actionManuela_de_aplicaci_n;
    QWidget *centralWidget;
    QLabel *label_9;
    QLabel *label_2;
    QLineEdit *BuscarP;
    QLabel *label_6;
    QFrame *line_3;
    QLabel *label_10;
    QLineEdit *Usuario;
    QCommandLinkButton *BotonNDisenos;
    QLabel *label_3;
    QLabel *label_12;
    QLineEdit *Contra;
    QFrame *line_2;
    QPushButton *BotonIniciarS;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_14;
    QFrame *line;
    QCommandLinkButton *BotonProyectos;
    QCommandLinkButton *BotonRegistrarse;
    QLabel *label_7;
    QFrame *line_4;
    QPushButton *atras;
    QPushButton *Buscar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuAyuda;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(788, 633);
        MainWindow->setStyleSheet(QString::fromUtf8("/*Cambiamos el color de la ventana*/\n"
"\n"
"	#MainWindow{\n"
"	\n"
"		\n"
"		\n"
"	background-color: rgb(255, 218, 158);\n"
"		/*background-color: #009688;*/\n"
"	    /*background-color: rgb(255, 128, 0);*/\n"
"	    /*background-color: rgb(255, 79, 79);*/\n"
"	}\n"
"\n"
"	/*Estilos para el bot\303\263n*/\n"
"	#atras,#BotonIniciarS,#BotonNDisenos,#BotonProyectos,#BotonRegistrarse,#Buscar{\n"
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
"	#atras:hover,#BotonIniciarS:hover,#BotonNDisenos:hover,#BotonProyectos:hover,#BotonRegistrarse:hover,#Buscar:hover{\n"
"		\n"
"	background-color: #ff7043;;\n"
"	}\n"
"\n"
"	\n"
"	/*Definimos los estilos para los QLabel*/\n"
"					\n"
"\n"
"	#Reloj{\n"
"		\n"
"		color: rgb(143, 71, 0);\n"
"	}\n"
"	\n"
"	#frame,"
                        "#frame_2,#frame_3,#frame_4{\n"
"	\n"
"	background-color: rgb(143, 71, 0);\n"
"	}"));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionDormitorio = new QAction(MainWindow);
        actionDormitorio->setObjectName(QStringLiteral("actionDormitorio"));
        actionSala = new QAction(MainWindow);
        actionSala->setObjectName(QStringLiteral("actionSala"));
        actionComedor = new QAction(MainWindow);
        actionComedor->setObjectName(QStringLiteral("actionComedor"));
        actionCocina = new QAction(MainWindow);
        actionCocina->setObjectName(QStringLiteral("actionCocina"));
        actionOficina_y_Estudio = new QAction(MainWindow);
        actionOficina_y_Estudio->setObjectName(QStringLiteral("actionOficina_y_Estudio"));
        actionIdeas = new QAction(MainWindow);
        actionIdeas->setObjectName(QStringLiteral("actionIdeas"));
        actionConsultar_Proyecto = new QAction(MainWindow);
        actionConsultar_Proyecto->setObjectName(QStringLiteral("actionConsultar_Proyecto"));
        actionPreguntas_Frecuentes = new QAction(MainWindow);
        actionPreguntas_Frecuentes->setObjectName(QStringLiteral("actionPreguntas_Frecuentes"));
        actionCont_ctenos = new QAction(MainWindow);
        actionCont_ctenos->setObjectName(QStringLiteral("actionCont_ctenos"));
        actionAcerca_de = new QAction(MainWindow);
        actionAcerca_de->setObjectName(QStringLiteral("actionAcerca_de"));
        actionManuela_de_aplicaci_n = new QAction(MainWindow);
        actionManuela_de_aplicaci_n->setObjectName(QStringLiteral("actionManuela_de_aplicaci_n"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 420, 291, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 30, 271, 51));
        QFont font;
        font.setFamily(QStringLiteral("Matura MT Script Capitals"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(85, 255, 255);"));
        BuscarP = new QLineEdit(centralWidget);
        BuscarP->setObjectName(QStringLiteral("BuscarP"));
        BuscarP->setGeometry(QRect(510, 170, 251, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 300, 211, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(15);
        label_6->setFont(font1);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 230, 331, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(340, 160, 161, 41));
        Usuario = new QLineEdit(centralWidget);
        Usuario->setObjectName(QStringLiteral("Usuario"));
        Usuario->setGeometry(QRect(510, 280, 161, 21));
        BotonNDisenos = new QCommandLinkButton(centralWidget);
        BotonNDisenos->setObjectName(QStringLiteral("BotonNDisenos"));
        BotonNDisenos->setGeometry(QRect(300, 490, 191, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        BotonNDisenos->setFont(font2);
        BotonNDisenos->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 260, 311, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(12);
        label_3->setFont(font3);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(60, 20, 131, 151));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.0/Imagenes/logo.png")));
        Contra = new QLineEdit(centralWidget);
        Contra->setObjectName(QStringLiteral("Contra"));
        Contra->setGeometry(QRect(510, 350, 161, 20));
        Contra->setEchoMode(QLineEdit::Password);
        Contra->setClearButtonEnabled(true);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(340, 240, 20, 221));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        BotonIniciarS = new QPushButton(centralWidget);
        BotonIniciarS->setObjectName(QStringLiteral("BotonIniciarS"));
        BotonIniciarS->setGeometry(QRect(530, 400, 121, 41));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(500, 250, 91, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font4.setPointSize(14);
        label_4->setFont(font4);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 380, 201, 31));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(500, 310, 111, 31));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 460, 331, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        BotonProyectos = new QCommandLinkButton(centralWidget);
        BotonProyectos->setObjectName(QStringLiteral("BotonProyectos"));
        BotonProyectos->setGeometry(QRect(30, 490, 231, 41));
        BotonProyectos->setFont(font2);
        BotonProyectos->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        BotonRegistrarse = new QCommandLinkButton(centralWidget);
        BotonRegistrarse->setObjectName(QStringLiteral("BotonRegistrarse"));
        BotonRegistrarse->setGeometry(QRect(530, 490, 172, 41));
        BotonRegistrarse->setFont(font2);
        BotonRegistrarse->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 340, 211, 31));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(10, 240, 20, 221));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        atras = new QPushButton(centralWidget);
        atras->setObjectName(QStringLiteral("atras"));
        atras->setGeometry(QRect(0, 560, 113, 32));
        Buscar = new QPushButton(centralWidget);
        Buscar->setObjectName(QStringLiteral("Buscar"));
        Buscar->setGeometry(QRect(640, 200, 113, 41));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 788, 22));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuAyuda->menuAction());
        menuAyuda->addAction(actionAcerca_de);
        menuAyuda->addAction(actionManuela_de_aplicaci_n);

        retranslateUi(MainWindow);
        QObject::connect(atras, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "OrangoTango 1.0", Q_NULLPTR));
        actionDormitorio->setText(QApplication::translate("MainWindow", "Dormitorio", Q_NULLPTR));
        actionSala->setText(QApplication::translate("MainWindow", "Sala", Q_NULLPTR));
        actionComedor->setText(QApplication::translate("MainWindow", "Comedor", Q_NULLPTR));
        actionCocina->setText(QApplication::translate("MainWindow", "Cocina", Q_NULLPTR));
        actionOficina_y_Estudio->setText(QApplication::translate("MainWindow", "Oficina y Estudio", Q_NULLPTR));
        actionIdeas->setText(QApplication::translate("MainWindow", "Ideas", Q_NULLPTR));
        actionConsultar_Proyecto->setText(QApplication::translate("MainWindow", "Consultar Cotizaci\303\263n", Q_NULLPTR));
        actionPreguntas_Frecuentes->setText(QApplication::translate("MainWindow", "Preguntas Frecuentes", Q_NULLPTR));
        actionCont_ctenos->setText(QApplication::translate("MainWindow", "Cont\303\241ctenos", Q_NULLPTR));
        actionAcerca_de->setText(QApplication::translate("MainWindow", "Acerca de...", Q_NULLPTR));
        actionManuela_de_aplicaci_n->setText(QApplication::translate("MainWindow", "Manuela de aplicaci\303\263n", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        centralWidget->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#8f4700;\">-Muebles Oficina y Estudio</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:600; color:#8f4700;\">OrangoTango</span></p></body></html>", Q_NULLPTR));
        BuscarP->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#8f4700;\">-Muebles para Sala</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#8f4700;\">Buscar Producto:</span></p></body></html>", Q_NULLPTR));
        BotonNDisenos->setText(QApplication::translate("MainWindow", "Nuestros Dise\303\261os", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#8f4700;\">-Muebles para Dormitorio</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QString());
        BotonIniciarS->setText(QApplication::translate("MainWindow", "Iniciar Sesi\303\263n", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#8f4700;\">Usuario:</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#8f4700;\">-Muebles Cocina</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#8f4700;\">Contrase\303\261a:</span></p></body></html>", Q_NULLPTR));
        BotonProyectos->setText(QApplication::translate("MainWindow", "Proyectos y Cotizaciones", Q_NULLPTR));
        BotonRegistrarse->setText(QApplication::translate("MainWindow", "Registrarse", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#8f4700;\">-Muebles Comedor</span></p></body></html>", Q_NULLPTR));
        atras->setText(QApplication::translate("MainWindow", "Atras", Q_NULLPTR));
        Buscar->setText(QApplication::translate("MainWindow", "Buscar", Q_NULLPTR));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Ayuda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
