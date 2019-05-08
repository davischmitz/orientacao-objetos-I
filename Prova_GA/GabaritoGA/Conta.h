#ifndef CONTA_H
#define CONTA_H


class Conta
{
    public:
        Conta();
        virtual ~Conta();

        void MostrarSaldo();
        void Creditar(double);
        void Debitar(double);
        double getSaldo();
    protected:

    private:
        double Saldo;

};

#endif 
