/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:25:55 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/01 18:25:55 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// easyfind.hpp
#pragma once

#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <iostream>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &tParam, int intParam);

#include "../src/easyfind.tpp"