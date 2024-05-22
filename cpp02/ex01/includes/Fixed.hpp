#pragma once
#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

#define Log(x) std::cout << x << std::endl

class Fixed
{
public:
	Fixed();
	Fixed(const int inty);
	Fixed(const float floaty);
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	int getRawBits(void);
	void setRawBits(int const raw);


private:
	int fixedPointInt;
	static const int f_bits;
};

#endif // __FIXED_HPP__