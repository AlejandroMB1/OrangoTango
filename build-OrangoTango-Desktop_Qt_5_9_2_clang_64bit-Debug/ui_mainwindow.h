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
#include <QtWidgets/QToolBar>
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
    QWidget *centralWidget;
    QLabel *label_9;
    QLabel *label_2;
    QLineEdit *BuscarP;
    QLabel *label_6;
    QFrame *line_3;
    QLabel *label_11;
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
    QPushButton *pushButton;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuNuetros_Productos;
    QMenu *menuProyectos;
    QMenu *menuAyuda;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(770, 633);
        MainWindow->setStyleSheet(QStringLiteral(""));
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
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 410, 251, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 30, 271, 51));
        label_2->setStyleSheet(QLatin1String("border-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(85, 255, 255);"));
        BuscarP = new QLineEdit(centralWidget);
        BuscarP->setObjectName(QStringLiteral("BuscarP"));
        BuscarP->setGeometry(QRect(510, 170, 251, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 320, 181, 31));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 230, 331, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 250, 161, 31));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(380, 160, 131, 41));
        Usuario = new QLineEdit(centralWidget);
        Usuario->setObjectName(QStringLiteral("Usuario"));
        Usuario->setGeometry(QRect(510, 280, 161, 21));
        BotonNDisenos = new QCommandLinkButton(centralWidget);
        BotonNDisenos->setObjectName(QStringLiteral("BotonNDisenos"));
        BotonNDisenos->setGeometry(QRect(300, 490, 172, 41));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(12);
        font.setItalic(true);
        BotonNDisenos->setFont(font);
        BotonNDisenos->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 290, 311, 41));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(60, 20, 131, 151));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/logo.png")));
        Contra = new QLineEdit(centralWidget);
        Contra->setObjectName(QStringLiteral("Contra"));
        Contra->setGeometry(QRect(510, 350, 161, 20));
        Contra->setEchoMode(QLineEdit::Password);
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
        label_4->setGeometry(QRect(500, 250, 71, 21));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 380, 161, 31));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(500, 310, 91, 31));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 450, 331, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        BotonProyectos = new QCommandLinkButton(centralWidget);
        BotonProyectos->setObjectName(QStringLiteral("BotonProyectos"));
        BotonProyectos->setGeometry(QRect(30, 490, 231, 41));
        BotonProyectos->setFont(font);
        BotonProyectos->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        BotonRegistrarse = new QCommandLinkButton(centralWidget);
        BotonRegistrarse->setObjectName(QStringLiteral("BotonRegistrarse"));
        BotonRegistrarse->setGeometry(QRect(530, 490, 172, 41));
        BotonRegistrarse->setFont(font);
        BotonRegistrarse->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 350, 181, 31));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(10, 240, 20, 221));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 540, 113, 32));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 771, 581));
        label->setPixmap(QPixmap(QString::fromUtf8("../Imagenes/textura-de-madera-oscura-1553.jpg")));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        label_9->raise();
        label_2->raise();
        BuscarP->raise();
        label_6->raise();
        line_3->raise();
        label_11->raise();
        label_10->raise();
        Usuario->raise();
        BotonNDisenos->raise();
        label_3->raise();
        label_12->raise();
        Contra->raise();
        line_2->raise();
        BotonIniciarS->raise();
        label_4->raise();
        label_8->raise();
        label_14->raise();
        line->raise();
        BotonProyectos->raise();
        BotonRegistrarse->raise();
        label_7->raise();
        line_4->raise();
        pushButton->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 770, 22));
        menuNuetros_Productos = new QMenu(menuBar);
        menuNuetros_Productos->setObjectName(QStringLiteral("menuNuetros_Productos"));
        menuProyectos = new QMenu(menuBar);
        menuProyectos->setObjectName(QStringLiteral("menuProyectos"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuNuetros_Productos->menuAction());
        menuBar->addAction(menuProyectos->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuNuetros_Productos->addSeparator();
        menuNuetros_Productos->addAction(actionDormitorio);
        menuNuetros_Productos->addAction(actionSala);
        menuNuetros_Productos->addAction(actionComedor);
        menuNuetros_Productos->addAction(actionCocina);
        menuNuetros_Productos->addAction(actionOficina_y_Estudio);
        menuProyectos->addAction(actionIdeas);
        menuProyectos->addAction(actionConsultar_Proyecto);
        menuAyuda->addAction(actionPreguntas_Frecuentes);
        menuAyuda->addAction(actionCont_ctenos);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

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
#ifndef QT_NO_ACCESSIBILITY
        centralWidget->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">-Muebles Oficina y Estudio</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:600; color:#ffffff;\">OrangoTango</span></p></body></html>", Q_NULLPTR));
        BuscarP->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">-Muebles para Sala</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#ffffff;\">Categor\303\255as:</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffffff;\">Buscar Producto:</span></p></body></html>", Q_NULLPTR));
        BotonNDisenos->setText(QApplication::translate("MainWindow", "Nuestros Dise\303\261os", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">-Muebles para Dormitorio</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QString());
        BotonIniciarS->setText(QApplication::translate("MainWindow", "Iniciar Sesi\303\263n", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; color:#ffffff;\">Usuario:</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">-Muebles Cocina</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; color:#ffffff;\">Contrase\303\261a:</span></p></body></html>", Q_NULLPTR));
        BotonProyectos->setText(QApplication::translate("MainWindow", "Proyectos y Cotizaciones", Q_NULLPTR));
        BotonRegistrarse->setText(QApplication::translate("MainWindow", "Registrarse", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">-Muebles Comedor</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Atras", Q_NULLPTR));
        label->setText(QString());
        menuNuetros_Productos->setTitle(QApplication::translate("MainWindow", "Categorias", Q_NULLPTR));
        menuProyectos->setTitle(QApplication::translate("MainWindow", "Proyectos", Q_NULLPTR));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Ayuda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
