#ifndef SISTEMASLINEARES_H
#define SISTEMASLINEARES_H
//#include <Matrix>
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"

using namespace std;
class SistemasLineares
{
 //   LinAlg::Matrix<float> AB, A, B;

//    void setUni(LinAlg::Matrix<float> A, LinAlg::Matrix<float> B);

    void PivotParcial(LinAlg::Matrix<float> MatrizUni);

    void PivotCompleto(LinAlg::Matrix<float> MAtrizUni);

public:
    SistemasLineares();
    ~SistemasLineares();

//       LinAlg::Matrix<float> Gauss(LinAlg::Matrix<float> A, LinAlg::Matrix<float> B);
    LinAlg::Matrix<float> Gauss(LinAlg::Matrix<float> MatrizUni);

//        LinAlg::Matrix<float> GaussJacobi(LinAlg::Matrix<float> A, LinAlg::Matrix<float> B);
    LinAlg::Matrix<float> GaussJacobi(LinAlg::Matrix<float> MatrizUni);

//        LinAlg::Matrix<float> GaussSeidel(LinAlg::Matrix<float> A, LinAlg::Matrix<float> B);
    LinAlg::Matrix<float> GaussSeidel(LinAlg::Matrix<float> MatrizUni);

};
#endif // SISTEMASLINEARES_H
