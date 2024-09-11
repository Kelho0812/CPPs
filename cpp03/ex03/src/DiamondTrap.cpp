/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 10:19:58 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/07 10:19:58 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

#define string std::string
#define cout std::cout
#define endl std::endl

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	Log log;
	_name = "Random Diamond";
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage = 30;
	_type = "DiamondTrap";
	log.constructorLog(this->_type, this->_name);
}
DiamondTrap::DiamondTrap(string _name)
	: ClapTrap(_name + "_clap_name"), ScavTrap(_name + "_clap_name"), FragTrap(_name + "_clap_name")
{
	Log log;
	this->_name = _name;
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage = 30;
	_type = "DiamondTrap";
	log.constructorLog(this->_type, this->_name);
}
DiamondTrap::~DiamondTrap()
{
	Log log;
	log.destructorLog(this->_type, this->_name);
}
DiamondTrap::DiamondTrap(const DiamondTrap& originalDiamondTrap)
	: ClapTrap(originalDiamondTrap),ScavTrap(originalDiamondTrap), FragTrap(originalDiamondTrap)
{
	this->_name = originalDiamondTrap._name;
	this->_hitPoints = originalDiamondTrap._hitPoints;
	this->_energyPoints = originalDiamondTrap._energyPoints;
	this->_attackDamage = originalDiamondTrap._attackDamage;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& originalDiamondTrap)
{
	this->_name = originalDiamondTrap._name;
	this->_hitPoints = originalDiamondTrap._hitPoints;
	this->_energyPoints = originalDiamondTrap._energyPoints;
	this->_attackDamage = originalDiamondTrap._attackDamage;
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	cout << "📛   My DiamondTrap name is " << this->_name << endl;
	cout << "📛   My ClapTrap name is " << ClapTrap::_name << endl;
}