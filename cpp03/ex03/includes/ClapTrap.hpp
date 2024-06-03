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
	string getName(void);
	string getType (void);
	int getEnergyPoints(void);
	int getAttackDamage(void);


  protected:
	string _name;
	string _type;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};