/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:44:35 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/15 11:55:51 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int	main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
			throw std::invalid_argument("Error: Invalid number of arguments.");

		PmergeMe<std::vector<int> > vector(argc, argv);
		PmergeMe<std::deque<int> > deque(argc, argv);
		// #TODO vector.sort();
		// #TODO deque.sort();
		vector.endTimer();
		deque.endTimer();
		
		printUnsorted(argc, argv);
		vector.printContainer(vector.getMain());
		vector.printTime();
		deque.printTime();

		
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
