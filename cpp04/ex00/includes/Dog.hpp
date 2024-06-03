#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public virtual Animal
{
	Dog();
	~Dog();
	Dog(const Dog& originalDog);
	Dog& operator=(const Dog& originalDog);
	void makeSound() override;
};

#endif
