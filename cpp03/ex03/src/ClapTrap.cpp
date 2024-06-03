#include "../includes/ClapTrap.hpp"
#define cout std::cout
#define endl std::endl

ClapTrap::ClapTrap()
{
	Log log;
	this->_name = "Random Schmuck";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_type = "Claptrap";
	log.constructorLog(this->_type, this->_name);
}

ClapTrap::ClapTrap(string name)
{
	Log log;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_type = "ClapTrap";
	log.constructorLog(this->_type, this->_name);
}

ClapTrap::~ClapTrap()
{
	Log log;
	log.destructorLog("ClapTrap ", this->_name);
}

ClapTrap::ClapTrap(const ClapTrap& originalClapTrap)
{
	this->_name = originalClapTrap._name;
	this->_hitPoints = originalClapTrap._hitPoints;
	this->_energyPoints = originalClapTrap._energyPoints;
	this->_attackDamage = originalClapTrap._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& originalClapTrap)
{
	this->_name = originalClapTrap._name;
	this->_hitPoints = originalClapTrap._hitPoints;
	this->_energyPoints = originalClapTrap._energyPoints;
	this->_attackDamage = originalClapTrap._attackDamage;
	return *this;
}

void ClapTrap::attack(const string& target)
{
	Log log;

	if (this->_energyPoints > 0)
	{
		_energyPoints--;
		log.attackLog(this->_type, this->_name, target, this->_attackDamage);
	}
	else
	{
		log.noEnergyLog(this->_type, this->_name);
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	Log log;
	this->_hitPoints -= amount;
	log.takeDamageLog(this->_type, this->_name, amount, this->_hitPoints);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	Log log;
	this->_hitPoints += amount;
	_energyPoints--;
	log.beRepairedLog(this->_type, this->_name, amount, this->_hitPoints, this->_energyPoints);
}

int ClapTrap::getHitPoints(void)
{
	return this->_hitPoints;
}
string ClapTrap::getName(void)
{
	return this->_name;
}
string ClapTrap::getType(void)
{
	return this->_type;
}
int ClapTrap::getEnergyPoints(void)
{
	return this->_energyPoints;
}
int ClapTrap::getAttackDamage(void)
{
	return this->_attackDamage;
}