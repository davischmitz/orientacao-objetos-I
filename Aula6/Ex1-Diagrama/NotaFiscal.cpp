//
// Created by davi on 4/3/19.
//

#include <iostream>
#include "NotaFiscal.h"

using namespace std;

NotaFiscal::NotaFiscal() {
    this-> valorTotal = 0;
    this-> pos = 0;
}

NotaFiscal::~NotaFiscal() {}

void NotaFiscal::calculaValorTotal() {
    double total = 0;
    for (int i = 0; i < 10; i++) {
        total += itensVendidos[i].getPrecoTotal();
    }
    cout << "total" << total;
    this-> valorTotal = total;
}

double NotaFiscal::getValorTotal() {
    return valorTotal;
}

void NotaFiscal::setVendedor(Vendedor vendedor) {
    this-> vendedor = vendedor;
}

Vendedor NotaFiscal::getVendedor() {
    return vendedor;
}

void NotaFiscal::setCliente(Cliente cliente) {
    this-> cliente = cliente;
}

Cliente NotaFiscal::getCliente() {
    return cliente;
}

void NotaFiscal::setItemVendido(ItemVendido itemVendido) {
    if(pos < 10) {
        itensVendidos[pos++] = itemVendido;
    }
}

ItemVendido NotaFiscal::getItemVendido(int index) {
    return itensVendidos[index];
}
