#include <iostream>
#include "Conversao/conversao.h"
#include "PontoFlutuante/pontflutuante.h"
#include <sstream>

using namespace std;

int main()
{
////Exemplo da classe ponto flutuante//
//    PontFlutuante a;
//    a.setArm(7.5,10,-5,5);
//    a.setNum(7.5,10,-5,5);

//    a.printArm();
//    a.printNum();
////----------------------------------------------------------------//

////Exemplo da classe conversao//
//   string A;
//   A =  Conv::DecBin(7.5, 5);
//   cout<<A<<"\n\n";
//   //ou.
//   cout<<Conv::DecBin(7.5, 5)<<"\n\n";
////------------------------------------------------//

    cout<<Conv::DecBin(215.75,20)<<"\n\n";
    cout<<Conv::BinDec("111111","0")<<"\n\n";
    return 0;
}

