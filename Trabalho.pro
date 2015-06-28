TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Conversao/conversao.cpp \
    PontoFlutuante/pontflutuante.cpp \
    SistemasLineares/sistemaslineares.cpp \
    InterpolPolinomial/interpolacaopolinomial.cpp \


include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Conversao/conversao.h \
    PontoFlutuante/pontflutuante.h \
    SistemasLineares/sistemaslineares.h \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/src/primitiveLibs/LinAlg/linalg.hpp \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/src/primitiveLibs/LinAlg/matrix.hpp \
    InterpolPolinomial/interpolacaopolinomial.h \

OTHER_FILES +=

