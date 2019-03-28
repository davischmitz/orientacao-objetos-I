//
// Created by davi on 3/27/19.
//

#include "Contato.h"

using namespace std;

Contato::Contato() {}
Contato::~Contato() {}

char* Contato::getNome() {
    return nome;
}

char* Contato::getEmail() {
    return email;
}

void Contato::setNome(char *n){
    nome = n;
}

void Contato::setEmail(char *e) {
    email = e;
}