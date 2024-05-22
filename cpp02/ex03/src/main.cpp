#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"
#include "../includes/Triangle.hpp"

#include <iostream>

int main(void)
{
	Point a(Fixed(10.0f), Fixed(20.0f));
	Point b(Fixed(0.0f), Fixed(5.0f));
	Point c(Fixed(5.0f), Fixed(10.0f));
	Triangle T(a, b, c);

	std::cout << "a.y is " << a.GetY() << std::endl;
	std::cout << "A.y is " << T.GetA().GetY() << std::endl;
	std::cout << "a.x is " << a.GetX() << std::endl;
	std::cout << "A.x is " << T.GetA().GetX() << std::endl;
	// std::cout << "A.x is " << T.GetA().GetX() << std::endl;
	// std::cout << "B.x is " << T.GetB().GetX() << std::endl;
	// std::cout << "B.y is " << T.GetB().GetY() << std::endl;
	// std::cout << "C.x is " << T.GetC().GetX() << std::endl;
	// std::cout << "C.y is " << T.GetC().GetY() << std::endl;
}
