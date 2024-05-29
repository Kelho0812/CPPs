#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
	Log log;
	this->name = "Toni";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->type = "FragTrap";
	log.constructorLog(this->type, this->name);
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	Log log;

	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->type = "FragTrap";
	log.constructorLog(this->type, this->name);
}

FragTrap::~FragTrap()
{
	Log log;

	log.destructorLog(this->type, this->name);
}

FragTrap::FragTrap(const FragTrap& originalFragTrap) : ClapTrap(originalFragTrap)
{
	this->name = originalFragTrap.name;
	this->hitPoints = originalFragTrap.hitPoints;
	this->energyPoints = originalFragTrap.energyPoints;
	this->attackDamage = originalFragTrap.attackDamage;
	this->type = originalFragTrap.type;
}

FragTrap& FragTrap::operator=(const FragTrap& originalFragTrap)
{
	this->name = originalFragTrap.name;
	this->hitPoints = originalFragTrap.hitPoints;
	this->energyPoints = originalFragTrap.energyPoints;
	this->attackDamage = originalFragTrap.attackDamage;
	this->type = originalFragTrap.type;
	return *this;
}

void FragTrap::highFiveGuys(void)
{
	Log log;

	log.highFiveGuysLog(this->type, this->name);
}
