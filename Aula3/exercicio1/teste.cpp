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


void teste::imprimeValor() const
{
    if (tipo == 'c')
        cout << valorChar;
    else if (tipo == 'd')
        cout << valorDouble;
    else
        cout << valorInt;

    cout << '\n';
};
