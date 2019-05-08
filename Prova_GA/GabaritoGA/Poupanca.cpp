#include "Poupanca.h"
#include <iostream>

using namespace std;

Poupanca::Poupanca()
{
    //ctor
}

Poupanca::~Poupanca()
{
    //dtor
}

void Poupanca::SetTaxaRendimento(double taxa){
    TaxaRendimento = taxa;
}

double Poupanca::GetTaxaRendimento(){
    return TaxaRendimento;
}

void Poupanca::CalculaRendimento(){
    cout << getSaldo()*TaxaRendimento/100;
}
