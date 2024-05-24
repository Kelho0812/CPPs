#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap clappy("clappy");
	clappy.attack("toni");
	clappy.takeDamage(5);
	clappy.beRepaired(5);
	return 0;
}