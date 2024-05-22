#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"
#include "../includes/Triangle.hpp"

#include <iostream>

int main(void)
{
	Point pa(Fixed(0.0f), Fixed(0.0f));
	Point pb(Fixed(0.0f), Fixed(5.0f));
	Point pc(Fixed(5.0f), Fixed(0.0f));
	Triangle T(pa, pb, pc);

	std::cout << "a.y is " << pa.GetY() << std::endl;
	std::cout << "A.y is " << T.GetA().GetY() << std::endl;
	std::cout << "a.x is " << pa.GetX() << std::endl;
	std::cout << "A.x is " << T.GetA().GetX() << std::endl;
	std::cout << "A.x is " << T.GetA().GetX() << std::endl;
	std::cout << "B.x is " << T.GetB().GetX() << std::endl;
	std::cout << "B.y is " << T.GetB().GetY() << std::endl;
	std::cout << "C.x is " << T.GetC().GetX() << std::endl;
	std::cout << "C.y is " << T.GetC().GetY() << std::endl;
}
