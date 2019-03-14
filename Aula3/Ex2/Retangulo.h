//
// Created by davi on 3/13/19.
//

#ifndef EX2_RETANGULO_H
#define EX2_RETANGULO_H


class Retangulo
{
    double x1;
    double x2;
    double x3;
    double x4;
    double y1;
    double y2;
    double y3;
    double y4;
    double comprimento;
    double largura;
    double perimetro;
    double area;

public:
    Retangulo();
    Retangulo(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
    void setCoordinates(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
    bool validatePoint(double x, double y);
    bool validateRectangle(double x1, double x2, double x3, double x4);
    ~Retangulo() {};

};


#endif //EX2_RETANGULO_H
