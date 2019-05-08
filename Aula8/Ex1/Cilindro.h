//
// Created by davi on 5/8/19.
//

#ifndef EX1_CILINDRO_H
#define EX1_CILINDRO_H


#include "Solido.h"

class Cilindro: public Solido {

    public:
        Cilindro();
        ~Cilindro();

        double calcularVolume();

};


#endif //EX1_CILINDRO_H
