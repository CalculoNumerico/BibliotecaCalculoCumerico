#include <iostream>
#include "Conversao/conversao.h"
#include "PontoFlutuante/pontflutuante.h"
#include <sstream>

using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    PontFlutuante a;

    a.setArm(7,10,-5,5);
    a.setNum(7,10,-5,5);

    a.printArm();
    a.printNum();

//    string A;
//   A    =  Conv::DecBin(3, 5);
//   cout<<A<<"\n";
    return 0;
}

