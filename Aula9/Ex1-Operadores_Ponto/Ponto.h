//
// Created by davi on 5/15/19.
//

#ifndef EX1_OPERADORES_PONTO_PONTO_H
#define EX1_OPERADORES_PONTO_PONTO_H


class Ponto {

    private:
        int x, y;

    public:
        Ponto();
        ~Ponto();
        Ponto( int, int );

        int getX();

        int getY();

        Ponto operator+ ( Ponto );

        bool operator> ( Ponto );

        bool operator< ( Ponto );

};


#endif //EX1_OPERADORES_PONTO_PONTO_H
