/*
 * Orientação a Objetos - I
 *
 * Davi Schmitz
 *
 * Ex. 2
 */

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

    media.setGrauB(nota);

    media.calculaMedia();

    if (media.getMedia() >= 6) cout << "Aluno Aprovado" << endl;
    else {
        media.calculaNotaNecessariaGC();
        cout << "O aluno precisa de: " << media.getGrauC() << " pontos no Grau C" << endl;
    }


    return 0;
}