QT += core
QT -= gui

CONFIG += c++11

TARGET = funcPtrTest
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    sort.cpp \
    mythread.cpp

HEADERS += \
    sort.h \
    mythread.h
