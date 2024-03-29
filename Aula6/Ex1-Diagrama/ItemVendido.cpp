#include "ItemVendido.h"

ItemVendido::ItemVendido() {
    this-> quantidade = 0;
    this-> precoTotal = 0;
}

ItemVendido::ItemVendido(int quantidade, double precoTotal, Produto produto) {
    this-> quantidade = quantidade;
    this-> precoTotal = precoTotal;
    this-> produto = produto;
}

ItemVendido::~ItemVendido() {}

void ItemVendido::setQuantidade(int quantidade) {
    this-> quantidade = quantidade;
}

int ItemVendido::getQuantidade() {
    return quantidade;
}

double ItemVendido::getPrecoTotal() {
    return precoTotal;
}

void ItemVendido::setProduto(Produto produto) {
    this-> produto = produto;
}

Produto ItemVendido::getProduto() {
    return produto;
}

void ItemVendido::calculaPrecoTotal() {
    this-> precoTotal = quantidade * produto.getPreco();
}
