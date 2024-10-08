/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParserUtils.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:00:54 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/25 15:00:54 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <climits>
#include <clocale>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>

enum		LiteralType
{
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
	REGULAR,
	PSEUDO
};

struct		OverflowChecks
{
	bool	intOverflow;
	bool	doubleOverflow;
	bool	floatOverflow;
	bool	charPrintable;
	bool	charImpossible;
	bool	isPseudo;

	OverflowChecks() : intOverflow(false), doubleOverflow(false),
		floatOverflow(false), charPrintable(false), charImpossible(false), isPseudo(false)
	{
	}
};

// Checkerz

void		checkArgNum(int argc);

bool		negativeCheck(const std::string &literal);

bool		isChar(const std::string &literal, int literalSize);

bool		isInt(const std::string &literal, int literalSize);

bool		isFloat(const std::string &literal, int literalSize);

bool		isDouble(const std::string &literal, int literalSize);

bool		isPseudo(const std::string &literal);

// Parser

LiteralType	parseLiteral(const std::string &literal, int literalSize);

// Convertz

void		convertInt(std::string literal, OverflowChecks *data);
void		convertChar(char c, OverflowChecks *data);
void		convertDouble(std::string literal, OverflowChecks *data);
void		convertFloat(std::string literal, OverflowChecks *data);
void		checkOverflow(long double tempDouble, OverflowChecks *data);

// Printerz

void		printPseudo(std::string literal, OverflowChecks *data);

void		printChar(char c, OverflowChecks *data);

void		printInt(int i, OverflowChecks *data);

void		printFloat(float f, OverflowChecks *data);

void		printDouble(double d);

void		printImpossible(void);