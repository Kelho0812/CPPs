/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:25:55 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/01 18:25:55 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include "../includes/utils.hpp"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int	main(void)
{
	Span sp = Span(200);
	try
	{
		std::vector<int> range = generateVector(10);
		sp.fillVector(range.begin(), range.end());
		sp.printVector();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		return (0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}