#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
  public:
	ScavTrap();
	ScavTrap(string name);
	~ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);
	void guardGate();
};