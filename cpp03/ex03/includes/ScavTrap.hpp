#pragma once

#include "ClapTrap.hpp"
class ScavTrap : public virtual ClapTrap
{

  protected:
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

  public:
	ScavTrap();
	ScavTrap(string name);
	~ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);
	void guardGate();
	void attack(const string& target);
};