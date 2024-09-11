/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:15:17 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/03 10:15:17 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>

int main(void)
{
	// Fixed a;
	// Fixed const b(Fixed(5.05f) * Fixed(2));
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << "This is A: " << a << std::endl;
	// std::cout << "This is B: " << b << std::endl;
	// std::cout << "Max: " << Fixed::max(a, b) << std::endl;
	// return 0;

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a-- << std::endl;
	std::cout << --a << std::endl;
	std::cout << a * 5 << std::endl;
	std::cout << "This is A: " << a << std::endl;
	std::cout << "This is B: " << b << std::endl;
	std::cout << "Min: " << Fixed::min(a, b) << std::endl;
	return 0;
}
