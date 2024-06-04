#pragma once
#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"

class Materia : public AMateria
{
  protected:
	std::string const& type;

  public:
	Materia(std::string const& type);
	~Materia();
	Materia(const Materia& originalMateria);
	Materia& operator=(const Materia& originalMateria);

  private:
	Materia() : AMateria("Some stuff"){};
};

#endif