#include <iostream>
#include "Produto.h"
#include "Cliente.h"
#include "Vendedor.h"
#include "NotaFiscal.h"

using namespace std;

int main() {

    int nProduto;
    int nVendedor;
    int nCliente;
    int nQuantidade;
    char fim = 'n';

    Produto bolacha("Bolacha", 5), cereal("Cereal", 3), chocolate("Chocolate", 6), carne("Carne", 20), fruta("Fruta", 5);
    Cliente davi, aline;
    Vendedor mateus("Mateus", 1), julio("julio", 2);
    NotaFiscal notaFiscal;
    ItemVendido itemVendido;

    davi.setNome("Davi");
    davi.setCpf("14991892117");
    davi.setEndereco("Gomes Jardim");

    aline.setNome("Aline");
    aline.setCpf("783746597867");
    aline.setEndereco("Rua Carlos Scherer");

    cout << "Escolha o cliente cadastrado: " << endl;
    cout << "1 - " << davi.getNome() << endl;
    cout << "2 - " << aline.getNome() << endl;
    cin >> nCliente;

    switch(nCliente) {
        case 1 :
            notaFiscal.setCliente(davi);
            break;
        case 2:
            notaFiscal.setCliente(aline);
        default:
            "Cliente não encontrado";
    }

    cout << "Escolha o vendedor cadastrado: " << endl;
    cout << "1 - " << mateus.getNome() << endl;
    cout << "2 - " << julio.getNome() << endl;
    cin >> nVendedor;

    switch(nVendedor) {
        case 1 :
            notaFiscal.setVendedor(mateus);
            break;
        case 2:
            notaFiscal.setVendedor(julio);
        default:
            "Vendedor não encontrado";
    }

    while(fim != 's') {

        cout << "Digite o numero correspondendo ao produto que deseja comprar:" << endl;
        cout << "1 - " << bolacha.getDecricao() << endl;
        cout << "2 - " << cereal.getDecricao() << endl;
        cout << "3 - " << chocolate.getDecricao() << endl;
        cout << "4 - " << carne.getDecricao() << endl;
        cout << "5 - " << fruta.getDecricao() << endl;

        cin >> nProduto;

        switch (nProduto) {
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
        itemVendido.calculaPrecoTotal();
        notaFiscal.setItemVendido(itemVendido);
        cout << "Para finalizar a compra degite 's', senao, digite 'c' " << endl;
        cin >> fim;
    }

    notaFiscal.calculaValorTotal();

    cout << "-----------------------------------------" << endl;
    cout << "\nNOTA FISCAL:\n" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Cliente: " << notaFiscal.getCliente().getNome() << endl;
    cout << "CPF: " << notaFiscal.getCliente().getCpf() << endl;
    cout << "Endereco: " << notaFiscal.getCliente().getEndereco() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Vendedor: " << notaFiscal.getVendedor().getNome() << endl;
    cout << "Codigo: " << notaFiscal.getVendedor().getCodigo() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Itens Vendidos: "<< endl;
    char * descricao;
    for (int i = 0; i < notaFiscal.getQuantidadeProdutosVendidos(); i++) {
         descricao = notaFiscal.getItemVendido(i).getProduto().getDecricao();
            cout << "Descricao: - ( x" << notaFiscal.getItemVendido(i).getQuantidade() << " ) " << notaFiscal.getItemVendido(i).getProduto().getDecricao() << " ( R$ " << notaFiscal.getItemVendido(i).getProduto().getPreco() << " ) p/unidade" <<endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << "Valor Total da nota fiscal: R$ " << notaFiscal.getValorTotal() << endl;
    cout << "-----------------------------------------" << endl;

    return 0;
}