#include <iostream>
#include "Cilindro.h"
#include "Cone.h"

//
// Created by Davi on 5/8/19.
//

using namespace std;

int main() {

    int input, raio, altura;

    cout << "Escolha o solido: " << endl;
    cout << "1 - Cilindro\n" << "2 - Cone" << endl;
    cin >> input;

    cout << "Digite o raio: " << endl;
    cin >> raio;

    cout << "Digite a altura" << endl;
    cin >> altura;

    if (input == 1) {
       Cilindro cilindro;

       cilindro.setRaio(raio);
       cilindro.setAltura(altura);

       cout << "Volume: " << cilindro.calcularVolume() << endl;
    }

    else if (input == 2) {
        Cone cone;

        cone.setRaio(raio);
        cone.setAltura(altura);

        cout << "Volume: " << cone.calcularVolume() << endl;
    }

    return 0;
}