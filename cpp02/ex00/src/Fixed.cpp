/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:58:16 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/24 08:58:16 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	fixedPointInt = 0;
	Log("Constructor was called");
}
Fixed::~Fixed()
{
	Log("Destructor was called");
}
Fixed &Fixed::operator=(const Fixed &fixed)
{
	Log("Copy assignement operator was called");
	this->fixedPointInt = fixed.fixedPointInt;
	return *this;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->fixedPointInt = fixed.fixedPointInt;
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