#-------------------------------------------------
#
# Project created by QtCreator 2015-05-14T10:36:00
#
#-------------------------------------------------
INCLUDEPATH += C:\Program Files (x86)\MySQL\MySQL Workbench 6.0 CE\
QT       += core gui
QT +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = src
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wizardmarcas.cpp

HEADERS  += mainwindow.h \
    wizardmarcas.h

FORMS    += mainwindow.ui \
    wizardmarcas.ui
