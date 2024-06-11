#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
  public:
	Cure();
	Cure(const Cure& originalCure);
	~Cure();
	Cure& operator=(const Cure& originalCure);
	std::string const& getType() const;
	virtual AMateria	*clone(void) const;	
	void use(ICharacter& target);
};

#endif