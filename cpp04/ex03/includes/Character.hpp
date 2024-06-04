#include "ICharacter.hpp"
#include "Materia.hpp"
#include <iostream>

class Character : public ICharacter
{
  public:
	Character();
	Character(const std::string& name);
	virtual ~Character();
	Character(const Character& originalCharacter);
	Character& operator=(const Character& originalCharacter);

	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

  private:
	std::string _name;
	Materia *  inventory[4] ;
};