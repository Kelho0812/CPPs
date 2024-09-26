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

#include <climits>
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
	REGULAR,
	PSEUDO
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


// Printerz

void		printPseudo(std::string cleanStr);

void		printChar(const long double &tempDouble);

void		printInt(const long double &tempDouble);

void		printFloat(const long double &tempDouble);

void		printDouble(const long double &tempDouble);

void		printConvertedValues(const long double &tempDouble);
