#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

Cat::Cat()
{
}
Cat::~Cat()
{
}
Cat::Cat(const Cat& originalCat) : Animal(originalCat)
{
	this->_type = originalCat._type;
}
Cat& Cat::operator=(const Cat& originalCat)
{
	if (this != &originalCat)
	{
		Animal::operator=(originalCat);
		this->_type = originalCat._type;
	}
	return *this;
}

void Cat::makeSound()
{
	cout << "*Meow Meow*" << endl;
}