#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "Poupanca.h"

using namespace std;

int main()
{

    ContaCorrente cc;
    Poupanca pp;

    cc.Creditar(10);
    pp.Creditar(20);

	// Teste Poupança
    pp.SetTaxaRendimento(0.1);
    cout << "Rendimento Poupança: ";
    pp.CalculaRendimento();
    cout << endl;

	// Teste Conta Corrente
    cc.setTaxaCobrada(15.50);
    cc.DescontaTaxa();
    cout << "Saldo da CC: " << cc.getSaldo() << endl;

}
