//
// Created by davi on 5/15/19.
//

#include "Ponto.h"

Ponto::Ponto() {}

Ponto::~Ponto() {}

Ponto::Ponto(int a, int b) {
    x = a;
    y = b;
}

Ponto Ponto::operator+(Ponto ponto) {
    int a, b;
    a = x + ponto.x;
    b = y + ponto.y;

    return Ponto(a, b);
}

bool Ponto::operator>(Ponto ponto) {
    return x > ponto.x && y > ponto.y;
}

bool Ponto::operator<(Ponto ponto) {
    return x < ponto.x && y < ponto.y;
}

int Ponto::getX() {
    return x;
}

int Ponto::getY() {
    return y;
}