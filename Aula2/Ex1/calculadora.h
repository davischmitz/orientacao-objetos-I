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
        void setOperando1(float);
        void setOperando2(float);
        void soma();
        void subtrai();
        void multiplica();
        void divide();
};


#endif
