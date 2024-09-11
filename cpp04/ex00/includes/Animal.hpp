/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:39:38 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/03 15:32:51 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
  protected:
	std::string _type;

  public:
	Animal();
	~Animal();
	Animal(const Animal& originalAnimal);
	Animal& operator=(const Animal& originalAnimal);
	virtual void makeSound();
};

#endif
