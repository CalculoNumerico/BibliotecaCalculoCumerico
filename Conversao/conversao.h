#ifndef CONVERSAO_H
#define CONVERSAO_H

#include <math.h>
#include <iostream>
#include <sstream>

using namespace std;
class Conversao
{
    string Valor;


public:
    Conversao();
    ~Conversao();

    string DecBin(double Dec, int MaxCasas);
    string DecBin(int Dec, int Inf, int Sup);

    string BinDec(string binInt, string binDec);

    string getBin();
    string getDec();

    void print();

    int Bin_int;

};

#endif // CONVERSAO_H
