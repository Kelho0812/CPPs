#include "../includes/Fixed.hpp"
#include <iostream>

int main(int argc, char const* argv[])
{
	(void)argc;
	(void)argv;

	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	Log(a.getRawBits());
	Log(b.getRawBits());
	Log(c.getRawBits());
	return 0;
}


