#-------------------------------------------------
#
# Project created by QtCreator 2022-05-18T16:13:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = firstshifr
TEMPLATE = app


SOURCES += main.cpp\
        firstshifr.cpp \
    secondshifr.cpp \
    vigenerencrypt.cpp

HEADERS  += firstshifr.h \
    secondshifr.h \
    vigenerencrypt.h

FORMS    += firstshifr.ui \
    secondshifr.ui

RESOURCES += \
    recource.qrc
