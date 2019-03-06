#include <iostream>

#include "Relogio.h"

using namespace std;

int main() {
    Relogio relogio1;
    Relogio relogio2(21, 30, 0);

    cout << "Relogio 1 = "
         << relogio1.getHora() << ":"
         << relogio1.getMinuto() << ":"
         << relogio1.getSegundo() << endl;

    cout << "Relogio 2 = "
         << relogio2.getHora() << ":"
         << relogio2.getMinuto() << ":"
         << relogio2.getSegundo() << endl;
    return 0;
}