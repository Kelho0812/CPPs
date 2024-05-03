#include "../include/PhoneBook.hpp"
#include <cstdlib>
#include <iostream>

int main(void)
{
	PhoneBook *phonebook = new PhoneBook;
	std::string command;
	phonebook->print_menu();
	while (std::cin >> command)
	{
		if (command == "EXIT")
		{
			std::cout << "Goodbye" << std::endl;
			break;
		}
		else if (command == "ADD")
		{
			phonebook->add_contact_to_phonebook();
		}
		else if (command == "SEARCH")
		{
		}
		else
		{
			phonebook->print_menu();
		}
	}
	delete phonebook;
	return (0);
}