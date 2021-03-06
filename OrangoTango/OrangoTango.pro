#-------------------------------------------------
#
# Project created by QtCreator 2017-10-21T15:03:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OrangoTango
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    cliente.cpp \
    registro.cpp \
    producto.cpp \
    agregarproducto.cpp \
    factura.cpp \
    facturar.cpp \
    cuenta.cpp \
    inicio.cpp \
    windowempleado.cpp \
    carrito.cpp \
    catalogo.cpp \
    ventcatalogo.cpp \
    mainempresa.cpp \
    informes.cpp \
    eliminarproducto.cpp \
    tarjeta.cpp

HEADERS += \
        mainwindow.h \
    cliente.h \
    registro.h \
    producto.h \
    agregarproducto.h \
    factura.h \
    facturar.h \
    cuenta.h \
    inicio.h \
    windowempleado.h \
    carrito.h \
    catalogo.h \
    ventcatalogo.h \
    mainempresa.h \
    informes.h \
    eliminarproducto.h \
    tarjeta.h

FORMS += \
        mainwindow.ui \
    registro.ui \
    agregarproducto.ui \
    facturar.ui \
    cuenta.ui \
    inicio.ui \
    windowempleado.ui \
    ventcatalogo.ui \
    mainempresa.ui \
    informes.ui \
    eliminarproducto.ui \
    tarjeta.ui
