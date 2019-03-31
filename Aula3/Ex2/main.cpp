/*
 * Orientação a Objetos - I
 *
 * Davi Schmitz
 *
 * Ex. 2
 */

#include <iostream>
#include "Retangulo.h"
#include <string.h>

using namespace std;

string handleShape(Retangulo r) {
    if(r.isSquare(r)) return "formam";
    else return "não formam";
}

int main() {

    Retangulo retangulo1(1, 3, 5, 3, 5, 1, 1, 1);

    retangulo1.calculateLength(retangulo1);
    retangulo1.calculateWidth(retangulo1);
    retangulo1.calculatePerimeter(retangulo1);
    retangulo1.calculateArea(retangulo1);

    cout << "Comprimento do retangulo: " << retangulo1.getLength() << endl;
    cout << "Largura do retangulo: " << retangulo1.getWidth() << endl;
    cout << "Perimetro do retangulo: " << retangulo1.getPerimeter() << endl;
    cout << "Area do retangulo: " << retangulo1.getArea() << endl;
    cout << "Os pontos informados " << handleShape(retangulo1) << " um quadrado." << endl;

    cout << "\n---------------------------------------------\n\n";

    Retangulo retangulo2(1, 3, 3, 3, 3, 1, 1, 1);

    retangulo2.calculateLength(retangulo2);
    retangulo2.calculateWidth(retangulo2);
    retangulo2.calculatePerimeter(retangulo2);
    retangulo2.calculateArea(retangulo2);

    cout << "Comprimento do retangulo: " << retangulo2.getLength() << endl;
    cout << "Largura do retangulo: " << retangulo2.getWidth() << endl;
    cout << "Perimetro do retangulo: " << retangulo2.getPerimeter() << endl;
    cout << "Area do retangulo: " << retangulo2.getArea() << endl;
    cout << "Os pontos informados " << handleShape(retangulo2) << " um quadrado." << endl;


    return 0;
}