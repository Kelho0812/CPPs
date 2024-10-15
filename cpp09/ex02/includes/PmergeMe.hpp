/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:44:35 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/08 10:44:35 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <climits>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>

template <typename T> class PmergeMe
{
  public:
	PmergeMe(void);
	~PmergeMe(void);
	PmergeMe(PmergeMe const &copy);
	PmergeMe const &operator=(PmergeMe const &copy);
};

void	parseInput(int argc, const char **argument);
bool	isValidNumber(int argc, const char **argument);
bool	isValidInt(int argc, const char **argument);

#include "../src/PmergeMe.tpp"