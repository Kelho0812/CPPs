#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

#include <iostream>

int	main(void)
{
	Point a (4.0f, 5.0f);
	std::cout << a.GetX();
	std::cout << a.GetY();
}
