/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:45:11 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/02 09:45:11 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span()
{
	std::cout << "Span Default Constructor called." << std::endl;
}

Span::Span(unsigned int N) : _maxSpan(N)
{
	std::cout << "Span Custom Constructor called." << std::endl;
};
Span::~Span()
{
	std::cout << "Span Default Destructor called." << std::endl;
}

Span::Span(Span const &copy)
{
	*this = copy;
}
const Span &Span::operator=(Span const &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

unsigned int Span::getMaxSpan()
{
	return (_maxSpan);
}

void Span::addNumber(int Number)
{
	try
	{
		if (_vectorSpan.size() == _maxSpan)
		{
			throw std::length_error("Span is full, can't add more numbers.");
		}
		_vectorSpan.push_back(Number);
		std::cout << Number << " was added to the span" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
