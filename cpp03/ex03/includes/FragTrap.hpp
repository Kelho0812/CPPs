#pragma once

#include "ClapTrap.hpp"
class FragTrap : public virtual ClapTrap
{
  public:
	FragTrap();
	FragTrap(string name);
	~FragTrap();
	FragTrap(const FragTrap&);
	FragTrap& operator=(const FragTrap&);
	void highFiveGuys(void);
	private:
	string _type;
};