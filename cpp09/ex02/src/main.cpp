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
		check_correct_arguments(argc, argv);
		PmergeMe<std::vector<int> > vector(argc, argv);
		vector.recursiveMergeSort(0, vector.getMain().size() - 1);
		vector.insert();
		vector.endTimer();
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
		check_correct_arguments(argc, argv);
		PmergeMe<std::deque<int> > deque(argc, argv);
		deque.recursiveMergeSort(0, deque.getMain().size() - 1);
		deque.insert();
		deque.endTimer();
		deque.printTime();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

