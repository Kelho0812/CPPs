#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

Cat::Cat()
{
	this->_brain = new Brain;
	this->_type = "Cat";
	std::cout << "😺   A new Cat was created" << std::endl;
}
Cat::~Cat()
{
	if (this->_brain)
	{
		delete this->_brain;
	}
	std::cout << "😺   A Cat went to Cat Heaven" << std::endl;
}
Cat::Cat(const Cat& originalCat) : Animal(originalCat)
{
	this->_type = originalCat._type;
	if (originalCat._brain)
	{
		this->_brain = new Brain(*(originalCat._brain));
		this->_brain->setIdeas("I AM A COPY");
	}
}
Cat& Cat::operator=(const Cat& originalCat)
{
	if (this != &originalCat)
	{
		Animal::operator=(originalCat);
		this->_type = originalCat._type;

		delete this->_brain;

		if (originalCat._brain)
		{
			this->_brain = new Brain(*(originalCat._brain));
			this->_brain->setIdeas("I AM A COPY");
		}
	}
	return *this;
}

void Cat::makeSound() { std::cout << "😺   *Meow Meow*" << std::endl; }

void Cat::checkThoughts() { this->_brain->checkThoughts(); }