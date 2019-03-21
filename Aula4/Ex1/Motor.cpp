//
// Created by davi on 3/20/19.
//

#include "Motor.h"

using namespace std;

Motor::~Motor() {}

Motor::Motor()
{
    numCilindro = 0;
    potencia = 0;
}

Motor::Motor(int nc, int p)
{
    numCilindro = nc;
    potencia = p;
}

