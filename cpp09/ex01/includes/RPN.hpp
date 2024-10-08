#pragma once

#include <cstdlib>
#include <exception>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>

void	processInput(std::string argument);
bool	checkWhiteSpaces(std::string str);
bool	isInputValid(std::string str);
bool	isFormatValid(std::string str);
bool	isValidNumber(std::string str);
bool	isValidOperator(char c);
bool	calculate(std::stack<int> &stack_numbers, std::string op);
std::string intToStdString(int value);