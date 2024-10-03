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
		return (false);
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
	if (literal == "nan" || literal == "+inf" || literal == "-inf"
		|| literal == "nanf" || literal == "+inff" || literal == "-inff")
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
		return (CHAR);
	else if (isInt(literal, literalSize))
		return (INT);
	else if (isDouble(literal, literalSize))
		return (DOUBLE);
	else if (isFloat(literal, literalSize))
		return (FLOAT);
	else if (isPseudo(literal))
		return (PSEUDO);
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

void	printPseudo(std::string literal)
{
		float f;
		double d;

	if (literal == "nanf" || literal == "+inff" || literal == "-inff")
	{
		f = std::strtof(literal.c_str(), NULL);
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		printFloat(f);
		printDouble(static_cast<double>(f));
	}
	else if (literal == "nan" || literal == "+inf" || literal == "-inf")
	{
		d = std::strtod(literal.c_str(), NULL);
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		printFloat(static_cast<float>(d));
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
void	printFloat(float f)
{
	std::cout << "float: ";
	if (f == std::floor(f) && f < 1e7 && f > -1e7)
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
	printFloat(static_cast<float>(d));
	printDouble(d);
}

void	convertFloat(std::string literal, OverflowChecks *data)
{
	float	f;

	if (data->intOverflow == true)
	{
		printImpossible();
		return ;
	}
	f = std::strtof(literal.c_str(), NULL);
	printChar(static_cast<char>(f), data);
	printInt(static_cast<int>(f), data);
	printFloat(f);
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
	printFloat(static_cast<float>(i));
	printDouble(static_cast<double>(i));
}

void	convertChar(char c, OverflowChecks *data)
{
	std::cout << "char: " << c << std::endl;
	printInt(static_cast<int>(c), data);
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

void	checkOverflow(long double tempDouble, OverflowChecks *data)
{
	if ((tempDouble >= 32 && tempDouble <= 127))
	{
		data->charPrintable = true;
	}
	else
	{
		data->charPrintable = false;
	}
	data->charImpossible = (tempDouble < 0 || tempDouble > 255);
	data->intOverflow = !(tempDouble >= std::numeric_limits<int>::min()
		&& tempDouble <= std::numeric_limits<int>::max());
	data->floatOverflow = (tempDouble < -std::numeric_limits<float>::max()
			|| tempDouble > std::numeric_limits<float>::max());
	data->doubleOverflow = (tempDouble < -std::numeric_limits<double>::max()
			|| tempDouble > std::numeric_limits<double>::max());
}

void	printImpossible(void)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: Impossible" << std::endl;
	std::cout << "double: Impossible" << std::endl;
}