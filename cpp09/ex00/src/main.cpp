/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:44:35 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/08 10:44:35 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	try
	{
		BitcoinExchange bitcoin;

		if (ac != 2)
			throw "Wrong number of arguments passed.";
		bitcoin.readData();
		bitcoin.readInput(av[1]);
		bitcoin.processInput();
	}
	catch (const char *str)
	{
		std::cerr << str << std::endl;
	}
	return (0);
}