#include "interpolacaopolinomial.h"

InterpolacaoPolinomial::InterpolacaoPolinomial()
{
}
LinAlg::Matrix<float> InterpolacaoPolinomial::Init_Vetor_Polynom(unsigned Valor_Ini, unsigned Valor_Fin, unsigned Step)
{
    LinAlg::Matrix<float> Vetor_Polinomio;

    return Vetor_Polinomio;
}

LinAlg::Matrix<float> InterpolacaoPolinomial::MatrizVandermonde(LinAlg::Matrix<double> Valores_X)
{
    LinAlg::Matrix<float> MatrizVandermonde(Valores_X.getNumberOfColumns(), Valores_X.getNumberOfColumns());

    for(unsigned i = 1; i <= Valores_X.getNumberOfColumns(); ++i)
    {
        for(unsigned j = 1; j <= Valores_X.getNumberOfColumns(); ++j)
        {
            MatrizVandermonde(j,i) = pow(Valores_X(1,j), double(i - 1));
        }
    }

    return MatrizVandermonde;
}
