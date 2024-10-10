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

Span::Span(unsigned int N) : _maxSize(N)
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

unsigned int Span::getMaxSize()
{
	return (_maxSize);
}

void Span::addNumber(int Number)
{
	try
	{
		if (_vectorSpan.size() == _maxSize)
		{
			throw std::length_error("Vector is full, can't add more numbers.");
		}
		_vectorSpan.push_back(Number);
		std::cout << Number << " was added to the vector." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

unsigned int Span::longestSpan()
{
	if (_vectorSpan.size() <= 1)
	{
		throw std::length_error("Max span cannot be found because vector has less than 2 numbers stored.");
	}
	std::sort(_vectorSpan.begin(), _vectorSpan.end());
	_longestSpan = (_vectorSpan.back() - _vectorSpan.front());
	return (_longestSpan);
}

unsigned int Span::shortestSpan()
{
	if (_vectorSpan.size() <= 1)
	{
		throw std::length_error("Min span cannot be found because vector has less than 2 numbers stored.");
	}
	std::sort(_vectorSpan.begin(), _vectorSpan.end());
	_shortestSpan = _vectorSpan[1] - _vectorSpan[0];
	for (size_t i = 0; i < _vectorSpan.size() - 1; ++i)
	{
		if (static_cast<int>(_shortestSpan) > (_vectorSpan[i + 1] - _vectorSpan[i]))
		{
			_shortestSpan = _vectorSpan[i + 1] - _vectorSpan[i];
		}
	}
	return (_shortestSpan);
}

// #TODO Add distance + size that we are trying to add, so, if vector already has numbers, it will account to that
void Span::fillVector(std::vector<int>::iterator begin,
	std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + this->_vectorSpan.size() > _maxSize)
	{
		throw std::length_error("Trying to fill the vector with too many numbers.");
	}
	else
	{
		_vectorSpan.insert(_vectorSpan.end(), begin, end);
	}
}

void Span::printVector()
{
	std::cout << "Printing Vector:" << std::endl;
	for (std::vector<int>::const_iterator it = _vectorSpan.begin(); it != _vectorSpan.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}