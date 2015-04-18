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
}

PontFlutuante::~PontFlutuante()
{

}

void PontFlutuante::setArm(double Dec, int t, int I, int S)
{
    Conversao X;
    string result;
    string ExpBin;
//Converte o valor Decimal.
    this->Valor_Dec = Dec;
    result = X.DecBin(Dec, t);
//Converte o Exponencial.
    int Valor_Exp = X.Bin_int;
    ExpBin = setExp(Valor_Exp,I, S);
//Adcionando o sinal da mantissa.
    if(Dec < 0){
        result = "1" + result;
        }
    else if (Dec >= 0){
        result = "0" + result;
        }
//Adcionando a mantissa.
    while(result.length() < t + 1)
    {
        result +="0";
    }
//Adcionando o Exponencial.
    if(Dec>1 || (Dec*(-1)) > 1){
        result +="0";
        result +=ExpBin;
    }
    else{
        result +="1";
        result +=ExpBin;
    }
     this->Arm = result;
}

void PontFlutuante::setNum(double Dec, int t, int I, int S)
{

}

string PontFlutuante::setExp(int Exp, int I, int S)
{
    Conversao X;
    //cout<<Exp<<"\n";
    string exp = X.DecBin(Exp, I, S);
    return exp;
}
//#################################//
string PontFlutuante::getArm()
{
    return Arm;
}

string PontFlutuante::getNum()
{
    return this->Num;
}

void PontFlutuante::print()
{
    cout<<this->Arm<<"\n\n";
}

