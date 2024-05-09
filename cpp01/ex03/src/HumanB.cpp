/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:44:02 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/09 13:56:12 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name)
{
	this->name = name;
	this->weapon = NULL;
	
}
HumanB::~HumanB ()
{
}
void HumanB::attack()
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " attacks with their fists " << std::endl;
	}
	std::cout << this->name << " attacks with their weapon " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}