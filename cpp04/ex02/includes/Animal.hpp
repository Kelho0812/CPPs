/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 08:59:12 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/05 08:59:12 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	virtual void makeSound() = 0;
	virtual void checkThoughts() = 0;
  protected:
	std::string _type;
};

#endif
