#include "../includes/Character.hpp"

Character::Character() { this->_name = "Some dude"; }
Character::Character(const std::string& name) { this->_name = name; }
Character::~Character() { std::cout << "Deleted Char"; }
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
void Character::equip(AMateria* m) { std::cout << "Equiped shit"; }
void Character::unequip(int idx) { std::cout << "UNequiped shit"; }
void Character::use(int idx, ICharacter& target) { std::cout << "Used shit"; }