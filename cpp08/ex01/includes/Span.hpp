/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:41:35 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/02 09:41:35 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

class Span
{
  private:
	Span();
	unsigned int _maxSize;
	unsigned int _maxSpan;
	unsigned int _minSpan;
	std::vector<int> _vectorSpan;

  public:
	~Span();
	Span(unsigned int N);
	Span(const Span &copySpan);
	Span const &operator=(Span const &copySpan);

	unsigned int getMaxSize();
	unsigned int longestSpan();
	unsigned int shortestSpan();

	void addNumber(int Number);
	void fillVector(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void printVector();

};