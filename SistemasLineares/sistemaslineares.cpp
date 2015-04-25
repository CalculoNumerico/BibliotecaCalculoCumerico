#include "sistemaslineares.h"

SistemasLineares::SistemasLineares()
{
}
SistemasLineares::~SistemasLineares()
{
}

void SistemasLineares::PivotParcial(LinAlg::Matrix<float> &MatrizUni, int cols)
{
        for(int j = cols + 1; j <= MatrizUni.getNumberOfRows(); j++){
            if(abs(MatrizUni(cols,cols)) < (abs(MatrizUni(j,cols))))
            {

            }
      }
}

void SistemasLineares::PivotCompleto(LinAlg::Matrix<float> MAtrizUni)
{
}

LinAlg::Matrix<float> SistemasLineares::Gauss(LinAlg::Matrix<float> A, LinAlg::Matrix<float> B)
{
    LinAlg::Matrix<float> MatrizUni = A|B;
    if(MatrizUni.getNumberOfColumns() < MatrizUni.getNumberOfRows())
        cout<<"Matriz A não é quadrada, porfavo entre com uma matriz quadrada em A e um vetor coluna em B";

    else
    {

    }
}

LinAlg::Matrix<float> SistemasLineares::GaussJacobi(LinAlg::Matrix<float> A, LinAlg::Matrix<float> B)
{

}

LinAlg::Matrix<float> SistemasLineares::GaussSeidel(LinAlg::Matrix<float> A, LinAlg::Matrix<float> B)
{
}

void SistemasLineares::abs(float Valor)
{
    if(Valor < 0)
    {
           Valor = -Valor;
    }
}
