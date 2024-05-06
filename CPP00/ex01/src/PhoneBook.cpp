/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:30:59 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/06 12:08:05 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <ostream>
#include <sstream>
#include <string>
#include <unistd.h>

std::string formatString(const std::string &str);

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
	int i;

	i = 0;
	while (i < contacts_nr)
	{
		delete contacts[i];
		i++;
	}
}

int PhoneBook::contacts_nr = 0;
int PhoneBook::new_contact_index = 0;

void PhoneBook::add_contact_to_phonebook(void)
{
	std::string command;
	print_menu(1, true);
	if (contacts_nr < 8)
	{
		contacts_nr++;
	}
	if (new_contact_index > 7)
	{
		new_contact_index = 0;
	}
	contacts[new_contact_index] = new Contact;
	new_contact_index++;
	std::cout << "\n\033[33mContact Added\033[0m\n" << std::endl;
	print_menu(1, false);
	std::getline(std::cin, command);
	if (command == "ADD" || command == "add")
	{
		add_contact_to_phonebook();
	}
}

void PhoneBook::print_contact(int index)
{
	this->contacts[index]->print_contact();
}

void PhoneBook::display_phonebook(void)
{
	int i;
	int index;
	std::string command;
	print_menu(2, true);
	print_table_row("index", "first_name", "last_name", "nickname");
	if (contacts_nr == 0)
	{
		std::cout << "\n\n           |******************|" << std::endl;
		std::cout << "            PHONEBOOK IS EMPTY" << std::endl;
		std::cout << "           |******************|\n\n\n" << std::endl;
		std::cout << "Press \"ENTER\" to return to the \033[32mMain Menu\033[0m" << std::endl;
		std::cout << ">: ";
		std::string input;
		std::getline(std::cin, input);
	}
	else
	{
		i = 0;
		while (i < contacts_nr)
		{
			std::string first_name_formatted = formatString(contacts[i]->getFirstName());
			std::string last_name_formatted = formatString(contacts[i]->getLastName());
			std::string nickname_formatted = formatString(contacts[i]->getNickname());
			std::string darkest_secret_formatted = formatString(contacts[i]->getDarkestSecret());
			std::stringstream ss;
			ss << i;
			std::string index = ss.str();
			print_table_row(index, first_name_formatted, last_name_formatted, nickname_formatted);
			i++;
		}
		std::cout << "\nType the Index of the contact you wish to see" << std::endl;
		std::cout << ">: ";
		std::cin >> index;
		while (index < 0 || index >= contacts_nr || std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index. Please enter a number between 0 and " << new_contact_index - 1 << ".\n";
			std::cout << ">: ";
			std::cin >> index;
		}
		if (index >= 0 && index < contacts_nr)
		{

			print_contact(index);
		}
		print_menu(2, false);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::getline(std::cin, command);
		if (command == "SEARCH" || command == "search")
		{
			display_phonebook();
		}
	}
}

void PhoneBook::print_menu(int menu, bool first_time)
{
	if (menu == 0)
	{
		system("clear");
		std::cout << "Welcome to Vault 88 PhoneBook!" << std::endl;
		std::cout << "You are in: \033[32mMain Menu\033[0m" << std::endl;
		std::cout << "- Type 'ADD' to add a new contact to the PhoneBook" << std::endl;
		std::cout << "- Type 'SEARCH' to add a new contact to the PhoneBook" << std::endl;
		std::cout << "- Type 'EXIT' to exit the PhoneBook\n" << std::endl;
		std::cout << ">: ";
	}
	if (menu == 1)
	{
		if (first_time == true)
		{
			system("clear");
		}
		std::cout << "You are in: \033[32mAdd Menu\033[0m" << std::endl;
		if (first_time == true)
		{
			std::cout << "- Type the contact information one at a time." << std::endl;
			std::cout << "- The Phone Number should be a valid INT.\n" << std::endl;
		}
		if (first_time == false)
		{
			std::cout << "- Type \"ADD\" again to add another contact." << std::endl;
			std::cout << "- Press *ENTER* to exit to Main Menu.\n" << std::endl;
		}
		std::cout << ">: ";
	}
	if (menu == 2)
	{
		if (first_time == true)
		{
			system("clear");
			std::cout << "You are in: \033[32mSearch Menu\033[0m" << std::endl;
		}
		if (first_time == false)
		{
			std::cout << "\nYou are in: \033[32mSearch Menu\033[0m" << std::endl;
			std::cout << "- Type \"SEARCH\" again to redisplay all contacts." << std::endl;
			std::cout << "- Press *ENTER* to exit to Main Menu." << std::endl;
			std::cout << ">: ";
		}
	}
}

void PhoneBook::print_table_row(std::string word1, std::string word2, std::string word3, std::string word4,
								std::string word5)
{
	std::cout << "|" << std::right << std::setw(10) << word1;
	if (!word2.empty())
		std::cout << "|" << std::right << std::setw(10) << word2;
	if (!word3.empty())
		std::cout << "|" << std::right << std::setw(10) << word3;
	if (!word4.empty())
		std::cout << "|" << std::right << std::setw(10) << word4;
	if (!word5.empty())
		std::cout << "|" << std::right << std::setw(10) << word5;
	std::cout << "|" << std::endl;
}

std::string formatString(const std::string &str)
{
	if (str.size() > 10)
	{
		return str.substr(0, 9) + ".";
	}
	return str;
}