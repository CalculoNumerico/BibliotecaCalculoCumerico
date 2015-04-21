#ifndef PONTFLUTUANTE_H
#define PONTFLUTUANTE_H

#include <math.h>
#include <iostream>
#include "Conversao/conversao.h"

using namespace std;

class PontFlutuante
{
    float precisao; //Precisao do ponto flutuante

    string Arm, Num; //Representacao numerica e de armazenamento, e o exp.

    string setExp(int Exp, int Inf, int Sup);

public:
    PontFlutuante();
    ~PontFlutuante();

    void setArm(double Dec, int Mant, int Inf, int Sup);
    void setNum(double Dec, int Mant, int Inf, int Sup);

    void print();

    string getNum();
    string getArm();

    double Valor_Dec;
    int Valor_Exp;
};

#endif // PONTFLUTUANTE_H
