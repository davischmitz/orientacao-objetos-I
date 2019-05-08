#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.h"


class Poupanca : public Conta
{
    public:
        Poupanca();
        virtual ~Poupanca();
        void SetTaxaRendimento(double);
        double GetTaxaRendimento();
        void CalculaRendimento();
    protected:

    private:
        double TaxaRendimento; 
};

#endif 
