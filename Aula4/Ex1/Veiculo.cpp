//
// Created by davi on 3/31/19.
//

#include "Veiculo.h"
#include "Motor.h"

using namespace std;

Veiculo::Veiculo() {
    peso = 0;
    velocMax = 0;
    preco = 0;
}

Veiculo::Veiculo(int peso, int velocMax, float preco) {
    this-> peso = peso;
    this-> velocMax = velocMax;
    this-> preco = preco;
}

Veiculo::~Veiculo() {}

void Veiculo::setPeso(int peso) {
    this-> peso = peso;
}

int Veiculo::getPeso() {
    return peso;
}

void Veiculo::setVelocMax(int velocMax) {
    this-> velocMax = velocMax;
}

int Veiculo::getVelocMax() {
    return velocMax;
}

void Veiculo::setPreco(float preco) {
    this-> preco = preco;
}

float Veiculo::getPreco() {
    return preco;
}
