TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Conversao/conversao.cpp \
    PontoFlutuante/pontflutuante.cpp \
    SistemasLineares/sistemaslineares.cpp \
#    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/identifiers.cpp \
#    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/src/graphicLibs/glview.cpp \
#    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/src/graphicLibs/grafics.cpp \
#    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/src/graphicLibs/graphicproperties.cpp \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/src/primitiveLibs/polynom.cpp \
    FileReader/filereader.cpp \
    InterpolPolinomial/interpolacaopolinomial.cpp \
#    ../../../../../GitHub/SistemasdeControle-master/src/modelLibs/statespace.cpp \
#    ../../../../../GitHub/SistemasdeControle-master/src/modelLibs/model.cpp \
#    ../../../../../GitHub/SistemasdeControle-master/src/modelLibs/simfunction.cpp \
#    Model/modelointegrativo.cpp \
#    Model/modelopredicao.cpp \
#    Model/preditivo.cpp


include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Conversao/conversao.h \
    PontoFlutuante/pontflutuante.h \
    SistemasLineares/sistemaslineares.h \
#    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/graphicLibs/glview.h \
#    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/graphicLibs/grafics.h \
#    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/graphicLibs/graphicproperties.h \
#    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/identifiers.h \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/polynom.h \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/src/primitiveLibs/LinAlg/linalg.hpp \
    ../../../../../GitHub/CodigosSoftware/SistemasdeControle/src/primitiveLibs/LinAlg/matrix.hpp \
    FileReader/filereader.h \
    InterpolPolinomial/interpolacaopolinomial.h \
#    ../../../../../GitHub/SistemasdeControle-master/headers/modelLibs/statespace.h \
#    ../../../../../GitHub/SistemasdeControle-master/headers/modelLibs/model.h \
#    ../../../../../GitHub/SistemasdeControle-master/headers/modelLibs/simfunction.h \
#    Model/modelointegrativo.h \
#    Model/modelopredicao.h \
#    Model/preditivo.h

OTHER_FILES +=

