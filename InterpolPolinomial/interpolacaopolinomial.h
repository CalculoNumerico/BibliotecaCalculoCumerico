#ifndef INTERPOLACAOPOLINOMIAL_H
#define INTERPOLACAOPOLINOMIAL_H
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/polynom.h"
#include "SistemasLineares/sistemaslineares.h"
#include <math.h>

class InterpolacaoPolinomial
{

public:
    InterpolacaoPolinomial();

    LinAlg::Matrix<float> Init_Vetor_Polynom(unsigned Valor_Ini, unsigned Valor_Fin,unsigned Step);
    LinAlg::Matrix<float> MatrizVandermonde(LinAlg::Matrix<double> Valores_X);
    LinAlg::Matrix<float> Set_Polinomio(LinAlg::Matrix<float> MatrizVandermonde, LinAlg::Matrix<float> Valores_Y);


};

#endif // INTERPOLACAOPOLINOMIAL_H
