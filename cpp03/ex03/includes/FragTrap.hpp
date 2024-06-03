#pragma once

#include "ClapTrap.hpp"
class FragTrap : public virtual ClapTrap
{
  protected:
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

  public:
	FragTrap();
	FragTrap(string name);
	~FragTrap();
	FragTrap(const FragTrap&);
	FragTrap& operator=(const FragTrap&);
	void highFiveGuys(void);
};