/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:55:35 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/03 16:55:35 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ParserUtils.hpp"
#include <climits>

void	printPseudo(std::string literal, OverflowChecks *data)
{
	float	f;
	double	d;

	if (literal == "nanf" || literal == "+inff" || literal == "-inff")
	{
		f = std::strtof(literal.c_str(), NULL);
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		printFloat(f, data);
		printDouble(static_cast<double>(f));
	}
	else if (literal == "nan" || literal == "+inf" || literal == "-inf")
	{
		d = std::strtod(literal.c_str(), NULL);
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		printFloat(static_cast<float>(d), data);
		printDouble(d);
	}
}

void	printChar(char c, OverflowChecks *data)
{
	if (data->charImpossible)
	{
		std::cout << "char: Impossible" << std::endl;
	}
	else if (data->charPrintable == false)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	}
}

void	printInt(int i, OverflowChecks *data)
{
	if (data->intOverflow)
	{
		std::cout << "int: Impossible" << std::endl;
	}
	else
	{
		std::cout << "int: " << i << std::endl;
	}
}
void	printFloat(float f, OverflowChecks *data)
{
	std::cout << "float: ";
	if (data->floatOverflow == true)
	{
		std::cout << "Impossible" << std::endl;
	}
	else if (f == std::floor(f) && f < 1e7 && f > -1e7)
		std::cout << f << ".0f" << std::endl;
	else
	{
		std::cout << f << "f" << std::endl;
	}
}
void	printDouble(double d)
{
	std::cout << "double: ";
	if (d == std::floor(d) && d < 1e7 && d > -1e7)
		std::cout << d << ".0" << std::endl;
	else
	{
		std::cout << d << std::endl;
	}
}

void	printImpossible(void)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: Impossible" << std::endl;
	std::cout << "double: Impossible" << std::endl;
}