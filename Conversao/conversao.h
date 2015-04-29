#ifndef CONVERSAO_H
#define CONVERSAO_H

#include <math.h>
#include <iostream>
#include <sstream>
#include <string>
#include "PontoFlutuante/pontflutuante.h"

using namespace std;

namespace Conv
{
    string DecBin(double decVal, int maxRep);//Converte de Decimal para Binario.
//    string DecBin(double decVal, int maxRep, PontFlutuante a);
    string DecBin(int Dec, int Inf, int Sup);//Converte de Decimal para Binario.
    string BinDec(string binInt, string binDec);//Converte de Binario para Decimal.
}

class Conversao
{

public:
    Conversao();
    ~Conversao();
    int ValorExp;
};

#endif // CONVERSAO_H
