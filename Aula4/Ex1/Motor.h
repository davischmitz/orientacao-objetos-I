//
// Created by davi on 3/20/19.
//

#ifndef EX1_MOTOR_H
#define EX1_MOTOR_H


class Motor
{

private:
    int numCilindro;
    int potencia;

public:
    ~Motor();
    Motor();
    Motor(int nc, int p);

    int getNumCilindro();
    int getPotencia();

    void setNumCilindro( int );
    void setPotencia( int );
};


#endif //EX1_MOTOR_H
