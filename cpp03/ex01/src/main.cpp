#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
	ClapTrap clappy("clappy");
	clappy.attack("ABILIO");
	ScavTrap wowzers("Tonio");
	wowzers.attack("JOSEFINA");
	ScavTrap toni(wowzers);
	toni.attack("ABOBORA");
	return 0;
}