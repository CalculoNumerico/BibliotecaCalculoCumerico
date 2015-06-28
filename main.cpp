#include <iostream>
#include "Conversao/conversao.h"
#include "PontoFlutuante/pontflutuante.h"
#include "SistemasLineares/sistemaslineares.h"
#include "FileReader/filereader.h"
#include "InterpolPolinomial/interpolacaopolinomial.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include "C:/Users/hbarbosa/Documents/GitHub/CodigosSoftware/SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include <sstream>

using namespace std;



int main()
{
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
//LinAlg::Matrix<float> a, L, U;
//SistemasLineares g;
//a = "1,2,3, 4;5,6,7, 8;9,1 ,2, 3";
//cout<<endl<<a<<endl;
//cout<<endl<<g.Gauss(a)<<endl;

//g.LU_Factorization(a,L,U);
//cout << L << endl;
//cout << U<<endl;
////-----------------------------------------------------////
////Exemplo da classe SistemasLineares - GaussJacobi//
//SistemasLineares G;
//LinAlg::Matrix<float> A(3,4), X0(1,4);
//G.setX0(X0);
//A = "10,2,1,7;1,5,1,-8;2,3,10,6";
//cout<<A;
//cout<<endl<<G.GaussJacobi(A, 10, 0.001)<<endl;
////--------------------------------------------------------------//
////Exempo da classe SistemasLineares - GaussSeidel//
// SistemasLineares G;
//LinAlg::Matrix<float> A(4,5), X0(1,4);
// G.setX0(X0);
// A = "5,1,1,5;1,3,1,6;3,1,6,0";
//cout<<A;
//cout<<endl<<G.GaussSeidel(A,10, 0.001)<<endl;
////--------------------------------------------------------------//
////Exempo da classe InterpolacaoPolinomial - Vandermonde//
//InterpolacaoPolinomial G;
//LinAlg::Matrix<double> A;
//LinAlg::Matrix<float> B;
//A = "0.5,0.6,0.7";
//B = "0.4794; 0.5646; 0.6442";
//cout<<endl<<"Vandermonde"<<endl;
//cout<<endl<<A<<endl<<~B<<endl;
//cout<<endl<<(G.MatrizVandermonde(A)|B)<<endl;
//cout<<endl<<G.Vandermonde(A,B)<<endl;
//cout<<endl<<"---------------------"<<endl;
////---------------------------------------------------------//
////Exempo da classe InterpolacaoPolinomial - Lagrange//
//InterpolacaoPolinomial G1;
//LinAlg::Matrix<double> A1;
//LinAlg::Matrix<float> B1;
//A1 = "2, 4, 5, 7";
//B1 = "5, -5, -40, 10";
//cout<<endl<<"Lagrande"<<endl;
//cout<<endl<<(A1||B1)<<endl;
//cout<<endl<<G1.Lagrange(A1,B1)<<endl;
//cout<<endl<<"---------------------"<<endl;
////---------------------------------------------------------//
////Exempo da classe InterpolacaoPolinomial - Newton//
//InterpolacaoPolinomial G2;
//LinAlg::Matrix<double> A2;
//LinAlg::Matrix<float> B2;
//A2 = "2, 4, 5, 7";
//B2 = "5, -5, -40, 10";
//cout<<endl<<"Newton"<<endl;
//cout<<endl<<(A2||B2)<<endl;
//cout<<endl<<G2.Newton(A2,B2)<<endl;
//cout<<endl<<G2.get_NewtonMatriz()<<endl;
//cout<<endl<<"---------------------"<<endl;
////---------------------------------------------------------//
////Exempo da classe InterpolacaoPolinomial - Calcular valores de Y com um polinomio qualquer//
//InterpolacaoPolinomial G;
//LinAlg::Matrix<float> A;
//LinAlg::Matrix<double> B;
//A = "0.5,0.6,0.7";
//B= "0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1";
//cout<<endl<<G.Y(A,B)<<endl;
////---------------------------------------------------------//

    return 0;
}

