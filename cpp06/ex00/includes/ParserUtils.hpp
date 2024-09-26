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
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>

enum		LiteralType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO
};

//Checkerz
void		checkArgNum(int argc);

bool		negativeCheck(const std::string &literal);

bool		isChar(const std::string &literal, int literalSize);

bool		isInt(const std::string &literal, int literalSize);

bool		isFloat(const std::string &literal, int literalSize);

bool		isDouble(const std::string &literal, int literalSize);

bool		isPseudo(const std::string &literal);

LiteralType	parseLiteral(const std::string &literal, int literalSize);

std::string cleanString(const std::string &literal, int literalSize);

void		printPseudo(std::string cleanStr);

void		printOthers(std::string cleanStr);