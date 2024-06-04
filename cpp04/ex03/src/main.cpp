#include "../includes/ICharacter.hpp"
#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"


int main(void)
{
	ICharacter *me = new Character("Ze");
	std::cout << me->getName();
	return 0;
}