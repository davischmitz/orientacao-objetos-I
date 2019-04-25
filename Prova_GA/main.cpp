#include <iostream>
#include "Poupanca.h"
#include "ContaCorrente.h"

using namespace std;

int main()
{
    Poupanca poupanca(100);
    ContaCorrente contaCorrente(500);

    poupanca.setTaxaRendimento(1.05);
    cout << "POUPANCA:" << endl;
    poupanca.exibirSaldo();

    cout << "Taxa de rendimento: " << poupanca.getTaxaRendimento() << endl;
    cout << "Valor do rendimento atual: " << "R$ " << poupanca.calculaRendimento() << endl;

    cout << "\nDepositando: ";
    poupanca.depositar(250);
    cout << "\nApos deposito de 250: " << endl;
    poupanca.exibirSaldo();

    cout << "\nSacando: R$ " << poupanca.sacar(50.25) << endl;
    poupanca.exibirSaldo();


    contaCorrente.setTaxaManutencao(10);
    cout << "\n\nCONTA CORRENTE:" << endl;
    contaCorrente.exibirSaldo();

    cout << "Taxa de manutencao: " << "R$ " << contaCorrente.getTaxaManutencao() << endl;

    cout << "\nDescontando taxa de manutencao" << endl;
    contaCorrente.descontaTaxa();
    contaCorrente.exibirSaldo();

    cout << "\nDepositando: ";
    contaCorrente.depositar(250);
    cout << "\nApos deposito de 250: " << endl;
    contaCorrente.exibirSaldo();

    cout << "\nSacando: R$ " << contaCorrente.sacar(50.25) << endl;
    contaCorrente.exibirSaldo();




    return 0;
}
