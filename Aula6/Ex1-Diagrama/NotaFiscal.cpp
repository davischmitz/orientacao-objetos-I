#include <iostream>
#include "NotaFiscal.h"

using namespace std;

NotaFiscal::NotaFiscal() {
    this-> valorTotal = 0;
    this-> pos = 0;
    this->produtosVendidos = 0;
}

NotaFiscal::~NotaFiscal() {}

void NotaFiscal::calculaValorTotal() {
    double total = 0;
    for (int i = 0; i < 10; i++) {
        itensVendidos[i].calculaPrecoTotal();
        total += itensVendidos[i].getPrecoTotal();
    }
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
        this->incrementarProdutosVendidos();
    }
}

ItemVendido NotaFiscal::getItemVendido(int index) {
    return itensVendidos[index];
}

void NotaFiscal::incrementarProdutosVendidos() {
    produtosVendidos++;
}

int NotaFiscal::getQuantidadeProdutosVendidos() {
    return produtosVendidos;
}
