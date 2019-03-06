//
// Created by davi on 3/6/19.
//

#include "Relogio.h"

Relogio::Relogio() {
    setRelogio(0, 0, 0);
}

Relogio::Relogio(int h, int m, int s) {
    setRelogio(h, m, s);
}

int Relogio::getHora() { return hora; }

int Relogio::getMinuto() { return minuto; }

int Relogio::getSegundo() { return segundo; }

void Relogio::setHora(int h) {
    if(h > 0 && h < 24) hora = h;
    else hora = 0;
}

void Relogio::setMinuto(int m) {
    if(m > 0 && m < 60) minuto = m;
    else minuto = 0;
}

void Relogio::setSegundo(int s) {
    if(s > 0 && s < 60) segundo = s;
    else segundo = 0;
}

void Relogio::setRelogio(int h, int m, int s) {
    setHora(h);
    setMinuto(m);
    setSegundo(s);
}


