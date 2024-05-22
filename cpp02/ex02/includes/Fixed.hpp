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
	friend std::ostream& operator<<(std::ostream& COUT, const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	bool operator>(Fixed &fixed);
	bool operator>=(Fixed &fixed);
	bool operator<(Fixed &fixed);
	bool operator<=(Fixed &fixed);
	bool operator==(Fixed &fixed);
	bool operator!=(Fixed &fixed);
	Fixed operator*(const Fixed &fixed) const;

  private:
	int fixedPointInt;
	static const int f_bits;
};

#endif // __FIXED_HPP__