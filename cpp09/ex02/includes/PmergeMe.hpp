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
#include <deque>
#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

template <typename T> class PmergeMe
{
  private:
	T _main;
	T _temp;
	clock_t _start;
	clock_t _end;
	
	PmergeMe(void);
	void initializeSortedPair(int argc, char **argument);

  public:
	PmergeMe(int argc, char **argument);
	~PmergeMe(void);
	PmergeMe(PmergeMe const &copy);
	PmergeMe const &operator=(PmergeMe const &copy);
	void printContainer(T container);
	void beginTimer();
	void endTimer();
	void printTime();
	void sort();
	T getMain(void) const;
	T getTemp(void) const;
};

void	parseInput(int argc, char **argument);
void	printUnsorted(int argc, char **argument);
bool	isValidNumber(int argc, char **argument);
bool	isValidInt(int argc, char **argument);

#include "../src/PmergeMe.tpp"