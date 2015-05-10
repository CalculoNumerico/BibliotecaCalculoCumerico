#include <iostream>
#include "Conversao/conversao.h"
#include "PontoFlutuante/pontflutuante.h"
#include "SistemasLineares/sistemaslineares.h"
#include "FileReader/filereader.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include <sstream>

using namespace std;

int main()
{
//    LinAlg::Matrix<float> A(3,3);
//    LinAlg::Matrix<float> B(3,3);
//    FileReader c;
//    B = c.setDados(A,1,9,1);
//    cout<<B;
////Exemplo da classe conversao////
//   string A, B;
//   A =  Conv::BinDec("101", "1");
//   cout<<A<<"\n\n";
//   //ou.
//   B = Conv::DecBin(1.5, 5);
//   cout<<B<<"\n\n";
//   cout<<Conv::DecBin(254.7,10)<<"\n\n";
//   cout<<Conv::DecBin(0.25,10)<<"\n\n";
//   cout<<Conv::DecBin(0.7,10)<<"\n\n";
//  cout<<Conv::BinDec("101",0)<<"\n\n";
////-----------------------------------////

////Exemplo da classe ponto flutuante/////
//PontFlutuante a;
//a.setArm(-10.25, 6, -5, 5);
//a.setNum(-10.25, 6, -5, 5);
//a.printArm();
//a.printNum();
////-----------------------------------------////

////Exemplo da classe SistemasLineares - Gauss//
//    LinAlg::Matrix<float> a;
//    LinAlg::Matrix<float> b;
//    SistemasLineares g;
//    a = "1,2,3,4;5,6,7,8;9,1,2,3";
//    b = g.Gauss(a);
//    LinAlg::Print(b);
////-----------------------------------------------------////
////Exemplo da classe SistemasLineares - GaussJacobi//
//SistemasLineares G;
//LinAlg::Matrix<float> A(3,4), X0(1,4);
//G.setX0(X0);
//A = "4,2,1,2;2,7,1,0;1,1,5,1";
//cout<<A;
//cout<<endl<<G.GaussJacobi(A, 12, 0.01)<<endl;
////--------------------------------------------------------------//

////Exempo da classe SistemasLineares - GaussSeidel//
// SistemasLineares G;
//LinAlg::Matrix<float> A(4,5), X0(1,4);
// G.setX0(X0);
// A = "5,1,1,5;1,3,1,6;3,1,6,0";
//cout<<A;
//cout<<endl<<G.GaussSeidel(A, 5, 0.01)<<endl;
////--------------------------------------------------------------//

    return 0;
}

