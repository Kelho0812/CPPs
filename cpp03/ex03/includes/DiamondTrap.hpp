#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
	string _name;
	string _type;
	using FragTrap::_hitPoints;
	using ScavTrap::_energyPoints;
	using FragTrap::_attackDamage;

  public:
	
	DiamondTrap();
	DiamondTrap(string _name);
	~DiamondTrap();
	DiamondTrap (const DiamondTrap&);
	DiamondTrap &operator=(const DiamondTrap&);
	void attack(string target);
	void whoAmI(void);

};
