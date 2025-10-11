#pragma once

#ifdef VECTOR_EXPORTS
#define VECTOR_API __declspec(dllexport)
#else
#define VECTOR_API __declspec(dllimport)
#endif

#include "Number.h"

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