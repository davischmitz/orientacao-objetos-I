//
// Created by davi on 3/13/19.
//

#include "Retangulo.h"

using namespace std;

Retangulo::Retangulo() {}
Retangulo::~Retangulo() {}

Retangulo::Retangulo(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    setCoordinates(x1, y1, x2, y2, x3, y3, x4, y4);
}

void Retangulo::setWidth(float w) {
    width = w;
}

float Retangulo::getWidth() {
    return width;
}

void Retangulo::setLength(float l) {
    length = l;
}

float Retangulo::getLength() {
    return length;
}

void Retangulo::setPerimeter(float p) {
    perimeter = p;
}

float Retangulo::getPerimeter() {
    return perimeter;
}

void Retangulo::setArea(float a) {
    area = a;
}

float Retangulo::getArea() {
    return area;
}

void Retangulo::setCoordinates(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    if (validateCoordinates(x1, y1, x2, y2, x3, y3, x4, y4)) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        this->x3 = x3;
        this->y3 = y3;
        this->x4 = x4;
        this->y4 = y4;
    }
}

bool Retangulo::validateCoordinates(int px1, int py1, int px2, int py2, int px3, int py3, int px4,
                                    int py4) {
    return validatePoint(px1, py1) &&
           validatePoint(px2, py2) &&
           validatePoint(px3, py3) &&
           validatePoint(px4, py4) &&
           validateRectangleX(px1, px2, px3, px4) &&
           validateRectangleY(py1, py2, py3, py4);
}

bool Retangulo::validatePoint(int x, int y) {
    return (x >= 0 && x < 20) && (y >= 0 && y < 20);
}

bool Retangulo::validateRectangleX(int p1, int p2, int p3, int p4) {
    return (p1 == p4) && (p2 == p3);
}

bool Retangulo::validateRectangleY(int p1, int p2, int p3, int p4) {
    return (p1 == p2) && (p3 == p4);
}

void Retangulo::calculateLength(Retangulo r) {
     setLength(r.y1 - r.y4);
}

void Retangulo::calculateWidth(Retangulo r) {
    setWidth(r.x2 - r.x1);
}

void Retangulo::calculatePerimeter(Retangulo r) {
    setPerimeter((2 * r.length) + (2 * r.width));
}

void Retangulo::calculateArea(Retangulo r) {
    setArea(r.length * r.width);
}
