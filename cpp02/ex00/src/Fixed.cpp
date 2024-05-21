#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	integer = 0;
}
Fixed::~Fixed()
{
}
Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->integer = fixed.integer;
	return *this;
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}
void Fixed::setRawBits(int const raw)
{
	this->integer = raw;
}

int Fixed::getRawBits(void)
{
	return this->integer;
}