/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:28:52 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/03 15:33:05 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include <sstream>


int main(void)
{
	Dog dog;
	Cat cat;
	Animal animal;

	dog.makeSound();
	cat.makeSound();
	animal.makeSound();
	return 0;
}
