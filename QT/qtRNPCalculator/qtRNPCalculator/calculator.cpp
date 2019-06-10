#include "calculator.h"

Calculator::Calculator() {}

Calculator::~Calculator() {}

float Calculator::sum(float value1, float value2) {
    return value1 + value2;
}

float Calculator::subtract(float value1, float value2) {
   return value1 - value2;
}

float Calculator::multiply(float value1, float value2) {
    return value1 * value2;
}

float Calculator::divide(float value1, float value2) {
     return value1 / value2;
}
