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
