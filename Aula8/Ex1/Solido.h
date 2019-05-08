//
// Created by davi on 5/8/19.
//

#ifndef EX1_SOLIDO_H
#define EX1_SOLIDO_H


class Solido {

    private:
        double raio;
        double altura;

    public:
        Solido();
        ~Solido();

        void setRaio( double );
        double getRaio();

        void setAltura( double );
        double getAltura();

        virtual double calcularVolume() = 0;



};


#endif //EX1_SOLIDO_H
