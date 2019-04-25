#ifndef CONTA_H
#define CONTA_H


class Conta {

    protected:
        double saldo;

    public:
        Conta();
        virtual ~Conta();

        void depositar( double );
        double sacar( double );
        void exibirSaldo();
};

#endif // CONTA_H
