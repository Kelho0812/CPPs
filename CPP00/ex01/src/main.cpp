#include "../include/PhoneBook.hpp"


int	main(void)
{

	PhoneBook *phonebook = new PhoneBook;
	std::string command;
	while (std::cin >> command)
	{
		if (command == "EXIT")
		{
			std::cout << "EXITING BITCH" << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			phonebook->add_contact_to_phonebook();
		}
		if (command == "SEARCH")
		{
			std::cout << "SEARCH NOT YET DONE" << std::endl;
		}
	}
	delete phonebook;
	return (0);
}