#-------------------------------------------------
#
# Project created by QtCreator 2018-07-29T12:02:05
#
#-------------------------------------------------
QT       += testlib
QT       -= gui

TARGET = playLibraryTest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    cdirectortest.cpp \
    csingertest.cpp \
    main.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    cdirectortest.h \
    csingertest.h

INCLUDEPATH += $${PWD}/includes
LIBS += -L$${PWD}/libs -lPlayLibrary
