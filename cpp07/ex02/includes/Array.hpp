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

template <typename T> class Array
{
  private:
	T *_ptr;
	size_t _arraySize;

  public:
	Array();

	Array(int i);

	~Array();

	T &operator[](size_t index);
	
	Array(const Array &copyArray);
	Array<T> &operator=(const Array<T> &copyArray);

	size_t size() const;

};

#include "../src/Array.tpp"
