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
	(void)copy;
	return (*this);
}

void ScalarConverter::convert(std::string literal)
{
	LiteralType	type;
	int			literalSize;
	long double	tempDouble;

	literalSize = literal.size();
	type = parseLiteral(literal, literalSize);
	tempDouble = std::strtold(literal.c_str(), NULL);
	switch (type)
	{
	case PSEUDO:
		printPseudo(literal);
		break ;
	case CHAR:
		tempDouble = static_cast<long double>(literal[0]);
		printConvertedValues(tempDouble);
		break ;
	case REGULAR:
		printConvertedValues(tempDouble);
		break ;
	default:
		throw std::invalid_argument("Invalid Literal.");
		break ;
	}
}
