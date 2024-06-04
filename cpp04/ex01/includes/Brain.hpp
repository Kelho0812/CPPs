#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "string"
#include <iostream>

class Brain
{
  protected:
	std::string _ideas[100];

  public:
	Brain();
	~Brain();
	Brain(const Brain& originalBrain);
	Brain& operator=(const Brain& originalBrain);
	void checkThoughts(void);
	void setIdeas(std::string newIdea);
};

#endif
