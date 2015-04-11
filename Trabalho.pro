TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Conversao/conversao.cpp \
    PontoFlutuante/pontflutuante.cpp \
    Escalonamento/escalonamento.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Conversao/conversao.h \
    PontoFlutuante/pontflutuante.h \
    Escalonamento/escalonamento.h

