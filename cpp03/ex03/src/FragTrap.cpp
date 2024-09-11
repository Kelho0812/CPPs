/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:42:00 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/03 10:06:45 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
	Log log;
	this->_name = "Toni";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_type = "FragTrap";
	log.constructorLog(this->_type, this->_name);
}

FragTrap::FragTrap(string _name) : ClapTrap(_name)
{
	Log log;

	this->_name = _name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_type = "FragTrap";
	log.constructorLog(this->_type, this->_name);
}

FragTrap::~FragTrap()
{
	Log log;

	log.destructorLog(this->_type, this->_name);
}

FragTrap::FragTrap(const FragTrap& originalFragTrap) : ClapTrap(originalFragTrap)
{
	this->_name = originalFragTrap._name;
	this->_hitPoints = originalFragTrap._hitPoints;
	this->_energyPoints = originalFragTrap._energyPoints;
	this->_attackDamage = originalFragTrap._attackDamage;
	this->_type = originalFragTrap._type;
}

FragTrap& FragTrap::operator=(const FragTrap& originalFragTrap)
{
	this->_name = originalFragTrap._name;
	this->_hitPoints = originalFragTrap._hitPoints;
	this->_energyPoints = originalFragTrap._energyPoints;
	this->_attackDamage = originalFragTrap._attackDamage;
	this->_type = originalFragTrap._type;
	return *this;
}

void FragTrap::highFiveGuys(void)
{
	Log log;

	log.highFiveGuysLog(this->_type, this->_name);
}
