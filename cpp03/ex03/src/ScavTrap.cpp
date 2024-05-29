#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	Log log;
	this->name = "Toni";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->type = "ScavTrap";
	log.constructorLog(this->type, this->name);
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	Log log;

	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->type = "ScavTrap";
	log.constructorLog(this->type, this->name);
}

ScavTrap::~ScavTrap()
{
	Log log;

	log.destructorLog(this->type, this->name);
}

void ScavTrap::guardGate(void)
{
	Log log;

	log.guardGateLog(this->type, this->name);
}

ScavTrap::ScavTrap(const ScavTrap& originalScavTrap) : ClapTrap(originalScavTrap)
{
	this->name = originalScavTrap.name;
	this->hitPoints = originalScavTrap.hitPoints;
	this->energyPoints = originalScavTrap.energyPoints;
	this->attackDamage = originalScavTrap.attackDamage;
	this->type = originalScavTrap.type;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& originalScavTrap)
{
	this->name = originalScavTrap.name;
	this->hitPoints = originalScavTrap.hitPoints;
	this->energyPoints = originalScavTrap.energyPoints;
	this->attackDamage = originalScavTrap.attackDamage;
	this->type = originalScavTrap.type;
	return *this;
}

void ScavTrap::attack(const string& target)
{
	Log log;

	log.ScavTrapAttackLog(this->type, this->name, target, this->attackDamage);
}
