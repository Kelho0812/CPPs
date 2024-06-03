#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual Animal
{
	Cat();
	~Cat();
	Cat(const Cat& originalCat);
	Cat& operator=(const Cat& originalCat);
	void makeSound() override;
};

#endif
