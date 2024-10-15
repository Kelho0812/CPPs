/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:44:35 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/08 10:44:35 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	_data = other._data;
	_inputFile = other._inputFile;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::print(BitcoinExchangeData &map)
{
	bitcoinExchangeIterator	it;

	for (it = map.begin(); it != map.end(); ++it)
	{
		std::cout << it->first << ": " << it->second << std::endl;
	}
}

void BitcoinExchange::readData()
{
	std::ifstream dataFile("data.csv");
	if (!dataFile)
		throw "could not read data file.";
	std::string line;
	getline(dataFile, line);
	while (getline(dataFile, line))
	{
		std::istringstream str(line);
		std::string date, value;
		getline(str, date, ',');
		getline(str, value);
		_data.insert(std::make_pair(date, atof(value.c_str())));
	}
	dataFile.close();
}

void BitcoinExchange::readInput(const char *inputFile)
{
	std::ifstream inFile(inputFile);
	if (!inFile)
		throw "could not open input file.";
	std::string line, key, value;
	for (size_t i = 0; getline(inFile, line); i++)
	{
		std::istringstream inStream(line);
		getline(inStream, key, '|');
		getline(inStream, value);
		key.erase(0, key.find_first_not_of("  \t\n\r\f\v"));
		key.erase(key.find_last_not_of("  \t\n\r\f\v") + 1);
		value.erase(0, value.find_first_not_of("  \t\n\r\f\v"));
		value.erase(value.find_last_not_of("  \t\n\r\f\v") + 1);
		if (i == 0)
		{
			if (key != "date" || value != "value")
				throw "invalid file format.";
			continue ;
		}
		_inputFile.insert(std::make_pair(key, atof(value.c_str())));
		key.clear();
		value.clear();
	}
	inFile.close();
}

int BitcoinExchange::checkData(std::string date)
{
	if (date.size() != 10)
		return (0);
	std::istringstream dateStream(date);
	std::string strYear, strMonth, strDay;
	int year, month, day;
	getline(dateStream, strYear, '-');
	year = atoi(strYear.c_str());
	getline(dateStream, strMonth, '-');
	month = atoi(strMonth.c_str());
	getline(dateStream, strDay);
	day = atoi(strDay.c_str());
	if ((month <= 12 && month >= 1) && (year >= 2009 && year <= 2022))
	{
		if (year == 2009 && month == 1 && day < 2)
			return (0);
		if (day < 1 || day > 31)
			return (0);
		else if ((month == 4 || month == 6 || month == 9 || month == 11)
			&& day == 31)
			return (0);
		if (month == 2)
		{
			if (day > 28)
			{
				if (day == 29 && ((year % 4 == 0 && year % 100 != 0) || year
						% 400 == 0))
					return (1);
				return (0);
			}
		}
		return (1);
	}
	return (0);
}

double BitcoinExchange::exchangeBtc(std::string key, double amount)
{
	bitcoinExchangeIterator	it;
	bitcoinExchangeIterator	prev;

	prev = _data.begin();
	for (it = _data.begin(); it != _data.end(); ++it)
	{
		if (it->first >= key)
		{
			if (key == it->first)
				return (amount * it->second);
			else
				return (amount * prev->second);
		}
		prev = it;
	}
	if (it == _data.end())
		return (amount * prev->second);
	return (0);
}

void BitcoinExchange::processInput()
{
	bitcoinExchangeIterator	it;

	for (it = _inputFile.begin(); it != _inputFile.end(); it++)
	{
		if (checkData(it->first))
		{
			if (it->second > 1000)
				std::cerr << "Error: too large a number." << std::endl;
			else if (it->second < 0)
				std::cerr << "Error: not a positive number." << std::endl;
			else
				std::cerr << it->first << " => " << it->second << " = " << exchangeBtc(it->first,
					it->second) << std::endl;
		}
		else
			std::cerr << "Error: bad input => " << it->first << std::endl;
	}
}
