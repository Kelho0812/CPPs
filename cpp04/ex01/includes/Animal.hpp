#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>

class Animal
{

  public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& originalAnimal);
	Animal& operator=(const Animal& originalAnimal);
	virtual void makeSound();
	virtual void checkThoughts() = 0;
  protected:
	std::string _type;
};

#endif
