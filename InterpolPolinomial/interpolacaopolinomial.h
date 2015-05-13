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

    LinAlg::Matrix<float> Init_Vetor_Polynom(unsigned Valor_Ini, unsigned Valor_Fin,unsigned Step);//Função para montar um Vetor_X com Valores determinado em passos
    LinAlg::Matrix<float> MatrizVandermonde(LinAlg::Matrix<double> Valores_X);//Função só pra mostrar a Matriz
    LinAlg::Matrix<float> Valores_Y(LinAlg::Matrix<float> MatrizVandermonde, LinAlg::Matrix<double> Valores_X);//Função para calcular Vetor_Y. |Ax = y| OBS: essa função não é assim é apenas a inicial enquanto polynom não foi incluida corretamente.
    LinAlg::Matrix<float> Vetor_Polinomio(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y);//Função para calcular Vetor_A.


};

#endif // INTERPOLACAOPOLINOMIAL_H
