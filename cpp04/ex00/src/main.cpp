#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include <sstream>


int main(void)
{
	Dog dog;
	Cat cat;
	Animal animal;

	dog.makeSound();
	cat.makeSound();
	animal.makeSound();
	return 0;
}
