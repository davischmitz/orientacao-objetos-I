//
// Created by davi on 4/3/19.
//

#ifndef EX1_DIAGRAMA_ITEMVENDIDO_H
#define EX1_DIAGRAMA_ITEMVENDIDO_H


#include "Produto.h"

class ItemVendido {

private:

    int quantidade;
    double precoTotal;
    Produto produto;

public:

    ItemVendido();
    ItemVendido(int, double, Produto);
    ~ItemVendido();

    void setQuantidade( int );
    int getQuantidade();

    void calculaPrecoTotal();
    double getPrecoTotal();

    void setProduto( Produto );
    Produto getProduto();

};


#endif //EX1_DIAGRAMA_ITEMVENDIDO_H
