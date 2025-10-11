#pragma once

namespace NumberSpace {

    class Number {
    private:
        double value;

    public:
        Number();
        Number(double val);

        Number operator+(const Number& other) const;
        Number operator-(const Number& other) const;
        Number operator*(const Number& other) const;
        Number operator/(const Number& other) const;

        Number operator-() const;

        bool operator==(const Number& other) const;
        bool operator!=(const Number& other) const;
        bool operator<(const Number& other) const;
        bool operator>(const Number& other) const;
        bool operator<=(const Number& other) const;
        bool operator>=(const Number& other) const;

        double getValue() const;
        void setValue(double val);
    };

    extern const Number ZERO;
    extern const Number ONE;
}
