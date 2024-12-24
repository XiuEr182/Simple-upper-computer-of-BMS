#-------------------------------------------------
#
# Project created by QtCreator 2024-03-21T17:36:22
#
#-------------------------------------------------

QT       += core gui
QT       += core gui
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS


# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
UI_DIR=./UI

SOURCES += \
        main.cpp \
    canmanager.cpp \
    mainwindow.cpp \
    mycanthread.cpp \
    myparse.cpp \
    batt.cpp \
    tempage.cpp \
    voltagepage.cpp \
    DrawCurve.cpp

HEADERS += \
        mainwindow.h \
    ControlCAN.h \
    includes.h \
    canmanager.h \
    mycanthread.h \
    myparse.h \
    batt.h \
    tempage.h \
    voltagepage.h \
    DrawCurve.h

FORMS += \
    mainwindow.ui \
    tempage.ui \
    voltagepage.ui

win32: LIBS += -L$$PWD/./ -lControlCAN

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

#CONFIG += c++11
