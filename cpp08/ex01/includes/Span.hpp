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

#include <iostream>
#include <vector>
#include <stdexcept>

class Span
{
  private:
	Span();
	unsigned int _maxSpan;
	std::vector<int> _vectorSpan;

  public:
	~Span();
	Span(unsigned int N);
	Span(const Span &copySpan);
	Span const &operator=(Span const &copySpan);

	unsigned int getMaxSpan();

	void addNumber(int Number);
};