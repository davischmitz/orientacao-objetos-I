#include "calculatorstack.h"

CalculatorStack::CalculatorStack() {}

CalculatorStack::~CalculatorStack() {}

QStack<float> CalculatorStack::getStack() {
    return this->qStack;
}

bool CalculatorStack::validateStackSize() {
    return qStack.count() > 1;
}

void CalculatorStack::push(float value) {
    this->qStack.push(value);
}

float CalculatorStack::pop() {
    return this->qStack.pop();
}

void CalculatorStack::swapLastElements() {
    float last = qStack.pop();
    float swap = qStack.pop();
    qStack.push(last);
    qStack.push(swap);
}
