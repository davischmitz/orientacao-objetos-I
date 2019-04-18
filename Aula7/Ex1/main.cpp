#include <iostream>
#include "Box.h"

int main() {

    int nObjetos;

    cout << "Digite o numero maximo de objetos:" << endl;
    cin >> nObjetos;

    Box *b[nObjetos];

    for (int i = 0; i < nObjetos; i++) {
        b[i] = new Box();
    }

    return 0;
}