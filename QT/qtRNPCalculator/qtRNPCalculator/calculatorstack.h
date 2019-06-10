#ifndef CALCULATORSTACK_H
#define CALCULATORSTACK_H

#include <QStack>

using namespace std;

class CalculatorStack
{

private:
    QStack<float> qStack;

public:
    CalculatorStack();
    ~CalculatorStack();

    QStack<float> getStack();
    bool validateStackSize();
    void push(float);
    float pop();
    void swapLastElements();
};

#endif // CALCULATORSTACK_H
