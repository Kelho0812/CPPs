#include "../includes/Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "*random thoughts*";
	}
}
Brain::~Brain()
{
}
Brain::Brain(const Brain& originalBrain)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = originalBrain._ideas[i];
	}
}
Brain& Brain::operator=(const Brain& originalBrain)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = originalBrain._ideas[i];
	}
	return *this;
}

void Brain::checkThoughts(void)
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Thought " << i + 1 << " " << this->_ideas[i] << std::endl;
	}
}

void Brain::setIdeas(const std::string& ideas)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = ideas;
	}
}
