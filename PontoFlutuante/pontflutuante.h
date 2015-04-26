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

public:
    PontFlutuante();
    ~PontFlutuante();

    void setArm(double Dec, int Mant, int Inf, int Sup);
    void setNum(double Dec, int Mant, int Inf, int Sup);

    string setExp(int Exp, int Inf, int Sup);

    void printArm(){cout<<Arm<<"\n\n";}//Imprime da forma de armazenamento.
    void printNum(){cout<<Num<<"\n\n";}//Imprime da forma numerica.

    string getNum(){return this->Num;}//Retorna a forma numerica.
    string getArm(){return  this->Arm;}//Retorna a forma armazenamento.

    int Valor_Exp;
};

#endif // PONTFLUTUANTE_H
