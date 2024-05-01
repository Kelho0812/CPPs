#include "../include/Contact.hpp"
#include <cstdio>
#include <iostream>
#include <limits>
#include <ostream>

Contact::Contact()
{
	std::cout << "Input First Name: " << std::endl;
	std::cin >> this->first_name;
	std::cout << "Input Last Name: " << std::endl;
	std::cin >> this->last_name;
	std::cout << "Input Nickname: " << std::endl;
	std::cin >> this->nickname;
	std::cout << "Input Phone Number: " << std::endl;
	do
	{
		std::cin >> phone_number;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input, please enter a number: ";
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