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


  private:
	string name;
	string type;
	int hitPoints;
	int energyPoints;
	int attackDamage;
};