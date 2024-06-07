#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
  public:
	Ice();
	Ice(const Ice& originalIce);
	~Ice();
	Ice& operator=(const Ice& originalIce);
	std::string const& getType() const;
	virtual AMateria	*clone(void) const;	
	void use(ICharacter& target);
};

#endif