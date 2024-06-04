#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include <sstream>

int main(void)
{
	// int number_of_animals = 10;
	// Animal *animal[number_of_animals];
	// for (int i = 0; i < number_of_animals / 2; i++)
	// {
	// 	animal[i] = new Dog;
	// }
	// for (int i = number_of_animals / 2; i < number_of_animals; i++)
	// {
	// 	animal[i] = new Cat;
	// }
	// animal[0]->makeSound();
	// animal[9]->makeSound();
	
	// for (int i =0; i < 10; i++) {
	// 	delete animal[i];
	// }

	Dog dog;

	dog.checkThoughts();
	return 0;
}