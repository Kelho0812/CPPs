/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:31:23 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/24 14:31:23 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter Default Constructor called.";
}
ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter Default Destructor called.";
}
ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	*this = copy;
}
const ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy)
{
	if(this != &copy)
	{
		
	}
	return *this;
}