#include <iostream>
#include "Number.h"
#include "Vector.h"

using namespace NumberSpace;
using namespace VectorSpace;

int main() {
	Number a(1.0);
	a = Number(2.0) * Number(10);
	std::cout << "NUMBER PRODUCT " << a.getValue() << std::endl;
	Vector v(1.0, 2);
	Vector z = Vector::ZERO_VECTOR();
	v.setCoordinates(2, 3);
	std::cout << "VECTOR SUM " << (v + z).getX().getValue() << " " << (z + v).getY().getValue() << std::endl;
}
