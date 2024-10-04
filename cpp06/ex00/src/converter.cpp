/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:55:40 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/03 16:55:40 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ParserUtils.hpp"
#include <climits>

void	convertDouble(std::string literal, OverflowChecks *data)
{
	double	d;

	if (data->doubleOverflow == true)
	{
		printImpossible();
		return ;
	}
	d = std::strtod(literal.c_str(), NULL);
	printChar(static_cast<char>(d), data);
	printInt(static_cast<int>(d), data);
	printFloat(static_cast<float>(d), data);
	printDouble(d);
}

void	convertFloat(std::string literal, OverflowChecks *data)
{
	float	f;

	if (data->floatOverflow == true)
	{
		printImpossible();
		return ;
	}
	f = std::strtof(literal.c_str(), NULL);
	printChar(static_cast<char>(f), data);
	printInt(static_cast<int>(f), data);
	printFloat(f, data);
	printDouble(static_cast<double>(f));
}

void	convertInt(std::string literal, OverflowChecks *data)
{
	int	i;

	if (data->intOverflow == true)
	{
		printImpossible();
		return ;
	}
	i = atoi(literal.c_str());
	printChar(static_cast<char>(i), data);
	std::cout << "int: " << i << std::endl;
	printFloat(static_cast<float>(i), data);
	printDouble(static_cast<double>(i));
}

void	convertChar(char c, OverflowChecks *data)
{
	std::cout << "char: " << c << std::endl;
	printInt(static_cast<int>(c), data);
	printFloat(static_cast<float>(c), data);
	printDouble(static_cast<double>(c));
}