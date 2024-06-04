#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public virtual Animal
{
  public:
	Cat();
	~Cat();
	Cat(const Cat& originalCat);
	Cat& operator=(const Cat& originalCat);
	void makeSound();
	void checkThoughts();

  private:
	Brain* _brain;
};

#endif
