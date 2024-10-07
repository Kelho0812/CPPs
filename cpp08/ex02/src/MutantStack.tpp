/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:25:55 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/01 18:25:55 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack Default Constructor called." << std::endl;
}

template <typename T> MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack Default Destructor called." << std::endl;
}
template <typename T> MutantStack<T>::MutantStack(MutantStack const &original)
{
	*this = original;
}
template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack &original)
{
	(void)original;
	return (*this);
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T> typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template <typename T> typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return (this->c.end());
};