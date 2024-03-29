#ifndef EX1_DIAGRAMA_NOTAFISCAL_H
#define EX1_DIAGRAMA_NOTAFISCAL_H


#include "Cliente.h"
#include "Vendedor.h"
#include "ItemVendido.h"

class NotaFiscal {

private:

    int produtosVendidos;
    double valorTotal;
    Cliente cliente;
    Vendedor vendedor;
    ItemVendido itensVendidos[10];
    int pos;

public:

    NotaFiscal();
    ~NotaFiscal();

    void incrementarProdutosVendidos();
    int getQuantidadeProdutosVendidos();

    void calculaValorTotal();
    double getValorTotal();

    void setVendedor( Vendedor );
    Vendedor getVendedor();

    void setCliente (Cliente );
    Cliente getCliente();

    void setItemVendido( ItemVendido );
    ItemVendido getItemVendido( int );
};


#endif //EX1_DIAGRAMA_NOTAFISCAL_H
