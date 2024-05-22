#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	fixedPointInt = 0;
	Log("Constructor was called");
}

Fixed::Fixed(const int inty)
{
	
	Log("Constructor was called");
}

Fixed::Fixed(const float floaty)
{
	Log("Constructor was called");
}

Fixed::~Fixed()
{
	Log("Destructor was called");
}

Fixed &Fixed::operator=(const Fixed &original_fixed)
{
	Log("Copy assignement operator was called");
	this->fixedPointInt = original_fixed.fixedPointInt;
	return *this;
}

Fixed::Fixed(const Fixed &original_fixed)
{
	this->fixedPointInt = original_fixed.fixedPointInt;;
}
void Fixed::setRawBits(int const raw)
{
	Log("setRawBits was called");
	this->fixedPointInt = raw;
}

int Fixed::getRawBits(void)
{
	Log("getRawBits was called");
	return this->fixedPointInt;
}