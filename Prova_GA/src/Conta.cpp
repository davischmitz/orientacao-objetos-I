#include <iostream>
#include "Conta.h"

using namespace std;

Conta::Conta() {}

Conta::~Conta() {}

void Conta::depositar(double valor) {
    if(valor < 0) {
        cout << "Valor invalido" << endl;
    } else {
        saldo += valor;
        cout << "Valor depositado com sucesso" << endl;
    }
}

double Conta::sacar(double valor) {
    if(valor > saldo) {
        cout << "Saldo insuficiente" << endl;
    } else {
        saldo -= valor;
        return valor;
    }
}

void Conta::exibirSaldo() {
    cout << "Saldo disponivel na conta: " << "R$ " << saldo << endl;
}



