/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 08:59:12 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/05 08:59:12 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

Animal::Animal()
{
	this->_type = "Generic Animal";
	std::cout << "🦄   A Generic & Common Animal was created" << std::endl;
}
Animal::~Animal()
{
	std::cout << "🦄   A Generic & Common Animal went back to his fairy tale land" << std::endl;
}
Animal::Animal(const Animal& originalAnimal)
{
	this->_type = originalAnimal._type;
}
Animal& Animal::operator=(const Animal& originalAnimal)
{
	this->_type = originalAnimal._type;
	return *this;
}

void Animal::makeSound(void)
{
	std::cout << "🦄   *Generic Animal Noises*" << std::endl;
}
