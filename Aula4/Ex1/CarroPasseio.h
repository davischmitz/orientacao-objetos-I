//
// Created by davi on 3/31/19.
//

#ifndef EX1_CARROPASSEIO_H
#define EX1_CARROPASSEIO_H


#include "Veiculo.h"
#include "Motor.h"

class CarroPasseio: public Motor, public Veiculo {

private:

    char* cor;
    char* modelo;

public:

    CarroPasseio();
    CarroPasseio(char*, char*);
    ~CarroPasseio();

    void setCor(char *cor);
    char* getCor();

    void setModelo(char *modelo);
    char* getModelo();
};


#endif //EX1_CARROPASSEIO_H
