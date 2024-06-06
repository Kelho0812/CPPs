#pragma once

#include "Log.hpp"
#include <iostream>
#include <string>

#define string std::string

class ClapTrap
{
  public:
	ClapTrap();
	ClapTrap(string name);
	~ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getHitPoints(void);
	int getEnergyPoints(void);
	int getAttackDamage(void);
	string getName(void);
	string getType (void);

  private:
	string _name;
	string _type;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
};