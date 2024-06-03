#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "😺   A new Cat was created" << std::endl;

}
Cat::~Cat()
{
	std::cout << "😺   A Cat went to Cat Heaven" << std::endl;
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
	std::cout << "😺   *Meow Meow*" << std::endl;
}