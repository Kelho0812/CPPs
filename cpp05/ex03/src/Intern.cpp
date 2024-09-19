/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:34:26 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/19 16:34:37 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default Constructor called.";
}
Intern::~Intern(void)
{
	std::cout << "Intern Default Destructor called.";
}
Intern::Intern(Intern const &copy)
{
	*this = copy;
}
const Intern &Intern::operator=(Intern const &copy)
{
	if(this != &copy)
	{
		
	}
	return *this;
}