/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:40:26 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/03 15:29:18 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "🐶   A new Dog was created" << std::endl;
}
Dog::~Dog()
{
	std::cout << "🐶   A Dog went to Dog Heaven" << std::endl;
}
Dog::Dog(const Dog& originalDog) : Animal(originalDog)
{
	this->_type = originalDog._type;
}
Dog& Dog::operator=(const Dog& originalDog)
{
	if (this != &originalDog)
	{
		Animal::operator=(originalDog);
		this->_type = originalDog._type;
	}
	return *this;
}

void Dog::makeSound()
{
	std::cout << "🐶   *Woof Woof*" << std::endl;
}