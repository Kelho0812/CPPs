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
		if (i != 1 && !foundDot && literal[i] == '.')
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

void	parseLiteral(const std::string &literal, int literalSize)
{
	if (literalSize == 0)
	{
		throw std::invalid_argument("Invalid Literal.");
	}
	if (isChar(literal, literalSize) || isInt(literal, literalSize)
		|| isDouble(literal, literalSize) || isFloat(literal, literalSize) || isPseudo(literal))
	{
		return ;
	}
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