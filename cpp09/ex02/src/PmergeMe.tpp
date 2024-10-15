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

template<typename T>
PmergeMe<T>::PmergeMe(void)
{
}
template<typename T> PmergeMe<T>::~PmergeMe(void)
{
}
template<typename T> PmergeMe<T>::PmergeMe(PmergeMe const &copy)
{
	*this = copy;
}
template<typename T>
const PmergeMe<T> &PmergeMe<T>::operator=(PmergeMe const &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

