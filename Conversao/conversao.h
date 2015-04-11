#ifndef CONVERSAO_H
#define CONVERSAO_H

#include <math.h>
#include <iostream>
#include <sstream>

using namespace std;
class Conversao
{


public:
    Conversao();
    ~Conversao();

    string DecBin(double Dec, int MaxCasas);
    string DecBin(int Dec, int I, int S);

    string BinDec(string binInt, string binDec);

    int Bin_int;

};

#endif // CONVERSAO_H
