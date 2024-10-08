/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:13:03 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/30 09:13:03 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> T max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template <typename T> T min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T> void swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}