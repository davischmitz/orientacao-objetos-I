#include <iostream>
#include "ContaCorrente.h"

using namespace std;

ContaCorrente::ContaCorrente() {}

ContaCorrente::~ContaCorrente() {}

ContaCorrente::ContaCorrente(double saldo) {
    this-> saldo = saldo;
    this-> taxaManutencao = 0;
}
void ContaCorrente::setTaxaManutencao(double taxaManutencao) {
    if(taxaManutencao < 0) {
        cout << "Valor invalido" << endl;
    } else {
        this -> taxaManutencao = taxaManutencao;
    }
}

double ContaCorrente::getTaxaManutencao() {
    return taxaManutencao;
}

void ContaCorrente::descontaTaxa() {
    this-> saldo -= this-> taxaManutencao;
}
