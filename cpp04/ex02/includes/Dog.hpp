#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public virtual Animal
{
  public:
	Dog();
	~Dog();
	Dog(const Dog& originalDog);
	Dog& operator=(const Dog& originalDog);
	void makeSound();
	void checkThoughts();

  private:
	Brain* _brain;
};

#endif
