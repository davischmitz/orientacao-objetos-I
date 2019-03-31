//
// Created by davi on 3/20/19.
//

#ifndef EX1_MOTOR_H
#define EX1_MOTOR_H


class Motor {

private:

    int numCilindro;
    int potencia;

public:

    Motor();
    Motor(int, int);
    ~Motor();

    void setNumCilindro( int );
    int getNumCilindro();

    void setPotencia( int );
    int getPotencia();
};


#endif //EX1_MOTOR_H
