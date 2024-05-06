#include "../include/PhoneBook.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

int main(void)
{
	PhoneBook *phonebook = new PhoneBook;
	std::string command;
	system("clear");
	phonebook->print_menu(true);
	while (std::cin >> command)
	{
		if (command == "EXIT" ||  command == "exit")
		{
			std::cout << "Goodbye" << std::endl;
			break;
		}
		else if (command == "ADD" || command == "add")
		{
			phonebook->add_contact_to_phonebook();
		}
		else if (command == "SEARCH" || command == "search")
		{
			phonebook->display_phonebook();
		}
		phonebook->print_menu();
	}
	delete phonebook;
	return (0);
}
