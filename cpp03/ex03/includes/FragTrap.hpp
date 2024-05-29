#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
  private:
	FragTrap();

  public:
	FragTrap(string name);
	~FragTrap();
	FragTrap(const FragTrap&);
	FragTrap& operator=(const FragTrap&);
	void highFiveGuys(void);
};