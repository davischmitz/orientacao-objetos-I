#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"

class Poupanca: public Conta {

    private:
        double taxaRendimento;

    public:
        Poupanca();
        Poupanca(double);
        virtual ~Poupanca();

        void setTaxaRendimento( double );
        double getTaxaRendimento();
        double calculaRendimento();
};

#endif // POUPANCA_H
