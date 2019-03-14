//
// Created by davi on 3/13/19.
//

#include "Retangulo.h"

using namespace std;

Retangulo::Retangulo(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    setCoordinates(x1, y1, x2, y2, x3, y3, x4, y4);
}

void Retangulo::setCoordinates(double px1, double py1, double px2, double py2, double px3, double py3, double px4, double py4)
{
    if (validatePoint(px1, py1) && validatePoint(px2, py2) && validatePoint(px3, py3), validatePoint(px4,py4))
    {
        if (validateRectangle(px1, px4, px2, px3) && validateRectangle(py1, py4, py2, py3))
        {
            x1 = px1;
            y1 = py1;
            x2 = px2;
            y2 = py2;
            x3 = px3;
            y3 = py3;
            x4 = px4;
            y4 = py4;
        }
    }

}

bool Retangulo::validatePoint(double x, double y)
{
    return (x >= 0 && x < 20) && (y >= 0 && y < 20);
}

bool Retangulo::validateRectangle(double p1, double p2, double p3, double p4)
{
    return (p1 == p4) && (p2 == p3);
}