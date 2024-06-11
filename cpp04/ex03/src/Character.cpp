#include "../includes/Character.hpp"
#include <cstddef>

Character::Character()
{
	this->_name = "Some dude";
	this->_inventorySize = 0;
	_garbageIndex = 0;
	this->_garbageSize = 4;
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
	_garbage = new AMateria*[this->_garbageSize];
	for (int i = 0; i < this->_garbageSize; i++)
	{
		_garbage[i] = NULL;
	}
}
Character::Character(const std::string& name)
{
	this->_name = name;
	this->_inventorySize = 0;
	this->_garbageIndex = 0;
	this->_garbageSize = 4;
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
	}
	_garbage = new AMateria*[this->_garbageSize];
	for (int i = 0; i < this->_garbageSize; i++)
	{
		_garbage[i] = NULL;
	}
}
Character::~Character()
{
	delete[] _garbage;
	std::cout << "Deleted Char" << std::endl;
}
Character::Character(const Character& originalCharacter)
{
	this->_name = originalCharacter._name;
}
Character& Character::operator=(const Character& originalCharacter)
{
	this->_name = originalCharacter._name;
	return *this;
}

std::string const& Character::getName() const { return this->_name; }
void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << "Materia " << m->getType()
					  << " added to inventory on slot " << i << std::endl;
			return;
		}
	}
	std::cout << "No free slots available in the inventory, please unequip a "
				 "Materia first."
			  << std::endl;
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || this->inventory[idx] == NULL)
	{
		std::cout << "Invalid index or no Materia to unequip." << std::endl;
		return;
	}
	if (_garbageIndex >= _garbageSize)
	{
		AMateria** newThrownAwayMateria = new AMateria*[_garbageSize + 1];
		for (int i = 0; i < _garbageSize; i++)
		{
			newThrownAwayMateria[i] = _garbage[i];
		}
		delete[] _garbage;
		_garbage = newThrownAwayMateria;
		_garbageSize++;
	}
	_garbage[_garbageIndex] = this->inventory[idx];
	this->inventory[idx] = NULL;
	std::cout << "Materia " << _garbage[_garbageIndex]->getType()
			  << " unequiped from slot " << idx << std::endl;
	_garbageIndex++;
}
void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
	}
	else
	{
		std::cout << "Invalid index or no Materia to use." << std::endl;
	}
}