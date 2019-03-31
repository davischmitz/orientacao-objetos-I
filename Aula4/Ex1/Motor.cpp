//
// Created by davi on 3/20/19.
//

#include "Motor.h"

using namespace std;

Motor::Motor() {
    numCilindro = 0;
    potencia = 0;
}

Motor::Motor(int numCilindro, int potencia) {
    this-> numCilindro = numCilindro;
    this-> potencia = potencia;
}

Motor::~Motor() {}

void Motor::setNumCilindro(int numCilindro) {
   this-> numCilindro = numCilindro;
}

int Motor::getNumCilindro() {
    return numCilindro;
}

void Motor::setPotencia(int potencia) {
    this-> potencia = potencia;
}

int Motor::getPotencia() {
    return potencia;
}

