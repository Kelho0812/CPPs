#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	Log log;
	this->_name = "Toni";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_type = "ScavTrap";
	log.constructorLog(this->_type, this->_name);
}

ScavTrap::ScavTrap(string _name) : ClapTrap(_name)
{
	Log log;

	this->_name = _name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_type = "ScavTrap";
	log.constructorLog(this->_type, this->_name);
}

ScavTrap::~ScavTrap()
{
	Log log;

	log.destructorLog(this->_type, this->_name);
}

void ScavTrap::guardGate(void)
{
	Log log;

	log.guardGateLog(this->_type, this->_name);
}

ScavTrap::ScavTrap(const ScavTrap& originalScavTrap) : ClapTrap(originalScavTrap)
{
	this->_name = originalScavTrap._name;
	this->_hitPoints = originalScavTrap._hitPoints;
	this->_energyPoints = originalScavTrap._energyPoints;
	this->_attackDamage = originalScavTrap._attackDamage;
	this->_type = originalScavTrap._type;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& originalScavTrap)
{
	this->_name = originalScavTrap._name;
	this->_hitPoints = originalScavTrap._hitPoints;
	this->_energyPoints = originalScavTrap._energyPoints;
	this->_attackDamage = originalScavTrap._attackDamage;
	this->_type = originalScavTrap._type;
	return *this;
}

void ScavTrap::attack(const string& target)
{
	Log log;

	log.ScavTrapAttackLog(this->_type, this->_name, target, this->_attackDamage);
}
