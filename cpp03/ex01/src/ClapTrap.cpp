#include "../includes/ClapTrap.hpp"
#define cout std::cout
#define endl std::endl

ClapTrap::ClapTrap(string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	this->constructorLog();
}

ClapTrap::~ClapTrap()
{
	this->destructorLog();
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
	if (this->energyPoints > 0)
	{
		energyPoints--;
		atackLog(target);
	}
	else
	{
		noEnergyLog();
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	takeDamageLog(amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	energyPoints--;
	beRepairedLog(amount, this->energyPoints);
}

void ClapTrap::noEnergyLog()
{
	cout << "Clap trap " << this->name << " has no energy left." << endl;
}

void ClapTrap::constructorLog()
{
	cout << "🤖  A new ClapTrap named " << this->name << " was constructed." << endl;
}

void ClapTrap::destructorLog()
{
	cout << "💀   A ClapTrap named " << this->name << " was destroyed." << endl;
}

void ClapTrap::atackLog(string target)
{
	cout << "🗡️   ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage
		 << " points of damage!" << endl;
	cout << "🗡️   ClapTrap " << this->name << " has now " << this->energyPoints << " energy points left." << endl;
}

void ClapTrap::beRepairedLog(unsigned int amount, int energyPoints)
{
	cout << "❤️‍🩹   ClapTrap " << this->name << " was repaired for " << amount << " hit points." << endl;
	cout << "❤️‍🩹   ClapTrap " << name << " has now " << this->hitPoints << " hit points left." << endl;
	cout << "❤️‍🩹   ClapTrap " << this->name << " has now " << energyPoints << " energy points." << endl;
}

void ClapTrap::takeDamageLog(unsigned int amount)
{
	cout << "💔   ClapTrap " << name << " takes " << amount << " points of damage !" << endl;
	cout << "💔   ClapTrap " << name << " has now " << this->hitPoints << " hit points left." << endl;
}
