#-------------------------------------------------
#
# Project created by QtCreator 2018-07-29T11:55:01
#
#-------------------------------------------------
QT       -= gui

TARGET = PlayLibrary
TEMPLATE = lib

DEFINES += PLAYLIBRARY_LIBRARY
DEFINES += QT_DEPRECATED_WARNINGS
DESTDIR = $${PWD}/../PlayLibraryTest/libs

SOURCES += \
    cplaylibrary.cpp \
    cdirector.cpp \
    csinger.cpp

HEADERS += \
    cplaylibrary.h \
    playlibrary_global.h \
    cdirector.h \
    csinger.h
