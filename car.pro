#-------------------------------------------------
#
# Project created by QtCreator 2021-07-16T17:13:44
#
#-------------------------------------------------
CONFIG += c++17  # Qt6 推荐 C++17，原为 C++11
QT       += core gui widgets network  # 显式写出 widgets，不再依赖 greaterThan

TARGET = car
TEMPLATE = app

SOURCES += main.cpp\
    daochewindow.cpp \
    form_daoche.cpp \
        mainwindow.cpp \
    weather.cpp \
    map.cpp \
    music.cpp \
    video.cpp

HEADERS  += mainwindow.h \
    daochewindow.h \
    distanceworker.h \
    form_daoche.h \
    weather.h \
    map.h \
    music.h \
    video.h \
    weatherdata.h

FORMS    += mainwindow.ui \
    daochewindow.ui \
    form_daoche.ui \
    map.ui \
    music.ui \
    video.ui \
    weather.ui

RESOURCES += \
    img.qrc