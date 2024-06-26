/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:30:59 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/07 11:04:22 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include <cstdlib>
#include <iostream>
#include <limits>

Contact::Contact()
{
	std::cout << "Input First Name: " << std::endl;
	std::cout << ">: ";
	std::cin >> this->first_name;
	std::cout << "Input Last Name: " << std::endl;
	std::cout << ">: ";
	std::cin >> this->last_name;
	std::cout << "Input Nickname: " << std::endl;
	std::cout << ">: ";
	std::cin >> this->nickname;
	std::cout << "Input Phone Number: " << std::endl;
	std::cout << ">: ";
	do
	{
		std::cin >> phone_number;
		if (std::cin.eof() == 1)
		{
			break ;
		}
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input, please enter a number:" << std::endl;
			std::cout << ">: ";
		}
		else
		{
			break ;
		}
	} while (true);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Input Darkest Secret: " << std::endl;
	getline(std::cin, this->darkest_secret);
}

void Contact::print_contact(void)
{
	std::cout << "First Name: " << this->first_name << std::endl;
	std::cout << "Last Name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}

Contact::~Contact()
{
	// Nothing to clean up
}
