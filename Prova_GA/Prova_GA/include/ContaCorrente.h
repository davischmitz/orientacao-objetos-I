#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente: public Conta {

     private:
        double taxaManutencao;

    public:
        ContaCorrente();
        ContaCorrente(double);
        virtual ~ContaCorrente();

        void setTaxaManutencao( double );
        double getTaxaManutencao();
        void descontaTaxa();
};

#endif // CONTACORRENTE_H
