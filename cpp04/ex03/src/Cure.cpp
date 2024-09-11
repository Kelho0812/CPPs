/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:54:42 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/12 09:54:42 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/ICharacter.hpp"
#include <iostream>

Cure::Cure(void): AMateria("cure")
{
	std::cout << "Cure created with default constructor" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destroyed" << std::endl;
}

Cure::Cure(Cure const &copy): AMateria(copy)
{
	std::cout << "Cure copied" << std::endl;
}

Cure& Cure::operator=(const Cure& originalCure)
{
	this->_type = originalCure._type;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


