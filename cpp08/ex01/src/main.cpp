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
	Span sp = Span(100000);
	Span sp2 = Span(5);
	Span sp3 = Span(10);
	try
	{
		std::vector<int> range = generateVector(100000);
		sp.fillVector(range.begin(), range.end());
		std::cout << "Line " << __LINE__ << ": " << sp.shortestSpan() << std::endl;
		std::cout << "Line " << __LINE__ << ": " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught in file " << __FILE__ << " at line " << __LINE__ << " in function " << __func__ << ": " << e.what() << '\n';
	}
	try
	{
		std::vector<int> range = generateVector(10);
		sp2.fillVector(range.begin(), range.end());
		sp2.printVector();
		std::cout << "Line " << __LINE__ << ": " << sp2.shortestSpan() << std::endl;
		std::cout << "Line " << __LINE__ << ": " << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught in file " << __FILE__ << " at line " << __LINE__ << " in function " << __func__ << ": " << e.what() << '\n';
	}
	try
	{
		std::vector<int> range = generateVector(10);
		sp3.fillVector(range.begin(), range.end());
		sp3.printVector();
		std::cout << "Line " << __LINE__ << ": " << sp3.shortestSpan() << std::endl;
		std::cout << "Line " << __LINE__ << ": " << sp3.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught in file " << __FILE__ << " at line " << __LINE__ << " in function " << __func__ << ": " << e.what() << '\n';
	}

	return (0);
}