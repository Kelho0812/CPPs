#include "../includes/ClapTrap.hpp"
#define cout std::cout
#define endl std::endl

ClapTrap::ClapTrap()
{
	Log log;
	this->name = "Random Schmuck";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	this->type = "Claptrap";
	log.constructorLog(this->type, this->name);
}

ClapTrap::ClapTrap(string name)
{
	Log log;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	this->type = "ClapTrap";
	log.constructorLog(this->type, this->name);
}

ClapTrap::~ClapTrap()
{
	Log log;
	log.destructorLog("ClapTrap ", this->name);
}

ClapTrap::ClapTrap(const ClapTrap& originalClapTrap)
{
	this->name = originalClapTrap.name;
	this->hitPoints = originalClapTrap.hitPoints;
	this->energyPoints = originalClapTrap.energyPoints;
	this->attackDamage = originalClapTrap.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& originalClapTrap)
{
	this->name = originalClapTrap.name;
	this->hitPoints = originalClapTrap.hitPoints;
	this->energyPoints = originalClapTrap.energyPoints;
	this->attackDamage = originalClapTrap.attackDamage;
	return *this;
}

void ClapTrap::attack(const string& target)
{
	Log log;

	if (this->energyPoints > 0)
	{
		energyPoints--;
		log.attackLog(this->type, this->name, target, this->attackDamage);
	}
	else
	{
		log.noEnergyLog(this->type, this->name);
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	Log log;
	this->hitPoints -= amount;
	log.takeDamageLog(this->type, this->name, amount, this->hitPoints);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	Log log;
	this->hitPoints += amount;
	energyPoints--;
	log.beRepairedLog(this->type, this->name, amount, this->hitPoints, this->energyPoints);
}

int ClapTrap::getHitPoints(void)
{
	return this->hitPoints;
}
string ClapTrap::getName(void)
{
	return this->name;
}
string ClapTrap::getType(void)
{
	return this->type;
}
int ClapTrap::getEnergyPoints(void)
{
	return this->energyPoints;
}
int ClapTrap::getAttackDamage(void)
{
	return this->attackDamage;
}