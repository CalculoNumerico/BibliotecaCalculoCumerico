#include "sistemaslineares.h"

SistemasLineares::SistemasLineares()
{
    this->X0 = 0;
}
SistemasLineares::~SistemasLineares()
{
}

void SistemasLineares::PivotParcial(LinAlg::Matrix<float> &MatrizUni, int cols)
{
    SistemasLineares A;
    LinAlg::Matrix<float> AUX;
        for(int i = cols + 1; i <= MatrizUni.getNumberOfRows(); i++){
            if(abs(MatrizUni(cols,cols)) < abs(MatrizUni(i,cols)))
            {


            }
      }
}

void SistemasLineares::PivotCompleto(LinAlg::Matrix<float> MAtrizUni)
{
}

LinAlg::Matrix<float> SistemasLineares::Gauss(LinAlg::Matrix<float> MatrizUni)
{

}

LinAlg::Matrix<float> SistemasLineares::GaussJacobi(LinAlg::Matrix<float> MatrizUni, unsigned MaxIterations, float MinPrecision, bool ShowSteps)
{
    LinAlg::Matrix<float> MatrizRes(MaxIterations, MatrizUni.getNumberOfColumns());

        for(int k = 2; k < MaxIterations+1; k++)
        {
            for(int i = 1; i < MatrizUni.getNumberOfColumns()-1; i++)
            {
                MatrizRes(k,i) = MatrizUni(i, MatrizUni.getNumberOfColumns())/MatrizUni(i,i);
                for(int j = 1; j < MatrizUni.getNumberOfColumns()-1; j++)
                {
//                    if(i != j){
//                        MatrizRes(k,i) += ((MatrizUni(i,j)*MatrizRes(k-1,i))*-1)/MatrizUni(i,i);
//                    }
                }
            }
        }
        return MatrizRes;
}

LinAlg::Matrix<float> SistemasLineares::GaussSeidel(LinAlg::Matrix<float> MatrizUni, unsigned MaxIterations, float MinPrecision, bool ShowSteps)
{
        LinAlg::Matrix<float> MatrizRes(MaxIterations, MatrizUni.getNumberOfColumns());

            for(int k = 2; k < MaxIterations+1; k++)
            {
                for(int i = 1; i < MatrizUni.getNumberOfColumns()-1; i++)
                {
                    MatrizRes(k,i) = MatrizUni(i, MatrizUni.getNumberOfColumns())/MatrizUni(i,i);
                    for(int j = 1; j < MatrizUni.getNumberOfColumns()-1; j++)
                    {
                        if(i != j){
                            MatrizRes(k,i) += ((MatrizUni(i,j)*MatrizRes(k-1,i))*-1)/MatrizUni(i,i);
                        }
                    }
                }
            }
            return MatrizRes;
}

float SistemasLineares::abs(float Valor)
{
    if(Valor < 0)
           Valor = -Valor;

    return Valor;
}

