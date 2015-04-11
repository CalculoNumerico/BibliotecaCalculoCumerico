#include "pontflutuante.h"

PontFlutuante::PontFlutuante()
{
    this->B = 0;
    this->I = 0;
    this->S = 0;
    this->t = 0;
    this->precisao = 0;
    this->Arm = "";
    this->Num = "";
    this->exp = "";
}

PontFlutuante::~PontFlutuante()
{
}

void PontFlutuante::setPF(double Dec, int t, int I, int S)
{
    Conversao X;
    string result;
    string ExpBin;

    this->Valor_Dec = Dec;

    result = X.DecBin(Dec, t);

    int Valor_Exp = X.Bin_int;
    ExpBin = setExp(Valor_Exp,I, S);

    if(result.length() == t)
    {
        this->Arm = result;     //Manda pra variavel Arm o vetor binario completo.
    }
    else if(result.length() < t)
    {
        for(int i = result.length()+1; i <= t; i++)
        {
            result += "0";
        }
        this->Arm = result;     //Manda pra variavel Arm o vetor binario completo.
    }
}

string PontFlutuante::setExp(int Exp, int I, int S)
{
    Conversao X;
    this->exp = X.DecBin(Exp, I, S);
    return exp;
}

void PontFlutuante::print()
{

}

string PontFlutuante::getArm()
{
    return Arm;
    //return this->exp;
    //return this->B;

}

string PontFlutuante::getNum()
{
    return this->Num;
    //return this->exp;
    //return this->B;

}

string PontFlutuante::getPF()
{

}

string PontFlutuante::getArm(int B)
{
    return this->Arm;
    //return this->exp;
    //return this->B;
    //return this->precisao;
}

string PontFlutuante::getNum(int B)
{
    return this->Num;
    //return this->exp;
    //return this->B;
    //return this->precisao;
}

string PontFlutuante::getPF(int B)
{
    return this->Arm;
    //return this->Num;
    //return this->exp;
    //return this->B;
    //return this->precisao;
}
