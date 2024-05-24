#pragma once

#include <string>
#include <iostream>

#define string std::string

class ClapTrap
{
  public:
	ClapTrap(string name);
	~ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void noEnergyLog();
	void constructorLog();
	void destructorLog();
	void atackLog(string target);
	void beRepairedLog(unsigned amount, int energyPoints);
	void takeDamageLog(unsigned amount);

  private:
	string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
};