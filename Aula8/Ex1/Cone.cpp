//
// Created by davi on 5/8/19.
//
#include <math.h>
#include "Cone.h"

Cone::Cone() {}

Cone::~Cone() {}

double Cone::calcularVolume() {
    return 3.14 * pow(getRaio(), 2) * (getAltura() / 3);
}