TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Conversao/conversao.cpp \
    PontoFlutuante/pontflutuante.cpp \
    SistemasLineares/sistemaslineares.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Conversao/conversao.h \
    PontoFlutuante/pontflutuante.h \
    SistemasLineares/sistemaslineares.h

