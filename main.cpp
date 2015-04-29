#include <iostream>
#include "Conversao/conversao.h"
#include "PontoFlutuante/pontflutuante.h"
#include "SistemasLineares/sistemaslineares.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include <sstream>

using namespace std;

int main()
{
////Exemplo da classe conversao////
//   string A;
//   A =  Conv::DecBin(7.5, 5);
//   cout<<A<<"\n\n";
//   //ou.
//   cout<<Conv::DecBin(7.5, 5)<<"\n\n";
//   cout<<Conv::BinDec("101",0)<<"\n\n";
////------------------------------------------------////

////Exemplo da classe ponto flutuante/////
//PontFlutuante a;
//a.setArm(7.5,7,-5,5);
//a.setNum(7.5,7,-5,5);

//a.printArm();
//a.printNum();
////---------------------------------------------------------////

////Exemplo da classe SistemasLineares - GaussJacobi//
//    SistemasLineares G;
//    LinAlg::Matrix<float> A(3,4), X0(1,3), B;

//    X0 = "0,0,0";
//    A = "1,1,1,1;,1,1,1,1;,1,1,1,1";

//    G.setX0(X0);

//    B = G.GaussJacobi(A,5,0.05);
//    LinAlg::Print(B);
////-------------------------------------------------------------------------------------//

////Exempo da classe SistemasLineares - GaussSeidel//
// SistemasLineares G;
//LinAlg::Matrix<float> A(4,5), X0(1,4);

// G.setX0(X0);
// A = "10,-1,2,0,6;-1,11,-1,3,25;2,-1,10,-1,-11;0,3,-1,8,15";

//cout<<A;
//cout<<endl<<G.GaussSeidel(A, 5, 0.01)<<endl;
////--------------------------------------------------//

    return 0;
}

