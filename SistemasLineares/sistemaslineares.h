#ifndef SISTEMASLINEARES_H
#define SISTEMASLINEARES_H
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"

using namespace std;

class SistemasLineares
{
    LinAlg::Matrix<float> X0;

    void PivotParcial(LinAlg::Matrix<float> &MatrizUni, int cols);

    float abs(float Valor);

public:
    SistemasLineares();
    ~SistemasLineares();

    LinAlg::Matrix<float> Gauss(LinAlg::Matrix<float> MatrizUni);
    LinAlg::Matrix<float> FatLU(LinAlg::Matrix<float> MatrizUni);
    LinAlg::Matrix<float> GaussJacobi(LinAlg::Matrix<float> MatrizUni, unsigned MaxIterations, float MinPrecision);
    LinAlg::Matrix<float> GaussSeidel(LinAlg::Matrix<float> MatrizUni, unsigned MaxIterations, float MinPrecision);

    void setX0(LinAlg::Matrix<float> InicialStep){this->X0 = InicialStep;}//Função para set dos Valores iniciais das sistema.
    void CritLinhas(LinAlg::Matrix<float> MatrizUni);
    void CritSassenfeld(LinAlg::Matrix<float> MatrizUni);

};
#endif // SISTEMASLINEARES_H
