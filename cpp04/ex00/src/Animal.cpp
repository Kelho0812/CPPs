#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->_type = "Generic Animal";
}
Animal::~Animal()
{
}
Animal::Animal(const Animal& originalAnimal)
{
	this->_type = originalAnimal._type;
}
Animal& Animal::operator=(const Animal& originalAnimal)
{
	this->_type = originalAnimal._type;
	return *this;
}

void Animal::makeSound(void)
{
	cout << "*Generic Animal Noises*";
}