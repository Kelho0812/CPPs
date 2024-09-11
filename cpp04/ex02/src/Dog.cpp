/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 08:59:12 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/05 08:59:12 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

Dog::Dog() : Animal()
{
	this->_brain = new Brain;
	this->_type = "Dog";
	std::cout << "🐶   A new Dog was created" << std::endl;
}
Dog::~Dog()
{
	if (this->_brain)
	{
		delete this->_brain;
	}
	std::cout << "🐶   A Dog went to Dog Heaven" << std::endl;
}
Dog::Dog(const Dog& originalDog) : Animal(originalDog)
{
	this->_type = originalDog._type;
	if (originalDog._brain)
	{
		this->_brain = new Brain(*(originalDog._brain));
		this->_brain->setIdeas("I AM A COPY");

	}
}
Dog& Dog::operator=(const Dog& originalDog)
{
	if (this != &originalDog)
	{
		Animal::operator=(originalDog);
		this->_type = originalDog._type;

		delete this->_brain;

		if (originalDog._brain)
		{
			this->_brain = new Brain(*(originalDog._brain));
			this->_brain->setIdeas("I AM A COPY");
		}
	}
	return *this;
}

void Dog::makeSound() { std::cout << "🐶   *Woof Woof*" << std::endl; }

void Dog::checkThoughts() { this->_brain->checkThoughts(); }