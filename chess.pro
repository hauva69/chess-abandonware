######################################################################
# Automatically generated by qmake (2.01a) Thu Jul 19 01:31:09 2012
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += . src src/lib
INCLUDEPATH += . src/lib
CONFIG += qt debug

win32 {
MOC_DIR = _moc
UI_DIR = _ui
OBJECTS_DIR = _obj 
} else {
UI_DIR = .ui
MOC_DIR = .moc
OBJECTS_DIR = .obj
}

# Input
HEADERS += src/lib/constants.hpp src/lib/piece.hpp src/lib/king.hpp \
src/lib/queen.hpp
SOURCES += src/main.cpp src/lib/piece.cpp src/lib/king.cpp src/lib/queen.cpp
