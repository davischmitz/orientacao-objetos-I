#include <iostream>
#include <string.h>
#include "Ponto.h"

using namespace std;

string comparePoints(Ponto p1, Ponto p2) {
    if(p1 > p2) {
        return "P1 é maior que P2";
    }

    return "P2 é maior que P1";
}

int main() {

    Ponto p1(1, 5), p2(2, 6), p3;

    p3 = p1 + p2;

    cout << "Soma: X=" << p3.getX() << " Y=" << p3.getY() << endl;

    cout << "\n" << comparePoints(p1, p2) << endl;


    return 0;
}