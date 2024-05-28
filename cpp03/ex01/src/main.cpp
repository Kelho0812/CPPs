#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
	ClapTrap clappy("clappy");
	clappy.attack("ABILIO");
	ScavTrap wowzers("Tonio");
	wowzers.attack("JOSEFINA");
	return 0;
}