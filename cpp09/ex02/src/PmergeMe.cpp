/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:11:05 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/15 15:11:05 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

void parseInput(int argc, char **argument)
{
	if (!isValidNumber(argc, argument))
	{
		throw std::invalid_argument("Error: Invalid argument.");
	}
	else if (!isValidInt(argc, argument))
	{
		throw std::invalid_argument("Error: Invalid argument.");
	}
	else
	{
		return ;
	}
}

void	printUnsorted(int argc, char **argument)
{
	int i;

	i = 1;
	std::cout << "Before: ";
	while (i < argc)
	{
		std::cout << argument[i] << " ";
		i++;
	}
	std::cout << std::endl;
}

bool	isValidNumber(int argc, char **argument)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argument[i][j] != '\0')
		{
			if (argument[i][j] < '0' || argument[i][j] > '9')
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	isValidInt(int argc, char **argument)
{
	int i;

	i = 1;

	while (i < argc)
	{
		if (std::strtol(argument[i], NULL, 10) > INT_MAX
			|| std::strtol(argument[i], NULL, 10) < 0)
			return (false);
		i++;
	}
	return (true);
}

void	check_correct_arguments(int argc, char **argv)
{
	if (argc < 2)
		throw std::invalid_argument("Error: Invalid number of arguments.");
	for (int i = 1; i < argc; ++i)
	{
		if (std::string(argv[i]).empty())
		{
			throw std::invalid_argument("Error: Empty string argument.");
		}
	}
}