#include "Conta.h"
#include <iostream>

using namespace std;

Conta::Conta()
{
    Saldo = 0;
}


Conta::~Conta()
{
    //dtor
}

void Conta::MostrarSaldo(){
    cout << Saldo << endl;
}

void Conta::Creditar(double val){
    Saldo = Saldo + val;
}

void Conta::Debitar(double val){
    if (val > Saldo){
        cout << "Nao possui saldo." << endl;
    }
    else
    {
        Saldo = Saldo - val;
    }
}

double Conta::getSaldo(){
    return Saldo;
}
