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
	virtual void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getHitPoints(void);
	string getName(void);
	string getType (void);
	int getEnergyPoints(void);
	int getAttackDamage(void);

private:
	string _type;

  protected:
	string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
};