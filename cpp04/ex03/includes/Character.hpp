/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:54:42 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/12 09:54:42 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
  public:
	Character();
	Character(const std::string& name);
	virtual ~Character();
	Character(const Character& originalCharacter);
	Character& operator=(const Character& originalCharacter);
	AMateria* inventory[4];
	AMateria** _garbage;
	std::string const& getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

  private:
	int _inventorySize;
	int _garbageIndex;
	int _garbageSize;
	std::string _name;
};