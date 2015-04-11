#ifndef PONTFLUTUANTE_H
#define PONTFLUTUANTE_H

#include <math.h>
#include <iostream>
#include "Conversao/conversao.h"

using namespace std;

class PontFlutuante
{
    int B, t, I, S; //Variaveis iniciais.

    float precisao; //Precisao do ponto flutuante

    string Arm, Num,  exp; //Representacao numerica e de armazenamento, e o exp.

     string setExp(int Exp, int I, int S);

public:
    PontFlutuante();
    ~PontFlutuante();

    void setPF(double Dec, int t, int I, int S);

    void print();

    string getPF();
    string getNum();
    string getArm();

    string getPF(int B);
    string getNum(int B);
    string getArm(int B);

    double Valor_Dec;
};

#endif // PONTFLUTUANTE_H
