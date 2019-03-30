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

    Calculadora calculadora;

    cout << "Digite o Operando 1: " << endl;

    cin >> n[0];

    cout << "Digite o Operando 2: " << endl;

    cin >> n[1];

    calculadora.setOperando1(n[0]);
    calculadora.setOperando2(n[1]);

    cout << "Digite a Operação: [+ - * /]" << endl;
    cin >> operacao;

    if (operacao == '+')
        calculadora.soma();
    if (operacao == '-')
        calculadora.subtrai();
    if (operacao == '*')
        calculadora.multiplica();
    if (operacao == '/')
        calculadora.divide();

    cout << "Resultado : " << calculadora.getResultado() << endl;

    return 0;
}