#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"
#include "../includes/Triangle.hpp"

#include <iostream>

int main(void)
{
	Point a(Fixed(0.0f), Fixed(0.0f));
	Point b(Fixed(0.0f), Fixed(5.0f));
	Point c(Fixed(5.0f), Fixed(0.0f));
	Triangle T(a, b, c);

	std::cout << "A.x is " << T.GetA().GetX() << std::endl;
	std::cout << "A.Y is " << T.GetA().GetY() << std::endl;
	std::cout << "B.x is " << T.GetB().GetX() << std::endl;
	std::cout << "B.Y is " << T.GetB().GetY() << std::endl;
	std::cout << "C.x is " << T.GetC().GetX() << std::endl;
	std::cout << "C.Y is " << T.GetC().GetY() << std::endl;
}
