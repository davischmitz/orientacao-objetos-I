#include <iostream>
#include "Produto.h"
#include "Cliente.h"
#include "Vendedor.h"
#include "NotaFiscal.h"

using namespace std;

int main() {

    int nProduto;
    int nQuantidade;

    Produto bolacha("Bolacha", 5), cereal("Cereal", 3), chocolate("Chocolate", 6), carne("Carne", 20), fruta("Fruta", 5);
    Cliente davi, aline;
    Vendedor mateus("Mateus", 1), joao("Joao", 2);

    davi.setNome("Davi");
    davi.setCpf("04001802007");
    davi.setEndereco("Gomes Jardim");

    aline.setNome("Aline");
    aline.setCpf("783746597867");
    aline.setEndereco("Rua Joaquim Nabuco");

    NotaFiscal notaFiscal;
    ItemVendido itemVendido;

    notaFiscal.setCliente(davi);
    notaFiscal.setVendedor(mateus);

    /*itemVendido.setProduto(bolacha);
    itemVendido.setQuantidade(1);

    notaFiscal.setItemVendido(itemVendido);
    notaFiscal.calculaValorTotal();*/

    cout << "Digite o numero correspondendo ao produto que deseja comprar:" << endl;
    cin >> nProduto;

    switch(nProduto) {
        case 1:
            itemVendido.setProduto(bolacha);
            break;
        case 2:
            itemVendido.setProduto(cereal);
            break;
        case 3:
            itemVendido.setProduto(chocolate);
            break;
        case 4:
            itemVendido.setProduto(carne);
            break;
        case 5:
            itemVendido.setProduto(fruta);
            break;
        default:
            cout << "Produto nao encontrado!" << endl;
            break;

    }

    cout << "Digite a quantidade: " << endl;
    cin >> nQuantidade;

    itemVendido.setQuantidade(nQuantidade);
    notaFiscal.setItemVendido(itemVendido);
    notaFiscal.calculaValorTotal();

    cout << "\nNOTA FISCAL:\n" << endl;
    cout << "Cliente: " << notaFiscal.getCliente().getNome() << endl;
    cout << "Vendedor: " << notaFiscal.getVendedor().getNome() << endl;
    cout << "Itens Vendidos: " << notaFiscal.getItemVendido(0).getProduto().getDecricao() << endl;
    cout << "Valor Total da nota fiscal: " << notaFiscal.getValorTotal() << endl;

    return 0;
}