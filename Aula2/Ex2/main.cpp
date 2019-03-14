#include <iostream>
#include "Media.h"

using namespace std;

int main() {

    float nota;

    Media media;

    cout << "Digite a nota do grau A: " << endl;

    cin >> nota;

    media.setGrauA(nota);

    cout << "Digite a nota do grau B: " << endl;

    cin >> nota;


    return 0;
}