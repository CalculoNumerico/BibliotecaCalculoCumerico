#include "conversao.h"

Conversao::Conversao()
{
    this->Bin = "";
    this->Dec = "";
}

Conversao::~Conversao()
{
}

string Conversao::DecBin(double decVal, int maxRep)
{
    string resultado;

        //cout<<resultado<<endl;
        int numInt = (int)decVal;
        double numDec = decVal - numInt;    //Parte decimal do valor a ser convertido
        int cont = 0;                       //Contador para a parte fracionada

        //Condição para conversão da base
        while(numInt != 1)
        {
            int resto = numInt%2;
            string resAnterior = resultado;
            std::ostringstream strs;
            strs << resto;
            resultado = strs.str() + resAnterior;
            numInt = (numInt - resto)/2;
        }

        string resAnterior = resultado;
        std::ostringstream strs;
        strs << numInt;
        resultado = strs.str() + resAnterior;
        this->Bin_int = resultado.length();  //Armazendo a parte inteira do binario.
//        if(numDec != 0)
//            resultado += ".";


        while(cont != maxRep && numDec != 0)
        {
            int partInt = (int)(numDec*2);

            std::ostringstream strs;
            strs << numInt;
            resultado += strs.str();
            numDec = (numDec*2) - partInt;

            cont++;
        }
        return resultado;
        this->Bin = resultado;
}

string Conversao::DecBin(int Dec, int Inf, int Sup)
{
    string resultado;
    int numInt = Dec;

    //Condição para conversão da base
   if(Dec <= Sup&& Dec >= Inf)
   {
    while(numInt != 1)
    {
        int resto = numInt%2;
        string resAnterior = resultado;
        std::ostringstream strs;
        strs << resto;
        resultado = strs.str() + resAnterior;
        numInt = (numInt - resto)/2;
    }
   }
   return resultado;

}

string Conversao::BinDec(string binInt, string binDec)
{
    int indice = 0;
    double Resultado = 0;
    for(int i = binInt.length()-1; i >= 0; i--)
    {
        Resultado += double(binInt.at(i)-48)*pow(2,indice);
        indice++;
    }

    indice = -1;
    for(int i = 0; i <= binDec.length()-1; i++)
    {
        Resultado += double(binDec.at(i)-48)*pow(2,indice);
        indice--;
    }

    std::ostringstream strs;
    strs << Resultado;

    return strs.str();
    this->Dec = strs.str();
}

