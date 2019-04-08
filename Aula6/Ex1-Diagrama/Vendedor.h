//
// Created by davi on 4/3/19.
//

#ifndef EX1_DIAGRAMA_VENDEDOR_H
#define EX1_DIAGRAMA_VENDEDOR_H


class Vendedor {

private:

    char* nome;
    int codigo;

public:

    Vendedor();
    Vendedor(char*, int);
    ~Vendedor();

    void setNome( char* );
    char* getNome();

    void setCodigo( int );
    int getCodigo();
};


#endif //EX1_DIAGRAMA_VENDEDOR_H
