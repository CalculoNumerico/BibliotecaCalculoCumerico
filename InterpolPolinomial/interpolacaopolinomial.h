#ifndef INTERPOLACAOPOLINOMIAL_H
#define INTERPOLACAOPOLINOMIAL_H
#include "SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include "CSistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include "SistemasLineares/sistemaslineares.h"
#include <math.h>

class InterpolacaoPolinomial
{

    LinAlg::Matrix<float> NewtonMatriz;
    unsigned order;

public:
    InterpolacaoPolinomial();

    //Função para montar um Vetor_X com Valores determinado em passos
    LinAlg::Matrix<float> X(unsigned Valor_Ini, unsigned Valor_Fin,unsigned Step);
    //Função para calcular Vetor_Y. |Ax = y|
    LinAlg::Matrix<float> Y(LinAlg::Matrix<float> Polinomio, LinAlg::Matrix<double> Valores_X);
    LinAlg::Matrix<float> Y(LinAlg::Matrix<float> Polinomio, double Valores_X);
    //Função só pra mostrar a Matriz
    LinAlg::Matrix<float> MatrizVandermonde(LinAlg::Matrix<double> Valores_X);
    //Função para calcular os Polinomios usando os metodos de Vandermonde e Lagrange
    LinAlg::Matrix<float> Vandermonde(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y);
    LinAlg::Matrix<float> Lagrange(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y);
    LinAlg::Matrix<float> Newton(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y);


    LinAlg::Matrix<float> get_NewtonMatriz(){return this->NewtonMatriz;}
};

#endif // INTERPOLACAOPOLINOMIAL_H
