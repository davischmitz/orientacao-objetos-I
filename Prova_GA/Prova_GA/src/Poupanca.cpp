#include "Poupanca.h"

Poupanca::Poupanca() {}

Poupanca::~Poupanca() {}

Poupanca::Poupanca(double saldo) {
    this-> saldo = saldo;
    this-> taxaRendimento = 0;
}

void Poupanca::setTaxaRendimento(double taxaRendimento) {
    this-> taxaRendimento = taxaRendimento;
}

double Poupanca::getTaxaRendimento() {
    return taxaRendimento;
}

double Poupanca::calculaRendimento() {
    return this-> saldo * this-> taxaRendimento;
}
