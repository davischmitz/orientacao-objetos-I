/*
 * Created by davi on 3/6/19.
*/


#include "Media.h"

using namespace std;

Media::Media() {}
Media::~Media() {}

float Media::getGrauA() {
    return grauA;
}

float Media::getGrauB() {
    return grauB;
}

float Media::getGrauC() {
    return grauC;
}

float Media::getMedia() {
    return media;
}

void Media::setGrauA(float ga) {
    if(ga >= 0 && ga <= 10.0 ) grauA = ga;
    else grauA = 0;
}

void Media::setGrauB(float gb) {
    if(gb >= 0 && gb <= 10.0 ) grauB = gb;
    else grauB = 0;
}

void Media::calculaMedia() {
     media = grauA * (1/3) + grauB * (2/3);
}



