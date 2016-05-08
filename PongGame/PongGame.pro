#-------------------------------------------------
#
# Project created by QtCreator 2016-04-20T22:29:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PongGame
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp\
    Racket.cpp \
    Table.cpp \
    Ball.cpp \
    Game.cpp

HEADERS  += \
    Racket.h \
    Table.h \
    Ball.h \
    Game.h

FORMS    +=
