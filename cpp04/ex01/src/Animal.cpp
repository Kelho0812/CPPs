#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

Animal::Animal()
{
	this->_brain = new Brain;
	this->_type = "Generic Animal";
	std::cout << "🦄   A Generic & Common Animal was created" << std::endl;
}
Animal::~Animal()
{
	if (this->_brain)
	{
		delete this->_brain;
	}
	std::cout << "🦄   A Generic & Common Animal went back to his fairy tale land" << std::endl;
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
	std::cout << "🦄   *Generic Animal Noises*" << std::endl;
}
void Animal::checkThoughts()
{
	this->_brain->checkThoughts();
}
