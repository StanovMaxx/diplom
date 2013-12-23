#-------------------------------------------------
#
# Project created by QtCreator 2013-12-09T08:42:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mynew
TEMPLATE = app

LIBS += -lrt
LIBS += -lm
LIBS += -ipthread
LIBS += -lgsl
LIBS += -lgslcblas
SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
