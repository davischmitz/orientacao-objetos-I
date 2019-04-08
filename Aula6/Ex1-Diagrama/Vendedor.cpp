//
// Created by davi on 4/3/19.
//

#include "Vendedor.h"

Vendedor::Vendedor() {
    this-> nome = nullptr;
    this-> codigo = 0;
}

Vendedor::Vendedor(char * nome, int codigo) {
    this-> nome = nome;
    this-> codigo = codigo;
}

Vendedor::~Vendedor() {}

void Vendedor::setNome(char * nome) {
    this-> nome = nome;
}

char* Vendedor::getNome() {
    return nome;
}

void Vendedor::setCodigo(int codigo) {
    this-> codigo = codigo;
}

int Vendedor::getCodigo() {
    return codigo;
}
