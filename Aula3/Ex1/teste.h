#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED


class teste
{
    char tipo;
    int valorInt;
    char valorChar;
    double valorDouble;

public:
    teste(char v);
    teste(int v);
    teste(double v);
    teste(char v, int i);
    teste(char v, double d);
    teste(char v, int i, double d);
    char getValorChar() const       { return valorChar; };
    int getValorInt() const         { return valorInt; };
    double getValorDouble() const   { return valorDouble; };
    char getTipo() const            { return tipo; };
    void imprimeValor() const;
    ~teste() {};

};

#endif // TESTE_H_INCLUDED
