#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"
#include <sstream>

int main(void)
{

	Animal *animal = new Animal;
	animal->checkThoughts();
	delete animal;
	return 0;
}
