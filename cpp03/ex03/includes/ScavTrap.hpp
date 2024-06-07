#pragma once

#include "ClapTrap.hpp"
class ScavTrap : public virtual ClapTrap
{
  public:
	ScavTrap();
	ScavTrap(string name);
	~ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);
	void guardGate();
	void attack(const string& target);

  private:
	string _type;
};