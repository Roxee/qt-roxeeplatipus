TEMPLATE = app
QT = core widgets network

PROJECT_ROOT = $$PWD/..
include($$PROJECT_ROOT/config/qmakeitup.pri)

INCLUDEPATH += $$PWD

LIBS += -l$${DUBO_LINK_NAME}

contains(DUBO_LINK_TYPE, static){
    DEFINES += LIBDUBOPLATIPUS_USE_STATIC
}

SOURCES += $$PWD/main.cpp

# Shitty right now
#win32{
#    INCLUDEPATH += C:\somewhere\trees\bonjour\include
#    LIBS += -LC:\somewhere\trees\bonjour\lib
#}

HEADERS += zero.h

SOURCES += zero.cpp
