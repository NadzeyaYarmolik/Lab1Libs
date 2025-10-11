#pragma once

#define VECTOR_API

#include "../Number/Number.h"

namespace VectorSpace {

    class VECTOR_API Vector {
    private:
        NumberSpace::Number x;
        NumberSpace::Number y;

    public:
        Vector();
        Vector(const NumberSpace::Number& x, const NumberSpace::Number& y);

        NumberSpace::Number getX() const;
        NumberSpace::Number getY() const;

        void setCoordinates(const NumberSpace::Number& x, const NumberSpace::Number& y);

        Vector operator+(const Vector& other) const;

        NumberSpace::Number polarRadius() const;
        NumberSpace::Number polarAngle() const;

        static Vector ZERO_VECTOR();
        static Vector UNIT_VECTOR();
    };
}
