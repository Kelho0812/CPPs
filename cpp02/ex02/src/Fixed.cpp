/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:15:17 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/03 10:15:17 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <cmath>
#include <iostream>

const int Fixed::f_bits = 8;

Fixed::Fixed()
{
	fixedPointInt = 0;
	// Log("Default was called");
}

Fixed::Fixed(const int inty)
{
	this->fixedPointInt = inty << this->f_bits;
	// Log("Int constructor was called");
}

Fixed::Fixed(const float floaty)
{
	this->fixedPointInt = roundf(floaty * (1 << this->f_bits));
	// Log("Float constructor was called");
}

Fixed::~Fixed()
{
	// Log("Destructor was called");
}

Fixed& Fixed::operator=(const Fixed& original_fixed)
{
	// Log("Copy assignement operator was called");
	this->fixedPointInt = original_fixed.fixedPointInt;
	return *this;
}

Fixed::Fixed(const Fixed& original_fixed)
{
	// Log("Copy constructor was called");
	this->fixedPointInt = original_fixed.fixedPointInt;
}
void Fixed::setRawBits(int const raw)
{
	// Log("setRawBits was called");
	this->fixedPointInt = raw;
}

int Fixed::getRawBits(void) const
{
	// Log("getRawBits was called");
	return this->fixedPointInt;
}

int Fixed::toInt(void) const { return this->fixedPointInt >> this->f_bits; }

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->fixedPointInt) / (1 << this->f_bits);
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& fixed)
{
	COUT << fixed.toFloat();
	return COUT;
}

Fixed& Fixed::operator++()
{
	fixedPointInt++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	fixedPointInt++;
	return temp;
}

Fixed& Fixed::operator--()
{
	fixedPointInt--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	fixedPointInt--;
	return temp;
}

bool Fixed::operator>(const Fixed& fixed)
{
	if (this->fixedPointInt > fixed.fixedPointInt)
		return true;
	else
		return false;
}

bool Fixed::operator>=(const Fixed& fixed)
{
	if (this->fixedPointInt > fixed.fixedPointInt ||
		this->fixedPointInt == fixed.fixedPointInt)
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed& fixed)
{
	if (this->fixedPointInt < fixed.fixedPointInt)
		return true;
	else
		return false;
}

bool Fixed::operator<=(const Fixed& fixed)
{
	if (this->fixedPointInt < fixed.fixedPointInt ||
		this->fixedPointInt == fixed.fixedPointInt)
		return true;
	else
		return false;
}

bool Fixed::operator==(const Fixed& fixed)
{
	if (this->fixedPointInt == fixed.fixedPointInt)
		return true;
	else
		return false;
}

bool Fixed::operator!=(const Fixed& fixed)
{
	if (this->fixedPointInt != fixed.fixedPointInt)
		return true;
	else
		return false;
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	return (this->toFloat() / fixed.toFloat());
}
Fixed Fixed::operator-(const Fixed& fixed)
{
	return (this->toFloat() - fixed.toFloat());
}
Fixed Fixed::operator+(const Fixed& fixed)
{
	return (this->toFloat() + fixed.toFloat());
}

const Fixed Fixed::max(const Fixed& fixed, const Fixed& fixed2)
{
	if (fixed.getRawBits() > fixed2.getRawBits())
	{
		return fixed;
	}
	else
	{
		return fixed2;
	}
}
const Fixed Fixed::min(const Fixed& fixed, const Fixed& fixed2)
{
	if (fixed.getRawBits() < fixed2.getRawBits())
	{
		return fixed;
	}
	else
	{
		return fixed2;
	}
}
Fixed Fixed::max(Fixed& fixed, Fixed& fixed2)
{
	if (fixed.getRawBits() > fixed2.getRawBits())
	{
		return fixed;
	}
	else
	{
		return fixed2;
	}
}
Fixed Fixed::min(Fixed& fixed, Fixed& fixed2)
{
	if (fixed.getRawBits() < fixed2.getRawBits())
	{
		return fixed;
	}
	else
	{
		return fixed2;
	}
}