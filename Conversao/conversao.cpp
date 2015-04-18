#include "conversao.h"

Conversao::Conversao()
{
    this->Valor = "";
}

Conversao::~Conversao()
{
}
//Função de conversão decimal binario.
string Conversao::DecBin(double decVal, int maxRep)
{
    string resultadoInt;
    string resultadoFrac;

    string result;

        //cout<<resultado<<endl;
        int numInt = (int)decVal;
        double numDec = decVal - numInt;    //Parte decimal do valor a ser convertido
        int cont = 0;                       //Contador para a parte fracionada

        //Condição para conversão da parte inteira.
        while(numInt != 1)
        {
            int resto = numInt%2;
            string resAnterior = resultadoInt;
            std::ostringstream strs;
            strs << resto;
            resultadoInt = strs.str() + resAnterior;
            numInt = (numInt - resto)/2;
        }

        string resAnterior = resultadoInt;
        std::ostringstream strs;
        strs << numInt;
        resultadoInt = strs.str() + resAnterior;
        //----------------------------------------------------------------//
        //Converção da parte fracionaria.
        while(cont != maxRep && numDec != 0)
        {
            int partInt = (int)(numDec*2);

            std::ostringstream strs;
            strs << numInt;
            resultadoFrac = strs.str();
            numDec = (numDec*2) - partInt;
            cont++;
        }
        //----------------------------------------------------------------//
        //Armazenando o exp//
        if(numInt > 0)// se o valor for maior que 1.
            this->Bin_int = resultadoInt.length();

        else if(numInt <=0)// se o valor for menor que 1.
            this->Bin_int = resultadoFrac.length();
        //----------------------------------------------------------------//
        result = resultadoInt + resultadoFrac;
        this->Valor = result;
        return Valor;


}
//Converçao do exp
string Conversao::DecBin(int Dec, int Inf, int Sup)
{
    string resultado;
    int numInt = Dec;
   // cout<<Dec<<"\n";

    //Condição para conversão da base
   if(Dec <= Sup && Dec >= Inf)
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
    string resAnterior = resultado;
    std::ostringstream strs;
    strs << numInt;
    resultado = strs.str() + resAnterior;
   }
   else
       cout<<"Valor do expoente é maior ou menor que os limites inferior ou superior";

   return resultado;
}
//Conver;áo de binario para decimal
string Conversao::BinDec(string binInt, string binDec)
{
    int indice = 0;
    double Resultado = 0;
    //Convercáo da parte inteira
    for(int i = binInt.length()-1; i >= 0; i--)
    {
        Resultado += double(binInt.at(i)-48)*pow(2,indice);
        indice++;
    }
    //----------------------------------------------------------------//
    //Convercáo da parte fracionaria
    indice = -1;
    for(int i = 0; i <= binDec.length()-1; i++)
    {
        Resultado += double(binDec.at(i)-48)*pow(2,indice);
        indice--;
    }
    //----------------------------------------------------------------//
    std::ostringstream strs;
    strs << Resultado;

    return strs.str();
    this->Valor = strs.str();
}
// funçao que escreve na tela
void Conversao::print()
{
    cout<<Valor<<"\n";
}
