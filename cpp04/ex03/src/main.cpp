#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Character.hpp"
#include "../includes/ICharacter.hpp"
#include <iterator>

int main(void)
{
	ICharacter* me = new Character("Ze");
	AMateria *ice = new Ice();
	me->equip(ice);
	me->equip(ice);
	me->unequip(0);
	me->equip(ice);
	me->equip(ice);
	me->equip(ice);
	me->unequip(4);
	ice->use(*me);
	std::cout << me->getName() << std::endl;

	delete me;
	delete ice;
	return 0;
}