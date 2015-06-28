#ifndef INTERPOLACAOPOLINOMIAL_H
#define INTERPOLACAOPOLINOMIAL_H
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include "SistemasLineares/sistemaslineares.h"
#include <math.h>

class InterpolacaoPolinomial
{
    LinAlg::Matrix<float> n, f;
    LinAlg::Matrix<float> NewtonMatriz;
    unsigned order;

public:
    InterpolacaoPolinomial();
    InterpolacaoPolinomial(LinAlg::Matrix<float> n);
    InterpolacaoPolinomial(LinAlg::Matrix<float> n, LinAlg::Matrix<float> f);

    //Função para montar um Vetor_X com Valores determinado em passos
    LinAlg::Matrix<float> Init_Vetor_Polynom(unsigned Valor_Ini, unsigned Valor_Fin,unsigned Step);
    //Função só pra mostrar a Matriz
    LinAlg::Matrix<float> MatrizVandermonde(LinAlg::Matrix<double> Valores_X);
    //Função para calcular Vetor_Y. |Ax = y|
    LinAlg::Matrix<float> Y(LinAlg::Matrix<float> Polinomio, LinAlg::Matrix<double> Valores_X);
    //Função para calcular os Polinomios usando os metodos de Vandermonde e Lagrange
    LinAlg::Matrix<float> Vandermonde(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y);
    LinAlg::Matrix<float> Lagrange(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y);
    LinAlg::Matrix<float> Newton(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y);


    LinAlg::Matrix<float> get_NewtonMatriz(){return this->NewtonMatriz;}
};

#endif // INTERPOLACAOPOLINOMIAL_H
