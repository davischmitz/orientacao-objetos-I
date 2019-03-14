#include <iostream>
#include "teste.h"

using namespace std;

teste::teste(char v)
{
    tipo = 'c';
    valorInt = 0;
    valorChar = v;
    valorDouble = 0;
};

teste::teste(int v)
{
    tipo = 'i';
    valorInt = v;
    valorChar = 0;
    valorDouble = 0;
};

teste::teste(double v)
{
    tipo = 'd';
    valorInt = 0;
    valorChar = 0;
    valorDouble = v;
};

teste::teste(char v, int i)
{
    tipo = 'e';
    valorInt = i;
    valorChar = v;
    valorDouble = 0;
}

teste::teste(char v, double d)
{
    tipo = 'f';
    valorInt = 0;
    valorChar = v;
    valorDouble = d;
}

teste::teste(char v, int i, double d)
{
    tipo = 'g';
    valorInt = i;
    valorChar = v;
    valorDouble = d;
}


void teste::imprimeValor() const
{
    if (tipo == 'c')
        cout << valorChar;
    else if (tipo == 'd')
        cout << valorDouble;
    else if (tipo == 'i')
        cout << valorInt;
    else if (tipo == 'e')
        cout << valorChar << ' ' << valorInt;
    else if (tipo == 'f')
        cout << valorChar << ' ' << valorDouble;
    else cout << valorChar << ' ' << valorInt << ' ' << valorDouble;

    cout << '\n';
};
