TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    persona.cpp \
    estudiante.cpp \
    profesor.cpp \
    datos.cpp

HEADERS += \
    persona.h \
    estudiante.h \
    profesor.h \
    datos.h
