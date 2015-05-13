#include "interpolacaopolinomial.h"

InterpolacaoPolinomial::InterpolacaoPolinomial()
{
}
LinAlg::Matrix<float> InterpolacaoPolinomial::Init_Vetor_Polynom(unsigned Valor_Ini, unsigned Valor_Fin, unsigned Step)
{
    unsigned size = ((Valor_Fin-Valor_Ini)/Step)+1;
    LinAlg::Matrix<float> Vetor_Polinomio(1,size);
<<<<<<< HEAD

=======
    
>>>>>>> origin/master
    for(unsigned i = 0; i < size; i++)
    {
        Vetor_Polinomio(1,i+1) = Valor_Ini+(Step*i);
    }
<<<<<<< HEAD

=======
    
>>>>>>> origin/master
    return Vetor_Polinomio;
}

LinAlg::Matrix<float> InterpolacaoPolinomial::MatrizVandermonde(LinAlg::Matrix<float> Valores_X)
{
    LinAlg::Matrix<float> MatrizVandermonde = Valores_X;

    for(unsigned i = 1; i <= Valores_X.getNumberOfolumns(); ++i)
    {
        for(unsigned j = 1; j <= Valores_X.getNumberOfColumns(); ++j)
        {
            MatrizVandermonde(j,i) = pow(Valores_X(1,j), double(i - 1));
        }
    }
    return MatrizVandermonde;
}

LinAlg::Matrix<float> InterpolacaoPolinomial::Vetor_Polinomio(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y)
{
    LinAlg::Matrix<float> MatrizVandermonde(Valores_X.getNumberOfColumns(), Valores_X.getNumberOfColumns());
    LinAlg::Matrix<float> VetorPolinomio(1,Valores_X.getNumberOfColumns());
    SistemasLineares SL;

    for(unsigned i = 1; i <= Valores_X.getNumberOfColumns(); ++i)
    {
        for(unsigned j = 1; j <= Valores_X.getNumberOfColumns(); ++j)
        {
            MatrizVandermonde(j,i) = pow(Valores_X(1,j), double(i - 1));
        }
    }

    MatrizVandermonde = SL.Gauss(MatrizVandermonde);

    return MatrizVandermonde;
}
