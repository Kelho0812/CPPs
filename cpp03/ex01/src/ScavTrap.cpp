#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "Toni";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	this->constructorLog();
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	this->constructorLog();
}
