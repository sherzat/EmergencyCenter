TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    group.cpp \
    node.cpp \
    sensor.cpp

HEADERS += \
    group.h \
    node.h \
    sensor.h
