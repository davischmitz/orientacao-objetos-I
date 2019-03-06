/*
 * Orientação a Objetos - I
 *
 * Davi Schmitz
 *
 * Ex. 1
 */

#ifndef EX1_CALCULADORA_H
#define EX1_CALCULADORA_H

#include <iostream>

class Calculadora
{
    private:
        float operando1;
        float operando2;
        float result;

    public:
        Calculadora();
        ~Calculadora();

        float getOperando1();
        float getOperando2();
        float getResultado();
        int setOperando1(float);
        int setOperando2(float);
        int soma();
        int subtrai();
        int multiplica();
        int divide();
};


#endif
