/*
 * Orientação a Objetos - I
 *
 * Davi Schmitz
 *
 * Ex. 1
 */

#include <iostream>
#include "calculadora.h"

using namespace std;

int main(void)
{

    float n[2];
    char operacao;

    Calculadora calculadoraExemplo;

    cout << "Digite o Operando 1: " << endl;

    cin >> n[0];

    cout << "Digite o Operando 2: " << endl;

    cin >> n[1];

    calculadoraExemplo.setOperando1(n[0]);
    calculadoraExemplo.setOperando2(n[1]);

    cout << "Digite a Operação: [+ - * /]" << endl;
    cin >> operacao;

    if (operacao == '+')
        calculadoraExemplo.soma();
    if (operacao == '-')
        calculadoraExemplo.subtrai();
    if (operacao == '*')
        calculadoraExemplo.multiplica();
    if (operacao == '/')
        calculadoraExemplo.divide();

    cout << "Resultado : " << calculadoraExemplo.getResultado() << endl;

    return 0;
}