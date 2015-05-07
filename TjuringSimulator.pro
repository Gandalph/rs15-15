#-------------------------------------------------
#
# Project created by QtCreator 2015-04-03T18:26:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TjuringSimulator
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11


SOURCES += main.cpp\
        mainwindow.cpp \
    graph.cpp \
    graphgraphicsscene.cpp \
    instructionlab.cpp \
    transition.cpp \
    state.cpp \
    linijskekomande.cpp \
    transitioninstruction.cpp

HEADERS  += mainwindow.h \
    enumeration.h \
    graph.h \
    graphgraphicsscene.h \
    instructionlab.h \
    transition.h \
    state.h \
    linijskekomande.h \
    transitioninstruction.h

FORMS    += mainwindow.ui \
    graph.ui \
    linijskekomande.ui \
    transitioninstruction.ui
