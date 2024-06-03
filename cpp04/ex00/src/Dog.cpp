#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
}
Dog::~Dog()
{
}
Dog::Dog(const Dog& originalDog) : Animal(originalDog)
{
	this->_type = originalDog._type;
}
Dog& Dog::operator=(const Dog& originalDog)
{
	if (this != &originalDog)
	{
		Animal::operator=(originalDog);
		this->_type = originalDog._type;
	}
	return *this;
}

void Dog::makeSound()
{
	cout << "*Woof Woof*" << endl;
}