//
// Created by davi on 5/8/19.
//

#include "Solido.h"

Solido::Solido() {
    this -> altura = 0;
    this -> raio = 0;
}

Solido::~Solido() {}

void Solido::setAltura(double altura) {
    this -> altura = altura;
}

double Solido::getAltura() {
    return altura;
}

void Solido::setRaio(double raio) {
    this -> raio = raio;
}

double Solido::getRaio() {
    return raio;
}
