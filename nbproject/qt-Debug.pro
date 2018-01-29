# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = SnakesAndLadders
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += BoardSquare.cpp Dice.cpp GameForm.cpp.cc GameManager.cpp Ladder.cpp MainMenu.cpp.cc NewGameForm.cpp.cc Player.cpp Snake.cpp SnakesAndLaddersGameForm.cpp.cc Transporter.cpp main.cpp
HEADERS += BoardSquare.h Dice.h GameForm.h GameManager.h Ladder.h MainMenu.h NewGameForm.h Player.h Snake.h SnakesAndLaddersGameForm.h Transporter.h
FORMS += GameForm.ui MainMenu.ui NewGameForm.ui SnakesAndLaddersGameForm.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
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
