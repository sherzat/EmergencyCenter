TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Action.cpp \
    EmergencyCenter.cpp \
    Group.cpp \
    Node.cpp \
    Sensor.cpp

DISTFILES += \
    EmergencyCenter.pro.user

HEADERS += \
    Action.h \
    EmergencyCenter.h \
    Group.h \
    Node.h \
    Sensor.h
