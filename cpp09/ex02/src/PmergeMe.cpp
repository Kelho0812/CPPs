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

void parseInput(int argc, const char **argument)
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

bool	isValidNumber(int argc, const char **argument)
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

bool	isValidInt(int argc, const char **argument)
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