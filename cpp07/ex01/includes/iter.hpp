/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:13:03 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/30 09:13:03 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void print(const T &value)
{
	std::cout << value << std::endl;
}

template <typename T> void iter(T *array, int array_length,
	void (*func)(const T &))
{
	for (int i = 0; i < array_length; ++i)
	{
		func(array[i]);
	}
}