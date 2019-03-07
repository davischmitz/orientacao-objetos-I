/*
 * Orientação a Objetos - I
 *
 * Davi Schmitz
 *
 * Ex. 1
 */

#include <iostream>
#include "calculadora.h"

using namespace std;

Calculadora::Calculadora() {}

Calculadora::~Calculadora() {}

float Calculadora::getOperando1() { return operando1; }

float Calculadora::getOperando2() { return operando2; }

float Calculadora::getResultado() { return result; }

void Calculadora::setOperando1(float op1) {
    operando1 = op1;
}

void Calculadora::setOperando2(float op2) {
    operando2 = op2;
}

void Calculadora::soma() {
    result = (operando1 + operando2);
}

void Calculadora::subtrai() {
    result = (operando1 - operando2);
}

void Calculadora::multiplica() {
    result = (operando1 * operando2);
}

void Calculadora::divide() {
    result = (operando1 / operando2);
}


