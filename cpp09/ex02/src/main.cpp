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
		vector.endTimer();
		vector.recursiveMergeSort(0, vector.getMain().size() - 1);
		printUnsorted(argc, argv);
		vector.printContainer(vector.getMain());
		vector.printTime();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PmergeMe<std::deque<int> > deque(argc, argv);
		deque.recursiveMergeSort(0, deque.getMain().size() - 1);
		deque.endTimer();
		deque.printTime();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
