/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:23:58 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/08 10:23:58 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>
#include <string>



void Zombie::announce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;;
}

void Zombie::goodbye(void)
{
	std::cout << this->name << ": " << "I can't get no... BraiiiiiiinnnzzzZ... Goodbye." << std::endl;
}

Zombie::Zombie()
{
	this->name = "Brabo";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	goodbye();
}

