/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:28:00 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/10 10:31:18 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

/**
 * @brief Processes the input string representing a Reverse Polish Notation (RPN) expression.
 *
 * This function takes a string argument, validates it, and evaluates it as an RPN expression.
 * It throws an exception if the input is invalid or if the evaluation fails.
 *
 * @param argument The input string representing the RPN expression.
 * @throws std::invalid_argument If the input is empty, contains only whitespace, or is otherwise invalid.
 *
 * The function performs the following steps:
 * - Checks if the input is empty or contains only whitespace.
 * - Splits the input into tokens and validates each token.
 * - If a token is a valid number, it is pushed onto a stack.
 * - If a token is an operator, it performs the corresponding calculation using the top two numbers on the stack.
 * - Ensures that the number of operators is one less than the number of numbers.
 * - Outputs the result of the RPN expression.
 */
void	processInput(std::string argument)
{
	std::istringstream str(argument);
	std::stack<double> number_stack;
	std::string	token;
	int number_count = 0;
	int	operator_counter = 0;
	int number = 0;

	if (argument.empty() || checkWhiteSpaces(argument))
	{
		throw std::invalid_argument("Error\nInvalid Input.");
	}
	while (str >> token)
	{
		if (!isInputValid(token) || !isFormatValid(token)) {
			throw std::invalid_argument("Error\nInvalid Input.");
		}
		if (isValidNumber(token)) {
			number = std::atoi(token.c_str());
			if (number >= 10) {
				throw std::invalid_argument("Error\nInvalid Input.");
			}
			number_stack.push(std::atoi(token.c_str()));
			number_count++;
		} else {
			operator_counter++;
			if (number_stack.size() < 2) {
				throw std::invalid_argument("Error\nInvalid Input.");
			} else if (!calculate(number_stack, token)) {
				throw std::invalid_argument("Error\nInvalid Input.");
			}
		}
	}
	if ((number_count - 1) != operator_counter)
	{
		throw std::invalid_argument("Error\nInvalid Input.");
	}
	std::cout << number_stack.top() << std::endl;
}

bool	checkWhiteSpaces(std::string str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		if (!std::isspace(static_cast<unsigned char>(*it)))
			return (false);
	}
	return (true);
}

std::string intToStdString(int value)
{
	std::stringstream ss;
	ss << value;
	return ss.str();
}

bool	isInputValid(std::string str)
{
	for(int i = 0; str[i]; i++)
	{
		if (!isValidOperator(str[i])
			&& !std::isdigit(str[i]))
			return(false);
	}
	return (true);
}

bool	isFormatValid(std::string str)
{
	int	i = 0;
	int countOperators = 0;
	while (str[i])
	{
		if (isValidOperator(str[i]))
			countOperators++;
		if (std::isdigit(str[i]))
		{
			while (str[i])
			{
				if (isValidOperator(str[i]))
					return (false);
				i++;
			}
		}
		if (!str[i])
			break;
		i++;
	}
	if (countOperators > 1)
		return (false);
	return (true);
}

bool	isValidNumber(std::string str)
{
	if (std::isdigit(static_cast<int>(str[0])))
		return (true);
	if ((str[0] != '-' && str[0] != '+'))
		return (false);
	if (str[1] && std::isdigit(str[1]))
		return (true);
	return (false);
}

bool isValidOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool	calculate(std::stack<double>& stack_numbers, std::string op)
{
	if (stack_numbers.empty())
		return (false);
	double	first = stack_numbers.top();
	stack_numbers.pop();
	double second = stack_numbers.top();
	stack_numbers.pop();

	double result;

	if (op == "+")
		result = second + first;
	else if (op == "-")
		result = second - first;
	else if (op == "*")
		result = second * first;
	else if (op == "/")
	{
		if (first == 0)
			return (false);
		result = second / first;
	}
	else
	{
		return(false);
	}
	stack_numbers.push(result);
	return (true);
}
