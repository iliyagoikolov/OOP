QT       += core

QT       -= gui

TARGET = lab1
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    complex.cpp \
    console.cpp \
    polinom.cpp

HEADERS += \
    complex.h \
    console.h \
    polinom.h \
    number.h
