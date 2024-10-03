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
	LiteralType		type;
	int				literalSize;
	long double		tempDouble;
	char			c;
	OverflowChecks	*data;

	data = new OverflowChecks();
	literalSize = literal.size();
	type = parseLiteral(literal, literalSize);
	tempDouble = std::strtold(literal.c_str(), NULL);
	checkOverflow(tempDouble, data);
	switch (type)
	{
	case PSEUDO:
		printPseudo(literal);
		break ;
	case CHAR:
	{
		c = literal[0];
		convertChar(c, data);
		break ;
	}
	case INT:
		convertInt(literal, data);
		break ;
	case DOUBLE:
		convertDouble(literal, data);
		break ;
	case FLOAT:
		convertFloat(literal, data);
		break ;
	default:
		throw std::invalid_argument("Invalid Literal.");
		break ;
	}
	delete			data;
}
