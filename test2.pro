#-------------------------------------------------
#
# Project created by QtCreator 2025-06-30T08:13:52
#
#-------------------------------------------------

QT       += core gui
QT       += core gui network
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    flightinfo.cpp \
    weatherinfo.cpp \
    currencyinfo.cpp \
    newsinfo.cpp

HEADERS  += mainwindow.h \
    flightinfo.h \
    weatherinfo.h \
    currencyinfo.h \
    newsinfo.h

FORMS    += mainwindow.ui
