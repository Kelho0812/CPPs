#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
	string _name;
	string _type;

  public:
	
	DiamondTrap();
	DiamondTrap(string _name);
	~DiamondTrap();
	DiamondTrap (const DiamondTrap&);
	DiamondTrap &operator=(const DiamondTrap&);
	using ScavTrap::attack;
	void whoAmI(void);

};
