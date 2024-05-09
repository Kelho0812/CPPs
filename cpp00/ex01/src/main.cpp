/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:30:59 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/06 11:58:36 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

int main(void)
{
	PhoneBook *phonebook = new PhoneBook;
	std::string command;
	system("clear");
	phonebook->print_menu(0, true);
	while (std::getline(std::cin, command))
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
		phonebook->print_menu(0);
	}
	delete phonebook;
	return (0);
}
