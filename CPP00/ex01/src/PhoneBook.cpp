#include "../include/PhoneBook.hpp"
#include <cstring>
#include <iomanip>
#include <iostream>
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
	std::cout << "Contact Added\n" << std::endl;
	sleep(1);
}

void PhoneBook::print_contact(void)
{
	int i;

	i = 0;
	while (i < contacts_nr)
	{
		this->contacts[i]->print_contact();
		i++;
	}
}

void PhoneBook::display_phonebook(void)
{
	int i;
	print_table_row("index", "first_name", "last_name", "nickname");
	if (contacts_nr == 0)
	{
		std::cout << "            PHONEBOOK IS EMPTY\n\n\n" << std::endl;;
		return;
	}
	i = 0;
	while (i < contacts_nr)
	{
		std::string first_name_formatted = formatString(contacts[i]->getFirstName());
		std::string last_name_formatted = formatString(contacts[i]->getLastName());
		std::string nickname_formatted = formatString(contacts[i]->getNickname());
		std::string darkest_secret_formatted = formatString(contacts[i]->getDarkestSecret());
		print_table_row("0", first_name_formatted, last_name_formatted, nickname_formatted);
		i++;
	}
	std::cout << "Write the Index of the contact you wish to see";
	int index;
	std::cin >> index;
}

void PhoneBook::print_menu(bool first_time)
{
	if (first_time == true)
	{
		std::cout << "Welcome to Vault 88 PhoneBook!" << std::endl;
	}
	std::cout << "You are in: Main Menu" << std::endl;
	std::cout << "- Write 'ADD' to add a new contact to the PhoneBook" << std::endl;
	std::cout << "- Write 'SEARCH' to add a new contact to the PhoneBook" << std::endl;
	std::cout << "- Write 'EXIT' to exit the PhoneBook\n" << std::endl;
	std::cout << ">: ";
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