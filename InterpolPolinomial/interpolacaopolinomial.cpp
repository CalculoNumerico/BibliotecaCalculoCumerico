#include "interpolacaopolinomial.h"

InterpolacaoPolinomial::InterpolacaoPolinomial()
{
}

LinAlg::Matrix<float> InterpolacaoPolinomial::X(unsigned Valor_Ini, unsigned Valor_Fin, unsigned Step)
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
LinAlg::Matrix<float> InterpolacaoPolinomial::Y(LinAlg::Matrix<float> Polinomio, double Valores_X)
{
    float Valores_Y;

    for(unsigned i = 1; i <= Polinomio.getNumberOfColumns(); ++i)
    {
        Valores_Y += Polinomio(1, i) * pow(Valores_X, i - 1);
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

     ///Efetuando o calculo a(k) = y(k) / (X(k) - X(k + 1) Para (1 < k <= 3).
    for(unsigned i = 1; i <= Valores_X.getNumberOfColumns(); ++i){
        for(unsigned j = 1; j <= Valores_X.getNumberOfColumns(); ++j){
            if(j != i)
                VetorPolinomio(1, i) *= (Valores_X(1, i) - Valores_X(1, j));
        }
        VetorPolinomio(1, i) = Valores_Y(1, i) / VetorPolinomio(1, i);
    }
    return VetorPolinomio;
}

LinAlg::Matrix<float> InterpolacaoPolinomial::Newton(LinAlg::Matrix<double> Valores_X, LinAlg::Matrix<float> Valores_Y)
{
    LinAlg::Matrix<float> VetorPolinomio(1,Valores_Y.getNumberOfColumns());
    LinAlg::Matrix<float> MatrizNewton(Valores_Y.getNumberOfColumns(), Valores_X.getNumberOfColumns());

    ///Parte 1 - Colocar Y na primeira coluna de MatrizNewton
    //Coloca os Valores de Y na primeira coluna.
    for(unsigned i = 1; i <= Valores_Y.getNumberOfColumns(); ++i){
        MatrizNewton(i, 1) = Valores_Y(1, i);
    }
    ///-------------------------------------------------------///
    ///Parte 2 - Subtração dos valores de f()
    unsigned u = 2;
    //Pega X(k)
    for(unsigned j = 1; j < Valores_Y.getNumberOfColumns(); ++j){
        //Pega X(k+1)
        for(unsigned k = u; k <= Valores_Y.getNumberOfColumns(); ++k){
            MatrizNewton(k, j + 1) = MatrizNewton(k,j) - MatrizNewton(k - 1, j);
        }
        ++u;
    }
    ///-------------------------------------------------------///
    ///Parte 3 - Pegar a Diagonal para montar o polinomio
    for(unsigned t = 1; t <= Valores_Y.getNumberOfColumns(); ++t){
        VetorPolinomio(1,t) = MatrizNewton(t,t);
    }
    ///-------------------------------------------------------///
    this->NewtonMatriz = MatrizNewton;
    return VetorPolinomio;
}
