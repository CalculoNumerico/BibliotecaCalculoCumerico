#ifndef FILEREADER_H
#define FILEREADER_H

#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"

class FileReader
{

public:
    FileReader();

    LinAlg::Matrix<float> setDados(LinAlg::Matrix<float> MatrizInit, float InitValor,float FinalValor, float Step);

};

#endif // FILEREADER_H
