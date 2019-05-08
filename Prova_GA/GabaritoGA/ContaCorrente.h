#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"


class ContaCorrente: public Conta
{
    public:
        ContaCorrente();
        virtual ~ContaCorrente();
        double getTaxaCobrada();
        void setTaxaCobrada(double Taxa);
        void DescontaTaxa();
    protected:

    private:
        double TaxaCobrada;
};

#endif 
