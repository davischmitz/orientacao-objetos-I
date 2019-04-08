//
// Created by davi on 4/3/19.
//

#ifndef EX1_DIAGRAMA_PRODUTO_H
#define EX1_DIAGRAMA_PRODUTO_H


class Produto {

private:

    char* descricao;
    double preco;

public:

    Produto();
    Produto(char*, double);
    ~Produto();

    void setDescricao( char * );
    char* getDecricao();

    void setPreco( double);
    double getPreco();
};


#endif //EX1_DIAGRAMA_PRODUTO_H
