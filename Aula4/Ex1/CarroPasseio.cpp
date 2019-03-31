//
// Created by davi on 3/31/19.
//

#include "CarroPasseio.h"

CarroPasseio::CarroPasseio() {
    this-> cor = nullptr;
    this-> modelo = nullptr;
}

CarroPasseio::CarroPasseio(char *cor, char *modelo) {
    this-> cor = cor;
    this-> modelo = modelo;
}

CarroPasseio::~CarroPasseio() {}

void CarroPasseio::setCor(char *cor) {
    this-> cor = cor;
}

char* CarroPasseio::getCor() {
    return cor;
}

void CarroPasseio::setModelo(char *modelo) {
    this-> modelo = modelo;
}

char* CarroPasseio::getModelo() {
    return modelo;
}



