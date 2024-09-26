/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParserUtils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:06:35 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/25 15:06:35 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ParserUtils.hpp"
#include <climits>

bool	negativeCheck(const std::string &literal)
{
	if (literal[0] == '-')
		return (true);
	else
		return (false);
}

bool	isChar(const std::string &literal, int literalSize)
{
	if (literalSize == 1 && isprint(literal[0]) && !isdigit(literal[0]))
		return (true);
	else
		return (false);
}

bool	isInt(const std::string &literal, int literalSize)
{
	bool	isNegative;
	int		i;

	isNegative = negativeCheck(literal);
	if (literalSize == 1 && isprint(literal[0]) && isdigit(literal[0]))
		return (true);
	i = isNegative;
	while (i < literalSize)
	{
		if (!isdigit(literal[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	isFloat(const std::string &literal, int literalSize)
{
	bool	isNegative;
	int		i;

	isNegative = negativeCheck(literal);
	i = isNegative;
	while (i < literalSize - 1)
	{
		if (!isdigit(literal[i]))
			return (false);
		i++;
	}
	if (literal[i] != 'f' || literal[1] == 'f')
	{
		return (false);
	}
	return (true);
}

bool	isDouble(const std::string &literal, int literalSize)
{
	bool	isNegative;
	bool	foundDot;
	int		i;

	isNegative = negativeCheck(literal);
	foundDot = false;
	i = isNegative;
	if (literalSize < 3)
	{
		return false;
	}
	while (i < literalSize - 1)
	{
		if (i != 0 && !foundDot && literal[i] == '.')
		{
			foundDot = true;
			i++;
		}
		if (!isdigit(literal[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	isPseudo(const std::string &literal)
{
	if (literal == "nan" || literal == "+inf" || literal == "-inf")
	{
		return (true);
	}
	return (false);
}

LiteralType	parseLiteral(const std::string &literal, int literalSize)
{
	if (literalSize == 0)
	{
		throw std::invalid_argument("Invalid Literal.");
	}
	if (isChar(literal, literalSize))
		return CHAR;
	else if( isInt(literal, literalSize))
		return REGULAR;
	else if(isDouble(literal, literalSize))
		return REGULAR;
	else if(isFloat(literal, literalSize))
		return REGULAR;
	else if(isPseudo(literal))
		return PSEUDO;
	else
	{
		throw std::invalid_argument("Invalid Literal.");
	}
}

void	checkArgNum(int argc)
{
	if (argc > 2)
		throw std::invalid_argument("Too many arguments.");
	else if (argc < 2)
		throw std::invalid_argument("Too few arguments.");
}

std::string cleanString(const std::string &literal, int literalSize)
{
	if (!literal.empty() && isFloat(literal, literalSize))
	{
		return (literal.substr(0, literal.size() - 1));
	}
	else
	{
		return (literal);
	}
}

void printPseudo(std::string cleanStr)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << cleanStr << "f" << std::endl;
	std::cout << "double: " << cleanStr << std::endl;
}

void	printChar(const long double &tempDouble)
{
	std::cout << "char: ";
	if (tempDouble >= 32 && tempDouble <= 126)
		std::cout << "'" << static_cast<char>(tempDouble) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	printInt(const long double &tempDouble)
{
	std::cout << "int: ";
	if (tempDouble >= -std::numeric_limits<int>::max()
		&& tempDouble <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(tempDouble) << std::endl;
	else
		std::cout << "overflow" << std::endl;
}
void	printFloat(const long double &tempDouble)
{
	float	f;

	std::cout << "float: ";
	if (tempDouble >= -std::numeric_limits<float>::max()
		&& tempDouble <= std::numeric_limits<float>::max())
	{
		f = static_cast<float>(tempDouble);
		if (f == std::floor(f) && f < 1e7 && f > -1e7)
			std::cout << f << ".0f" << std::endl;
		else
		{
			std::cout << f << "f" << std::endl;
		}
	}
	else
		std::cout << "overflow" << std::endl;
}
void	printDouble(const long double &tempDouble)
{
	double	d;

	std::cout << "double: ";
	if (tempDouble >= -std::numeric_limits<double>::max()
		&& tempDouble <= std::numeric_limits<double>::max())
	{
		d = static_cast<double>(tempDouble);
		if (d == std::floor(d) && d < 1e7 && d > -1e7)
			std::cout << d << ".0" << std::endl;
		else
		{
			std::cout << d << std::endl;
		}
	}
	else
		std::cout << "overflow" << std::endl;
}

void	printConvertedValues(const long double &tempDouble)
{
	printChar(tempDouble);
	printInt(tempDouble);
	printFloat(tempDouble);
	printDouble(tempDouble);
}