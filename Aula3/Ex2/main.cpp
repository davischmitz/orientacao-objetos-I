/*
 * Orientação a Objetos - I
 *
 * Davi Schmitz
 *
 * Ex. 2
 */

#include <iostream>
#include "Retangulo.h"

using namespace std;

int main() {

    Retangulo retangulo(1, 3, 5, 3, 5, 1, 1, 1);

    retangulo.calculateLength(retangulo);
    retangulo.calculateWidth(retangulo);
    retangulo.calculatePerimeter(retangulo);
    retangulo.calculateArea(retangulo);

    cout << "Comprimento do retangulo: " << retangulo.getLength() << endl;
    cout << "Largura do retangulo: " << retangulo.getWidth() << endl;
    cout << "Perimetro do retangulo: " << retangulo.getPerimeter() << endl;
    cout << "Area do retangulo: " << retangulo.getArea() << endl;


    return 0;
}