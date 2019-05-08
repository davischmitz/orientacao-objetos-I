//
// Created by davi on 5/8/19.
//
#include <math.h>
#include "Cilindro.h"

Cilindro::Cilindro() {}

Cilindro::~Cilindro() {}

double Cilindro::calcularVolume() {
    return 3.14 * pow(getRaio(), 2) * getAltura();
}
