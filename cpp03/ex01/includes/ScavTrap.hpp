#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
  private:
	ScavTrap();

  public:
	ScavTrap(string name);
	~ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);
	void guardGate();
};