/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:39:51 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/03 15:21:16 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
};

#endif
