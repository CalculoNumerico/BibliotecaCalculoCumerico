#include <iostream>
#include "Conversao/conversao.h"
#include "PontoFlutuante/pontflutuante.h"
#include <sstream>

using namespace std;

int main()
{

    //cout << "Hello World!" << endl;
    PontFlutuante a;
    Conversao b;

    a.setArm(-7,5,5,-5);
    b.DecBin(2,-5,5);

    a.print();
    return 0;
}

