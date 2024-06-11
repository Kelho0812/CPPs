#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/ICharacter.hpp"
#include <iterator>

int main(void)
{
	ICharacter* me = new Character("Ze");
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	me->equip(ice);
	me->equip(cure);
	me->unequip(4);
	ice->use(*me);
	cure->use(*me);
	std::cout << me->getName() << std::endl;

	delete me;
	delete ice;
	delete cure;
	return 0;
}