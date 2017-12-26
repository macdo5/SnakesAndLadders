# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = SnakesAndLadders
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += BoardSquare.cpp MainMenu.cpp.cc NewGameForm.cpp.cc Player.cpp SnakesAndLaddersGameForm.cpp.cc main.cpp
HEADERS += BoardSquare.h MainMenu.h NewGameForm.h Player.h SnakesAndLaddersGameForm.h
FORMS += MainMenu.ui NewGameForm.ui SnakesAndLaddersGameForm.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
equals(QT_MAJOR_VERSION, 4) {
QMAKE_CXXFLAGS += -std=c++14
}
