/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:52:38 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/26 14:52:38 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer Default Constructor called.";
}

Serializer::~Serializer()
{
	std::cout << "Serializer Default Destructor called.";
}

Serializer::Serializer(Serializer const &copy)
{
	*this = copy;
}
const Serializer &Serializer::operator=(Serializer const &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}