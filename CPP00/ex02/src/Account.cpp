/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:30:01 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/06 16:30:25 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Account.hpp"
#include <cstdio>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << " "
			  << "created" << std::endl;
}
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";"
			  << "closed" << std::endl;
	_nbAccounts--;
}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";";
	std::cout << std::endl;
}

static std::string formatTimeComponent(int component, int width = 2)
{
	std::ostringstream oss;
	oss << std::setfill('0') << std::setw(width) << component;
	return oss.str();
}

static std::string formatTimestamp(std::tm *localTime)
{
	std::string year = formatTimeComponent(localTime->tm_year + 1900, 4);
	std::string month = formatTimeComponent(localTime->tm_mon + 1);
	std::string day = formatTimeComponent(localTime->tm_mday);
	std::string hour = formatTimeComponent(localTime->tm_hour);
	std::string minute = formatTimeComponent(localTime->tm_min);
	std::string second = formatTimeComponent(localTime->tm_sec);
	return "[" + year + month + day + "_" + hour + minute + second + "] ";
}

void Account::_displayTimestamp(void)
{
	std::time_t now = std::time(NULL);
	std::tm *localTime = std::localtime(&now);
	std::cout << formatTimestamp(localTime);
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (deposit > 0)
	{
		this->_amount += deposit;
		_nbDeposits++;
		_totalNbDeposits++;
		std::cout << "deposit:" << deposit << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "deposits:" << this->_nbDeposits << ";";
		std::cout << std::endl;
		return ;
	}
	std::cout << "deposit:refused";
	std::cout << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "withdrawals:" << this->_nbWithdrawals << ";";
		std::cout << std::endl;
		return true;
	}
	std::cout << "withdrawal:refused";
	std::cout << std::endl;
	return false;
}
int Account::checkAmount(void) const
{
	return this->_amount;
}
void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";";
	std::cout << std::endl;
}
