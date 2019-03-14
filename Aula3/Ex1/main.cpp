#include <iostream>
#include "teste.h"

using namespace std;

int main()
{
    teste a = 1;
    teste b = 'm';
    teste c = 3.1417;
    teste d('a', 1);
    teste e('b', 2.5);
    teste f('c', 2, 2.7);

    a.imprimeValor();
    b.imprimeValor();
    c.imprimeValor();
    d.imprimeValor();
    e.imprimeValor();
    f.imprimeValor();

}
