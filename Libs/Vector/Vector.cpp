#include "pch.h"
#include <cmath>
#include "Vector.h"

using namespace NumberSpace;
using namespace VectorSpace;

Vector::Vector() : x(0.0), y(0.0) {}

Vector::Vector(const NumberSpace::Number& x, const NumberSpace::Number& y)
    : x(x), y(y) {
}

NumberSpace::Number Vector::getX() const {
    return x;
}

NumberSpace::Number Vector::getY() const {
    return y;
}

void Vector::setCoordinates(const NumberSpace::Number& newX, const NumberSpace::Number& newY) {
    x = newX;
    y = newY;
}

Vector Vector::operator+(const Vector& other) const {
    return Vector(x + other.x, y + other.y);
}

NumberSpace::Number Vector::polarRadius() const {
    double x_val = x.getValue();
    double y_val = y.getValue();
    double radius = std::sqrt(x_val * x_val + y_val * y_val);
    return NumberSpace::Number(radius);
}

NumberSpace::Number Vector::polarAngle() const {
    double x_val = x.getValue();
    double y_val = y.getValue();

    if (x_val == 0.0 && y_val == 0.0) 
        return NumberSpace::Number(0.0);
    
    double angle = std::atan2(y_val, x_val);
    return NumberSpace::Number(angle);
}

Vector Vector::ZERO_VECTOR() {
    return Vector(NumberSpace::ZERO, NumberSpace::ZERO);
}

Vector Vector::UNIT_VECTOR() {
    return Vector(NumberSpace::ONE, NumberSpace::ONE);
}