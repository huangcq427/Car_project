QT       += core gui widgets network

CONFIG += c++17

SOURCES += \
    src/daochewindow.cpp \
    src/form_daoche.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/map.cpp \
    src/music.cpp \
    src/video.cpp \
    src/weather.cpp

HEADERS += \
    src/daochewindow.h \
    src/distanceworker.h \
    src/form_daoche.h \
    src/mainwindow.h \
    src/map.h \
    src/music.h \
    src/video.h \
    src/weatherdata.h \
    src/weather.h

FORMS += \
    src/daochewindow.ui \
    src/form_daoche.ui \
    src/mainwindow.ui \
    src/map.ui \
    src/music.ui \
    src/video.ui \
    src/weather.ui

RESOURCES +=  res/img.qrc