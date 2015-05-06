#ifndef INTERPOLACAOPOLINOMIAL_H
#define INTERPOLACAOPOLINOMIAL_H

#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"

class InterpolacaoPolinomial
{
public:
    InterpolacaoPolinomial();
    ~InterpolacaoPolinomial();

    LinAlg::Matrix<float> Vandermonde();
    LinAlg::Matrix<float> Lagrange();
};

#endif // INTERPOLACAOPOLINOMIAL_H
