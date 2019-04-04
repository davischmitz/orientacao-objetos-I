#include <iostream>
#include "Media.h"

using namespace std;

Media::Media() {
    this->grauA = 0;
    this->grauB = 0;
    this->grauC = 0;
    this->media = 0;
}

Media::~Media() {}

float Media::getGrauA() {
    return grauA;
}

float Media::getGrauB() {
    return grauB;
}

double Media::getGrauC() {
    return grauC;
}

double Media::getMedia() {
    return media;
}

void Media::setGrauA(float ga) {
    if(ga >= 0 && ga <= 10.0 ) grauA = ga;
}

void Media::setGrauB(float gb) {
    if(gb >= 0 && gb <= 10.0 ) grauB = gb;
}

void Media::calculaMedia() {
     media = (grauA * 0.33) + (grauB * 0.67);
}

float Media::calculaNotaNecessariaGC() {
    double recuperandoGA = (6.0 - (grauB * 0.67)) / 0.33;
    double recuperandoGB = (6.0 - (grauA * 0.33)) / 0.67;

    if(recuperandoGA > recuperandoGB) {
        grauC = recuperandoGB;
        cout << "Recuperando GB" << endl;
    }
    else {
        grauC = recuperandoGA;
        cout << "Recuperando GA" << endl;
    }
}




