/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:44:35 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/08 10:44:35 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <stdlib.h>

typedef std::multimap<std::string, double> BitcoinExchangeData;
typedef BitcoinExchangeData::iterator bitcoinExchangeIterator;


class BitcoinExchange
{
private:
	BitcoinExchangeData _data;
	BitcoinExchangeData _inputFile;
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& copy);
	BitcoinExchange& operator=(const BitcoinExchange& copy);
	~BitcoinExchange();

	void print(BitcoinExchangeData &exchangeDataMap);
	void readData();
	void readInput(const char* inputFile);
	int checkData(std::string date);
	double exchangeBtc(std::string key, double amount);
	void processInput();
};
