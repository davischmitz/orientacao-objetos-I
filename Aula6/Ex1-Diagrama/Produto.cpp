//
// Created by davi on 4/3/19.
//

#include "Produto.h"

Produto::Produto() {
    this-> descricao = nullptr;
    this-> preco = 0;
}

Produto::Produto(char* descricao, double preco) {
    this-> descricao = descricao;
    this-> preco = preco;
}

Produto::~Produto() {}

void Produto::setDescricao(char* descricao) {
    this-> descricao = descricao;
}

char* Produto::getDecricao() {
    return descricao;
}

void Produto::setPreco(double preco) {
    this-> preco = preco;
}

double Produto::getPreco() {
    return preco;
}
