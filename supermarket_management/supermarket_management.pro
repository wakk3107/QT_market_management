#-------------------------------------------------
#
# Project created by QtCreator 2021-11-12T18:20:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = supermarket_management
TEMPLATE = app


SOURCES += main.cpp\
        add_goods.cpp \
    mainwindow.cpp \
    query_goods.cpp \
    del_goods.cpp \
    modify_goods.cpp \
    control_page.cpp \
    buy_goods.cpp

HEADERS  += add_goods.h \
    mainwindow.h \
    query_goods.h \
    del_goods.h \
    modify_goods.h \
    control_page.h \
    buy_goods.h

FORMS    += add_goods.ui \
    mainwindow.ui \
    query_goods.ui \
    del_goods.ui \
    modify_goods.ui \
    control_page.ui \
    buy_goods.ui
CONFIG +=C++11
