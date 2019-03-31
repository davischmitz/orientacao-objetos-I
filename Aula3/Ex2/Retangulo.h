//
// Created by davi on 3/13/19.
//

#ifndef EX2_RETANGULO_H
#define EX2_RETANGULO_H


class Retangulo
{
    int x1;
    int x2;
    int x3;
    int x4;
    int y1;
    int y2;
    int y3;
    int y4;
    float length;
    float width;
    float perimeter;
    float area;
    void setCoordinates(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
    bool validateCoordinates(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
    bool validatePoint(int x, int y);
    bool validateRectangleX(int x1, int x2, int x3, int x4);
    bool validateRectangleY(int y1, int y2, int y3, int y4);

public:
    Retangulo();
    ~Retangulo();
    Retangulo(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

    void setPerimeter(float);
    float getPerimeter();

    void setLength(float);
    float getLength();

    void setWidth(float);
    float getWidth();

    void setArea(float);
    float getArea();

    void calculatePerimeter(Retangulo r);
    void calculateLength(Retangulo r);
    void calculateWidth(Retangulo r);
    void calculateArea(Retangulo r);
    bool isSquare(Retangulo r);
};


#endif //EX2_RETANGULO_H
