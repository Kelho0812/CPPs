#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define string std::string
#define cout std::cout
#define endl std::endl

class Animal
{
  protected:
	string _type;

  public:
	Animal();
	~Animal();
	Animal(const Animal& originalAnimal);
	Animal& operator=(const Animal& originalAnimal);
	virtual void makeSound();
};

#endif
