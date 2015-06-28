#include "interpolacaopolinomial.h"

InterpolacaoPolinomial::InterpolacaoPolinomial(LinAlg::Matrix<float> n)
{
    this->n = n;
}
InterpolacaoPolinomial::InterpolacaoPolinomial(LinAlg::Matrix<float> n, LinAlg::Matrix<float> f)
{
    this->n = n;
    this->f = f;
}
InterpolacaoPolinomial::InterpolacaoPolinomial()
{
}
LinAlg::Matrix<float> InterpolacaoPolinomial::Init_Vetor_Polynom(unsigned Valor_Ini, unsigned Valor_Fin, unsigned Step)
{
    unsigned size = ((Valor_Fin-Valor_Ini)/Step)+1;
    LinAlg::Matrix<float> Vetor_Polinomio(1,size);

    for(unsigned i = 0; i < size; i++)
    {
        Vetor_Polinomio(1,i+1) = Valor_Ini+(Step*i);
    }

    return Vetor_Polinomio;
}

LinAlg::Matrix<float> InterpolacaoPolinomial::Y(LinAlg::Matrix<float> Polinomio, LinAlg::Matrix<double> Valores_X)
{
    LinAlg::Matrix<float>Valores_Y(1, Valores_X.getNumberOfColumns());

    for(unsigned i = 1; i <= Valores_X.getNumberOfColumns() ; --i)
    {
        for(unsigned j = 1; j <= Polinomio.getNumberOfColumns(); ++j)
        {
            Valores_Y(1, i) += Polinomio(1, j) * pow(Valores_X(1, i), i - 1);
        }
    }
    return Valores_Y;
}

LinAlg::Matrix<float> InterpolacaoPolinomial::MatrizVandermonde(LinAlg::Matrix<double> Valores_X)
{
    LinAlg::Matrix<float> MatrizVandermonde(Valores_X.getNumberOfColumns(), Valores_X.getNumberOfColumns());

    for(unsigned i = 1; i <= Valores_X.getNumberOfColumns(); ++i)
    {
        for(unsigned j = 1; j <= Valores_X.getNumberOfColumns(); ++j)
        {
            MatrizVandermonde(j,i) = pow(Valores_X(1,j), double(i - 1));//Formula para montar a Linhas que vai ser o polinomio.
        }
    }
    return MatrizVandermonde;
}

LinAlg::Matrix<float> InterpolacaoPolinomial::Vandermonde(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y)
{
    LinAlg::Matrix<float> MatVandermonde(Valores_X.getNumberOfColumns(), Valores_X.getNumberOfColumns());
    LinAlg::Matrix<float> VetorPolinomio(1,Valores_X.getNumberOfColumns());
    SistemasLineares SL;
    ////Monta a Matriz de Vandermonde
    MatVandermonde = MatrizVandermonde(Valores_X);
    ////Aplica o Metodo de Gauss
    VetorPolinomio = SL.Gauss(MatVandermonde | Valores_Y);
    return VetorPolinomio;
}

LinAlg::Matrix<float> InterpolacaoPolinomial::Lagrange(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y)
{
    LinAlg::Matrix<float> VetorPolinomio(1,Valores_X.getNumberOfColumns());

    VetorPolinomio = LinAlg::Ones<float>(1,Valores_X.getNumberOfColumns());

    for(unsigned i = 1; i <= Valores_X.getNumberOfColumns(); ++i){
        for(unsigned j = 1; j <= Valores_X.getNumberOfColumns(); ++j){
            if(j != i)
                VetorPolinomio(1, i) *= (Valores_X(1, i) - Valores_X(1, j));
        }
        VetorPolinomio(1, i) = Valores_Y(1, i) / VetorPolinomio(1, i);
    }
    return VetorPolinomio;
}
